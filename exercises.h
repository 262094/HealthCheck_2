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

private:
    Ui::Exercises *ui;
};

#endif // EXERCISES_H
