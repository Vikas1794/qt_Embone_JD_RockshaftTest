#include "testgitdialog.h"
#include "ui_testgitdialog.h"

testGitDialog::testGitDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testGitDialog)
{
    ui->setupUi(this);
}

testGitDialog::~testGitDialog()
{
    delete ui;
}
