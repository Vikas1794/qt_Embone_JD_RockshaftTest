#include "testgitdialog.h"
#include "ui_testgitdialog.h"

testGitDialog::testGitDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testGitDialog)
{
    ui->setupUi(this);
    ui->label->setAlignment(Qt::AlignCenter);
}

testGitDialog::~testGitDialog()
{
    delete ui;
}

void testGitDialog::on_pushButton_clicked()
{
    ui->label->setText("vikas");
    //add by online
}
