#include "exercises.h"
#include "ui_exercises.h"
#include<QUrl>
#include<QDesktopServices>
#include <QWebEngineView>
#include <QApplication>


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


void Exercises::on_pushButton_clicked()
{
    QWebEngineView *view = new QWebEngineView();
    view->load(QUrl("https://cdn2.coachmag.co.uk/sites/coachmag/files/styles/insert_main_wide_image/public/2019/03/sundried-legs-workout.jpg?itok=m3gtXnUf"));
    view->show();

}


void Exercises::on_pushButton_2_clicked()
{
    QWebEngineView *view = new QWebEngineView();
    view->load(QUrl("https://darebee.com/images/workouts/express-abs-workout.jpg"));
    view->show();

}


void Exercises::on_pushButton_3_clicked()
{
    QWebEngineView *view = new QWebEngineView();
    view->load(QUrl("https://i.pinimg.com/originals/eb/bd/cc/ebbdcc88e7d8c6ea4a29176c73e3e9e4.jpg"));
    view->show();
}


void Exercises::on_pushButton_4_clicked()
{
    QWebEngineView *view = new QWebEngineView();
    view->load(QUrl("https://i.pinimg.com/originals/1f/dd/cf/1fddcff15e2eaafb2849814651598443.jpg"));
    view->show();
}


void Exercises::on_pushButton_5_clicked()
{


    QWebEngineView *view = new QWebEngineView();
    view->load(QUrl("https://www.youtube.com/watch?v=IACEm25WC6U"));
    view->show();
}


void Exercises::on_pushButton_6_clicked()
{
    QWebEngineView *view = new QWebEngineView();
    view->load(QUrl("https://i.pinimg.com/originals/7d/bb/2e/7dbb2e02d9b653dcb57576ad364a210f.png"));
    view->show();
}

