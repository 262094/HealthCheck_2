#include "liczeniekcal.h"
#include <QMessageBox>
#include <QDebug>






liczeniekcal:: liczeniekcal(QString gender, QString activity, float height, float weight, float age)

{

    float kcal_men = (66.5 + 13.75 * weight + 5.003 * height - 6.775*age);
    float kcal_women = (655.1 + 9.563 * weight + 1.85 * height - 4.676*age);



    if(gender== "MEN")
    {
        if(activity== "1. Lack of physical activity" )
          QMessageBox::about(QDialog::find(0),"KCAL", QString ("You need %1 KCAL every day").arg(kcal_men*1.0f));
        if(activity== "2. Low level physical activity" )
          QMessageBox::about(QDialog::find(0),"KCAL", QString ("You need %1 KCAL every day").arg(kcal_men*1.2f));
        if(activity== "3. Training twice a week" )
          QMessageBox::about(QDialog::find(0),"KCAL", QString ("You need %1 KCAL every day").arg(kcal_men*1.4f));
        if(activity== "4. Training 3-4 times a week" )
          QMessageBox::about(QDialog::find(0),"KCAL", QString ("You need %1 KCAL every day").arg(kcal_men*1.6f));
        if(activity== "5. Training 5 times a week" )
          QMessageBox::about(QDialog::find(0),"KCAL", QString ("You need %1 KCAL every day").arg(kcal_men*1.8f));
        if(activity== "6. Very hard physical work" )
          QMessageBox::about(QDialog::find(0),"KCAL", QString ("You need %1 KCAL every day").arg(kcal_men*2.0f));
    }

    if(gender== "WOMEN")
    {
        if(activity== "1. Lack of physical activity" )
          QMessageBox::about(QDialog::find(0),"KCAL", QString ("You need %1 KCAL every day").arg(kcal_women*1.0f));
        if(activity== "2. Low level physical activity" )
          QMessageBox::about(QDialog::find(0),"KCAL", QString ("You need %1 KCAL every day").arg(kcal_women*1.2f));
        if(activity== "3. Training twice a week" )
          QMessageBox::about(QDialog::find(0),"KCAL", QString ("You need %1 KCAL every day").arg(kcal_women*1.4f));
        if(activity== "4. Training 3-4 times a week" )
          QMessageBox::about(QDialog::find(0),"KCAL", QString ("You need %1 KCAL every day").arg(kcal_women*1.6f));
        if(activity== "5. Training 5 times a week" )
          QMessageBox::about(QDialog::find(0),"KCAL", QString ("You need %1 KCAL every day").arg(kcal_women*1.8f));
        if(activity== "6. Very hard physical work" )
          QMessageBox::about(QDialog::find(0),"KCAL", QString ("You need %1 KCAL every day").arg(kcal_women*2.0f));

    }


}

