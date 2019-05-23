#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include"number.h"

namespace Ui {
class game;
}

class game : public QWidget
{
    Q_OBJECT

public:
    explicit game(QWidget *parent = 0);
    ~game();
    void add();
    QString nts(int n);


private slots:
    void on_pushButton_5_clicked();



    void on_putup_clicked();

    void on_putdown_clicked();

    void on_putleft_clicked();

    void on_putright_clicked();

private:
   Ui::game *ui;
    number n;


};

#endif // GAME_H
