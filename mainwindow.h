#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialogadd.h"
#include "dialogmove.h"
#include "mymodel.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void paintEvent(QPaintEvent *event);
    void setModel(MyModel* pModel);
    MyModel* getModel();
private:
    Ui::MainWindow *ui;
    DialogAdd *m_pDlgAdd;
    DialogMove *m_pDlgMove;
    MyModel* m_pModel;
private slots:
    void onActionAdd();
    void onActionMove();
    void onActionClear();
    void onUpdate();
//    void onAdd();
//    void onMove();
};
#endif // MAINWINDOW_H
