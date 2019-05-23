#ifndef NUMBER_H
#define NUMBER_H
#include<ctime>
#include<cstdlib>
#include<QString>
class number
{
public:
    number();
    bool isfin();
    void mow();
    void mos();
    void moa();
    void mod();
    void asui();
    int putso();
    int*putn();
    void change(int n[4]);
private:
    int num[4][4];
    int score;
};


#endif // NUMBER_H
