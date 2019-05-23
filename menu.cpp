#include "menu.h"
#include "ui_menu.h"

menu::menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
    //QWidget *menu = new QWidget(this);
    //QWidget *game = new QWidget(this);
    //menu->show();
    //game->hide();
    //connect(menu,&QWidget::close,game,&QWidget::show);

}


menu::~menu()
{
    delete ga;
    delete ui;
}

void menu::on_butst_clicked()
{
    delete ga;

    this->ga=new game;
    this->ga->show();
    this->ga->add();

}

void menu::on_pushButton_4_clicked()
{
    this->close();
}

void menu::on_pushButton_2_clicked()
{
    this->ui->labhelp->setText("2048都不知道，别玩了");
}

void menu::on_pushButton_3_clicked()
{
    this->ga->show();
}
