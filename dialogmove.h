#ifndef DIALOGMOVE_H
#define DIALOGMOVE_H

#include <QDialog>
#include <QButtonGroup>

namespace Ui {
class DialogMove;
}

class DialogMove : public QDialog
{
    Q_OBJECT

public:
    explicit DialogMove(QWidget *parent = nullptr);
    ~DialogMove();

private:
    Ui::DialogMove *ui;
    QButtonGroup *m_pButtonGroup;
    int m_iType;
public slots:
    void accept()override;
//    void reject()override;
    void onButtonClicked(QAbstractButton*);
};

#endif // DIALOGMOVE_H
