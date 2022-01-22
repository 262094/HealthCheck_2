#ifndef EXERCISES_H
#define EXERCISES_H

#include <QWidget>

namespace Ui {
class Exercises;
}

class Exercises : public QWidget
{
    Q_OBJECT

public:
    explicit Exercises(QWidget *parent = nullptr);
    ~Exercises();

signals:
    void HomeClicked();

private slots:
    void on_pushButton_back_to_menu_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::Exercises *ui;
 QUrl commandLineUrlArgument();
};

#endif // EXERCISES_H
