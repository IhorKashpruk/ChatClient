#include "dialogauthorization.h"
#include "ui_dialogauthorization.h"

DialogAuthorization::DialogAuthorization(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAuthorization)
{
    ui->setupUi(this);
}

DialogAuthorization::~DialogAuthorization()
{
    delete ui;
}
