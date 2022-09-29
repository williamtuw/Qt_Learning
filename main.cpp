#include "mainwindow.h"
#include <QApplication>
#include "mymodel.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    MyModel model;

    w.setModel(&model);
    w.show();
    return a.exec();
}
