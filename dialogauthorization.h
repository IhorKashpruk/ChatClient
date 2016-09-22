#ifndef DIALOGAUTHORIZATION_H
#define DIALOGAUTHORIZATION_H

#include <QDialog>

namespace Ui {
class DialogAuthorization;
}

class DialogAuthorization : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAuthorization(QWidget *parent = 0);
    ~DialogAuthorization();

private:
    Ui::DialogAuthorization *ui;
};

#endif // DIALOGAUTHORIZATION_H
