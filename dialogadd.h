#ifndef DIALOGADD_H
#define DIALOGADD_H

#include <QDialog>
#include <QButtonGroup>

namespace Ui {
class DialogAdd;
}

class DialogAdd : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAdd(QWidget *parent = nullptr);
    ~DialogAdd();

private:
    Ui::DialogAdd *ui;
    QButtonGroup *m_pButtonGroup;
    int m_iType;
public slots:
    void accept()override;
//    void reject()override;
    void onButtonClicked(QAbstractButton*);
};

#endif // DIALOGADD_H
