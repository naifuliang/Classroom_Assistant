#ifndef CHOOSEROLE_H
#define CHOOSEROLE_H

#include <QDialog>

namespace Ui {
class ChooseRole;
}

class ChooseRole : public QDialog
{
    Q_OBJECT

public:
    explicit ChooseRole(QWidget *parent = nullptr);
    ~ChooseRole();

private:
    Ui::ChooseRole *ui;
};

#endif // CHOOSEROLE_H
