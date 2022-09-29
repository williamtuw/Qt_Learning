#include "dialogmove.h"
#include "ui_dialogmove.h"
#include "CGraph.h"
#include <QMessageBox>
#include "mainwindow.h"
#include "mymodel.h"

DialogMove::DialogMove(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogMove),m_iType(0)
{
    ui->setupUi(this);

    m_pButtonGroup = new QButtonGroup(this);

    // Add buttons to group.
    m_pButtonGroup->addButton(ui->rdBtnTriangle,CGraph::GRAPH_TRIANGLE);
    m_pButtonGroup->addButton(ui->rdBtnRectangle,CGraph::GRAPH_RECTANGLE);
    m_pButtonGroup->addButton(ui->rdBtnCircle,CGraph::GRAPH_ELLIPSE);
    m_pButtonGroup->addButton(ui->rdBtnDefault,CGraph::GRAPH_DEFAULT);

    // 连接信号槽
    connect(m_pButtonGroup, SIGNAL(buttonClicked(QAbstractButton*)), this, SLOT(onButtonClicked(QAbstractButton*)));
}

DialogMove::~DialogMove()
{
    delete ui;
    delete m_pButtonGroup;
}

void DialogMove::accept()
{
    //Move Graph.
    //判断输入的有效性
//    assert(!(ui->offsetX->value()==0 && ui->offsetY->value()==0));

    if (ui->offsetX->value()==0 && ui->offsetY->value()==0)
    {
        QMessageBox::information(this,"Mistake","offsetX can't be zero.");
        return;
    }

    //Get model.
    MainWindow* pMainWindow = (MainWindow*)parent();
    MyModel* pM = nullptr;
    if(pMainWindow)
        pM = pMainWindow->getModel();
    if(!pM)
        return;

    //移动图形
    pM->moveGraphs(ui->offsetX->value(), ui->offsetY->value(),m_iType);

    QDialog::accept();
}

void DialogMove::onButtonClicked(QAbstractButton* pBtn)
{
    m_iType =  m_pButtonGroup->id(pBtn);
}
