#ifndef TESTGITDIALOG_H
#define TESTGITDIALOG_H

#include <QDialog>

namespace Ui {
class testGitDialog;
}

class testGitDialog : public QDialog
{
    Q_OBJECT

public:
    explicit testGitDialog(QWidget *parent = nullptr);
    ~testGitDialog();

private:
    Ui::testGitDialog *ui;
};

#endif // TESTGITDIALOG_H
