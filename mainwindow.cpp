#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),m_pModel(nullptr)
{
    ui->setupUi(this);

    m_pDlgAdd = new DialogAdd(this);
    m_pDlgMove = new DialogMove(this);

    //bond
    connect(ui->actionadd,SIGNAL(triggered()),this,SLOT(onActionAdd()));
    connect(ui->actionmove,SIGNAL(triggered()),this,SLOT(onActionMove()));
    connect(ui->actionclear,SIGNAL(triggered()),this,SLOT(onActionClear()));
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    //Nullptr protect.
    if(m_pModel == NULL)
        return;

    //Paint this widget here.
    QPainter painter(this);

//    //Set pen.
//    painter.setPen(Qt::blue);
//    painter.drawLine(QPoint(100,100),QPoint(200,100));
//    painter.drawRect(0,0,100,100);
//    painter.drawEllipse(0,0,100,100);

    //获取引用
//    const QList<CGraph*>& arrGraphs = m_pModel->getList();
    const auto& arrGraphs = m_pModel->getList();

    int i = int(arrGraphs.count()-1);
    for (; i >=0; i--)
    {
        arrGraphs[i]->Draw(&painter);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
    delete m_pDlgAdd;
    delete m_pDlgMove;

}

void MainWindow::setModel(MyModel* pModel)
{

    m_pModel = pModel;
    if(m_pModel)
        connect(m_pModel,SIGNAL(update()),this,SLOT(onUpdate()));
}

void MainWindow::onActionAdd()
{

    m_pDlgAdd->setModal(Qt::ApplicationModal);
    m_pDlgAdd->show();
}

void MainWindow::onActionMove()
{

    m_pDlgMove->setModal(Qt::ApplicationModal);
    m_pDlgMove->show();

}

void MainWindow::onActionClear()
{
    if(m_pModel)
        m_pModel->clear();

}

void MainWindow::onUpdate()
{
    update();
}

MyModel* MainWindow::getModel()
{
    return m_pModel;
}
//void MainWindow::onAdd()
//{

//}

//void MainWindow::onMove()
//{

//}
