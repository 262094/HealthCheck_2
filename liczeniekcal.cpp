#include "liczeniekcal.h"
#include <QMessageBox>
#include <QDebug>


liczeniekcal:: liczeniekcal(QString gender, QString activity, float height, float weight, float age, int index)

{


    mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/Łukasz/Desktop/mydb.db");

    if(!mydb.open())
    {
        qDebug()<<"Failed to open the database" << mydb.lastError().text();
    }


    QSqlQuery qry;



    float kcal_men = (66.5 + 13.75 * weight + 5.003 * height - 6.775*age);
    float kcal_women = (655.1 + 9.563 * weight + 1.85 * height - 4.676*age);




    if(gender== "MEN")
    {

        if(activity== "1. Lack of physical activity" )
        {
          float kcal=kcal_men*1.0;
          QMessageBox::about(QDialog::find(0),"KCAL", QString ("You need %1 KCAL every day").arg(kcal));
          qry.prepare("update users set kcal=:kcal where id=:id");
          qry.bindValue(":id", index);
          qry.bindValue(":kcal",  round(kcal));
          qry.exec();
        }

        if(activity== "2. Low level physical activity" )
        {
            float kcal=kcal_men*1.2;
            QMessageBox::about(QDialog::find(0),"KCAL", QString ("You need %1 KCAL every day").arg(kcal));
            qry.prepare("update users set kcal=:kcal where id=:id");
            qry.bindValue(":id", index);
            qry.bindValue(":kcal",  round(kcal));
            qry.exec();
        }

        if(activity== "3. Training twice a week" )
        {
            float kcal=kcal_men*1.4;
            QMessageBox::about(QDialog::find(0),"KCAL", QString ("You need %1 KCAL every day").arg(kcal));
            qry.prepare("update users set kcal=:kcal where id=:id");
            qry.bindValue(":id", index);
            qry.bindValue(":kcal",  round(kcal));
            qry.exec();
        }

        if(activity== "4. Training 3-4 times a week" )
        {
            float kcal=kcal_men*1.6;
            QMessageBox::about(QDialog::find(0),"KCAL", QString ("You need %1 KCAL every day").arg(kcal));
            qry.prepare("update users set kcal=:kcal where id=:id");
            qry.bindValue(":id", index);
            qry.bindValue(":kcal",  round(kcal));
            qry.exec();
        }

        if(activity== "5. Training 5 times a week" )
        {
            float kcal=kcal_men*1.8;
            QMessageBox::about(QDialog::find(0),"KCAL", QString ("You need %1 KCAL every day").arg(kcal));
            qry.prepare("update users set kcal=:kcal where id=:id");
            qry.bindValue(":id", index);
            qry.bindValue(":kcal",  round(kcal));
            qry.exec();
        }

        if(activity== "6. Very hard physical work" )
        {
            float kcal=kcal_men*2.0;
            QMessageBox::about(QDialog::find(0),"KCAL", QString ("You need %1 KCAL every day").arg(kcal));
            qry.prepare("update users set kcal=:kcal where id=:id");
            qry.bindValue(":id", index);
            qry.bindValue(":kcal",  round(kcal));
            qry.exec();
        }

    }




    if(gender== "WOMEN")
    {


        if(activity== "1. Lack of physical activity" )
          {
            float kcal=kcal_women*1.0;
          QMessageBox::about(QDialog::find(0),"KCAL", QString ("You need %1 KCAL every day").arg(kcal));
          qry.prepare("update users set kcal=:kcal where id=:id");
          qry.bindValue(":id", index);
          qry.bindValue(":kcal",  round(kcal));
          qry.exec();
          }

        if(activity== "2. Low level physical activity" )
          {
            float kcal=kcal_women*1.2;
          QMessageBox::about(QDialog::find(0),"KCAL", QString ("You need %1 KCAL every day").arg(kcal));
          qry.prepare("update users set kcal=:kcal where id=:id");
          qry.bindValue(":id", index);
          qry.bindValue(":kcal",  round(kcal));
          qry.exec();
          }

        if(activity== "3. Training twice a week" )
          {
            float kcal=kcal_women*1.4;
          QMessageBox::about(QDialog::find(0),"KCAL", QString ("You need %1 KCAL every day").arg(kcal));
          qry.prepare("update users set kcal=:kcal where id=:id");
          qry.bindValue(":id", index);
          qry.bindValue(":kcal",  round(kcal));
          qry.exec();
          }

        if(activity== "4. Training 3-4 times a week" )
          {
            float kcal=kcal_women*1.6;
          QMessageBox::about(QDialog::find(0),"KCAL", QString ("You need %1 KCAL every day").arg(kcal));
          qry.prepare("update users set kcal=:kcal where id=:id");
          qry.bindValue(":id", index);
          qry.bindValue(":kcal",  round(kcal));
          qry.exec();
          }

        if(activity== "5. Training 5 times a week" )
          {
            float kcal=kcal_women*1.8;
          QMessageBox::about(QDialog::find(0),"KCAL", QString ("You need %1 KCAL every day").arg(kcal));
          qry.prepare("update users set kcal=:kcal where id=:id");
          qry.bindValue(":id", index);
          qry.bindValue(":kcal",  round(kcal));
          qry.exec();
          }

        if(activity== "6. Very hard physical work" )
          {
            float kcal=kcal_women*2.0;
          QMessageBox::about(QDialog::find(0),"KCAL", QString ("You need %1 KCAL every day").arg(kcal));
          qry.prepare("update users set kcal=:kcal where id=:id");
          qry.bindValue(":id", index);
          qry.bindValue(":kcal",  round(kcal));
          qry.exec();
          }

    }


}

