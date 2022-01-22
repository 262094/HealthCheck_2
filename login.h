#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QDialog>
//#include "healtcheck.h"

namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();
    int index;
    int count=0;

private slots:
    void on_pushButton_login_clicked();

signals:
 //   void signalid(int);

private:
    Ui::Login *ui;
    void loginform();
    QSqlDatabase mydb;
 //   HealtCheck *hChWindow{nullptr};
};

#endif // LOGIN_H
