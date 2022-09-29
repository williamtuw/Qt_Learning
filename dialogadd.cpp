#include "dialogadd.h"
#include "ui_dialogadd.h"
#include "CGraph.h"
#include "mainwindow.h"
#include "mymodel.h"
#include <QMessageBox>

DialogAdd::DialogAdd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAdd),m_iType(0)
{
    ui->setupUi(this);

    m_pButtonGroup = new QButtonGroup(this);

    // Add buttons to group.
    m_pButtonGroup->addButton(ui->typeTriangle,CGraph::GRAPH_TRIANGLE);
    m_pButtonGroup->addButton(ui->typeRectangle,CGraph::GRAPH_RECTANGLE);
    m_pButtonGroup->addButton(ui->typeCircle,CGraph::GRAPH_ELLIPSE);

    // 连接信号槽
    connect(m_pButtonGroup, SIGNAL(buttonClicked(QAbstractButton*)), this, SLOT(onButtonClicked(QAbstractButton*)));

}

DialogAdd::~DialogAdd()
{
    delete ui;
    delete m_pButtonGroup;
}

void DialogAdd::accept()
{
    //判断输入有效性
//    assert(ui->dblRadius->value() >0);

    if (ui->dblRadius->value() <= 0)
    {
        QMessageBox::information(this,"Mistake","Radius must greter than 0.");
        return;
    }

    //Get model.
    MainWindow* pMainWindow = (MainWindow*)parent();
    MyModel* pM = nullptr;
    if(pMainWindow)
        pM = pMainWindow->getModel();
    if(!pM)
        return;

    pM->addGraph(ui->dlbCenterX->value(), ui->dlbCenterY->value(), ui->dblRadius->value(),m_iType);

    QDialog::accept();
}

void DialogAdd::onButtonClicked(QAbstractButton* pBtn)
{
    m_iType =  m_pButtonGroup->id(pBtn);
}
