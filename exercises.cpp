#include "exercises.h"
#include "ui_exercises.h"

Exercises::Exercises(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Exercises)
{
    ui->setupUi(this);
}

Exercises::~Exercises()
{
    delete ui;
}

void Exercises::on_pushButton_back_to_menu_clicked()
{
    emit HomeClicked();
}

