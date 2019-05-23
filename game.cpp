#include "game.h"
#include "ui_game.h"

game::game(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::game)
{
    ui->setupUi(this);

}

game::~game()
{
    delete ui;
}

void game::add()  //显示
{
    int num[16];
    int *nu=n.putn();
    for(int j=0;j<16;j++)
    {
        num[j]=*nu;
        nu++;
    }
    int i=0;
    this->ui->dis11->setText(nts(num[i++]));
    this->ui->dis12->setText(nts(num[i++]));
    this->ui->dis13->setText(nts(num[i++]));
    this->ui->dis14->setText(nts(num[i++]));
    this->ui->dis21->setText(nts(num[i++]));
    this->ui->dis22->setText(nts(num[i++]));
    this->ui->dis23->setText(nts(num[i++]));
    this->ui->dis24->setText(nts(num[i++]));
    this->ui->dis31->setText(nts(num[i++]));
    this->ui->dis32->setText(nts(num[i++]));
    this->ui->dis33->setText(nts(num[i++]));
    this->ui->dis34->setText(nts(num[i++]));
    this->ui->dis41->setText(nts(num[i++]));
    this->ui->dis42->setText(nts(num[i++]));
    this->ui->dis43->setText(nts(num[i++]));
    this->ui->dis44->setText(nts(num[i++]));
}
void game::on_pushButton_5_clicked()
{
   this->hide();
}



/*void game::write ()
{
    this->finsh=new Form;
    finsh->setscroe(this->n.score);
    this->finsh->show();

}*/



void game::on_putup_clicked()    //变换
{
    if(this->n.isfin()) {this->ui->labfin->setText("游戏结束");ui->pushButton_5->setText("结束");return;}  //判断是否结束
    int num[16];
    int *nu=n.putn();
    for(int j=0;j<16;j++)
    {
        num[j]=*nu;
        nu++;
    }
    this->n.mow();  //变换
    int pan=0,k=0;
    nu=n.putn();
    for(int j=0;j<16;j++)
    {
        if(*nu!=num[pan++]) k=1;
        nu++;
    }
     //判断是否有效

    if(k) {this->n.asui();
    this->add();
    char st[10];
    itoa(this->n.putso(),st,10);
     QString numb=st;
    this->ui->labscore->setText("分数:    "+numb);
     this->ui->labfin->setText("很好");
    }
    else this->ui->labfin->setText("无效");
}

void game::on_putdown_clicked()
{
    if(this->n.isfin()) {this->ui->labfin->setText("游戏结束");ui->pushButton_5->setText("结束");return;}
    int num[16];
    int *nu=n.putn();
    for(int j=0;j<16;j++)
    {
        num[j]=*nu;
        nu++;
    }
    this->n.mos();
    int pan=0,k=0;
    nu=n.putn();
    for(int j=0;j<16;j++)
    {
        if(*nu!=num[pan++]) k=1;
        nu++;
    }
    if(k) {this->n.asui();
    this->add();
    char st[10];
    itoa(this->n.putso(),st,10);
     QString numb=st;
    this->ui->labscore->setText("分数:    "+numb);
     this->ui->labfin->setText("很好");
    }
    else this->ui->labfin->setText("无效");
}

void game::on_putleft_clicked()
{
    if(this->n.isfin()) {this->ui->labfin->setText("游戏结束");ui->pushButton_5->setText("结束");return;}
    int num[16];
    int *nu=n.putn();
    for(int j=0;j<16;j++)
    {
        num[j]=*nu;
        nu++;
    }
    this->n.moa();
    int pan=0,k=0;
    nu=n.putn();
    for(int j=0;j<16;j++)
    {
        if(*nu!=num[pan++]) k=1;
        nu++;
    }
    if(k) {this->n.asui();
    this->add();
    char st[10];
    itoa(this->n.putso(),st,10);
     QString numb=st;
    this->ui->labscore->setText("分数:    "+numb);
     this->ui->labfin->setText("很好");
    }
    else this->ui->labfin->setText("无效");
}

void game::on_putright_clicked()
{
    if(this->n.isfin()) {this->ui->labfin->setText("游戏结束");ui->pushButton_5->setText("结束");return;}
    int num[16];
    int *nu=n.putn();
    for(int j=0;j<16;j++)
    {
        num[j]=*nu;
        nu++;
    }
    this->n.mod();
    int pan=0,k=0;
    nu=n.putn();
    for(int j=0;j<16;j++)
    {
        if(*nu!=num[pan++]) k=1;
        nu++;
    }
    if(k) {this->n.asui();
    this->add();
    char st[10];
    itoa(this->n.putso(),st,10);
     QString numb=st;
    this->ui->labscore->setText("分数:    "+numb);
     this->ui->labfin->setText("很好");
    }
    else this->ui->labfin->setText("无效");
}
QString game::nts(int n)
{
    if(n==0) return "";
    if(n==2) return "2";
    if(n==4) return "4";
    if(n==8) return "8";
    if(n==16) return "16";
    if(n==32) return "32";
    if(n==64) return "64";
    if(n==128) return "128";
    if(n==256) return "256";
    if(n==512) return "512";
    if(n==1024) return "1024";
    if(n==2048) return "2048";
    if(n==4096) return "4096";
    if(n==8192) return "8192";
    if(n==16384) return "16384";
    if(n==32768) return "32768";
    if(n==65536) return "65536";


}
