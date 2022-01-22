#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include <QDebug>
#include <QSqlQuery>
#include "healtcheck.h"


Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);



    mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/Łukasz/Desktop/mydb.db");

    if(!mydb.open())
    {
        qDebug()<<"Failed to open the database" << mydb.lastError().text();
    }
}

Login::~Login()
{
    mydb.close();
    delete ui;
}




void Login::on_pushButton_login_clicked()
{
    loginform();
}

void Login::loginform()
{
     HealtCheck *hChWindow;
     hChWindow = new HealtCheck;

    QString username, password;
    username=ui->lineEdit->text();
    password=ui->lineEdit_2->text();

    QSqlQuery qry;
    qry.prepare("select * from users where username=:username and password=:password");
    qry.bindValue(":username", username);
    qry.bindValue(":password", password);

    if(qry.exec())
    {
        while(qry.next())
        {
            count++;
            index = qry.value(0).toInt();
        }

        if(count==1)
        {
            ui->label_4 ->setText("Correct username and password");
       //    emit signalid(index);
            hChWindow->show();
            this->close();
        }

        if(count>1)
        {
            ui->label_4 ->setText("User already exists");
        }

        if(count<1)
            ui-> label_4->setText("Not correct username and password");
    }

}

/*
qry.prepare("INSERT INTO users (username, password)" "VALUES (:username, :password)");
        qry.bindValue(":username", username);
        qry.bindValue(":password", password);
*/
