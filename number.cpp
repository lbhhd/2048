#include "number.h"




number::number()
{
     srand((unsigned)time(NULL));
     for(int i=0;i<4;i++)
         for(int j=0;j<4;j++)
             num[i][j]=0;
     int sui=rand()%16;
     num[sui/4][sui%4]=2;
     score=0;
}


int number::putso()
{
    return this->score;
}
int*number::putn()
{
    return num[0];
}

bool number::isfin()
{
    int c, b;
        for (c = 0; c<4; c++)
            for (b = 0; b<4; b++)
                if (num[c][b] == 0)return false;
        for (c = 0; c<4; c++)
            for (b = 0; b<3; b++)
                if (num[c][b] == num[c][b + 1])return false;
        for (c = 0; c<4; c++)
            for (b = 0; b<3; b++)
                if (num[b][c] == num[b + 1][c])return false;
        return true;
}
void number::change(int n[4])
{

        int c,d,i,j,e;

        for (c = 0; c<4; c++)
        {
            d = c;
            while (1)
            {

                if (n[d++] != 0)
                {
                    i = n[d - 1];
                    while (1)
                    {
                        if (d == 4) { j = 0; break; }
                        if (n[d++] != 0) { j = n[d - 1]; break; }
                    }
                    break;
                }

                if (d == 4) { i = 0; j = 0; break; }
            }
            if (i == j || i == 0 || j == 0)
            {
                n[c] = i + j;
                if (i == j && i != 0)  score += i;
                for (e = c + 1; e<d; e++) n[e] = 0;
            }
            else
            {
                n[c] = i; n[c + 1] = j;
                for (e = c + 2; e<d; e++) n[e] = 0;
            }
        }
}

void number::mow()
{
    int b,n[4];
    for (b = 0; b<4; b++)
    {


        for(int i=0;i<4;i++)
            n[i]=num[i][b];

        change(n);
        for(int i=0;i<4;i++)
            num[i][b]=n[i];
        /*for(c=0;c<4;c++)
            {
            d=c;
            while(1)
               {

                if(num[d++][b]!=0)
                    {
                    i=num[d-1][b];
                    while(1)
                         {
                        if(d==4) {j=0;break;}
                        if(num[d++][b]!=0) {j=num[d-1][b];break;}
                         }
                    break;
                    }

                if(d==4) {i=0;j=0;break;}
                }
            if(i==j||i==0||j==0)
            {
                num[c][b]=i+j;
                if(i==j&&i!=0)  score+=i;
                for(e=c+1;e<d;e++) num[e][b]=0;
            }
            else
            {
            num[c][b]=i;num[c+1][b]=j;
            for(e=c+2;e<d;e++) num[e][b]=0;
            }
     }*/
}

}

void number::mos()
{
    int n[4],b;


        for (b = 0; b<4; b++)
        {


            for(int i=3;i>=0;i--)
                n[3-i]=num[i][b];

            change(n);
            for(int i=3;i>=0;i--)
                num[i][b]=n[3-i];


        /* for(c=3;c>-1;c--)
            {
            d=c;
            while(1)
               {

                if(num[d--][b]!=0)
                    {
                    i=num[d+1][b];
                    while(1)
                         {
                        if(d==-1) {j=0;break;}
                        if(num[d--][b]!=0) {j=num[d+1][b];break;}
                         }
                    break;
                    }

                if(d==-1) {i=0;j=0;break;}
                }
            if(i==j||i==0||j==0)
                {
            num[c][b]=i+j;
            if(i==j&&i!=0)  score+=i;
            for(e=c-1;e>d;e--) num[e][b]=0;
            }
            else {
            num[c][b]=i;num[c-1][b]=j;
            for(e=c-2;e>d;e--) num[e][b]=0;
            }

            }*/
    }

    /*int c, b,d;
    for (b = 0; b < 4; b++)
                for (c = 3; c > 0; c--)
                {
                    d = c - 1;
                    while (num[d--][b] == 0) if (d == -1)break;
                    if (d == -1 && num[0][b] == 0)break;
                    if (num[c][b] == 0 || num[c][b] == num[d + 1][b]) { num[c][b] += num[d + 1][b]; num[c - 1][b] = 0; }
                    else num[c - 1][b] = num[d + 1][b];
                    if ((c - d)>2)for (int i = c - 2; i >d; i--) num[i][b] = 0;
                }*/
}
void number::moa()
{

    int n[4],b;
    for (b = 0; b<4; b++)
    {
        for(int i=0;i<4;i++)
            n[i]=num[b][i];

        change(n);
        for(int i=0;i<4;i++)
            num[b][i]=n[i];





         /*for(c=0;c<4;c++)
            {
            d=c;
            while(1)
               {

                if(num[b][d++]!=0)
                    {
                    i=num[b][d-1];
                    while(1)
                         {
                        if(d==4) {j=0;break;}
                        if(num[b][d++]!=0) {j=num[b][d-1];break;}
                         }
                    break;
                    }

                if(d==4) {i=0;j=0;break;}
                }
            if(i==j||i==0||j==0)
            {
                num[b][c]=i+j;
                if(i==j&&i!=0)  score+=i;
                for(e=c+1;e<d;e++) num[b][e]=0;
            }
            else {
            num[b][c]=i;num[b][c+1]=j;
            for(e=c+2;e<d;e++) num[b][e]=0;

            }

            }*/
    }





    /*int c, b,d;
    for (c = 0; c < 4; c++)
                for (b = 0; b < 3; b++)
                {
                    d = b + 1;
                    while (num[c][d++] == 0)if (d == 4)break;
                    if (d == 4 && num[c][d - 1] == 0)break;
                    if (num[c][b]==0||num[c][b] == num[c][d - 1])
                        {
                            num[c][b] += num[c][d - 1];
                            num[c][b + 1] = 0;
                        }
                    else num[c][b + 1] = num[c][d - 1];
                    if ((d - b)>2)for (int i = b + 2; i <d; i++) num[c][i] = 0;
                }*/
}
void number::mod()
{
      int n[4],b;

        for (b = 0; b<4; b++)
        {


            for(int i=3;i>=0;i--)
                n[3-i]=num[b][i];

            change(n);
            for(int i=3;i>=0;i--)
               num[b][i] =n[3-i];

        /* for(c=3;c>-1;c--)
            {
            d=c;
            while(1)
               {

                if(num[b][d--]!=0)
                    {
                    i=num[b][d+1];
                    while(1)
                         {
                        if(d==-1) {j=0;break;}
                        if(num[b][d--]!=0) {j=num[b][d+1];break;}
                         }
                    break;
                    }

                if(d==-1) {i=0;j=0;break;}
                }
            if(i==j||i==0||j==0)
            {
            num[b][c]=i+j;
            if(i==j&&i!=0)  score+=i;
            for(e=c-1;e>d;e--) num[b][e]=0;
            }
            else {
            num[b][c]=i;num[b][c-1]=j;
            for(e=c-2;e>d;e--) num[b][e]=0;
            }

            }*/
    }


    /*int c, b,d;
    for (c = 0; c<4; c++)
                for (b = 3; b>0; b--)
                {
                    d = b -1;
                    while (num[c][d--] == 0)if (d == -1)break;
                    if (d == -1 && num[c][0] == 0)break;
                    if (num[c][b] == 0 || num[c][b] == num[c][d + 1]){ num[c][b] += num[c][d + 1]; num[c][b - 1] = 0; }
                    else num[c][b - 1] = num[c][d + 1];
                    if ((b - d)>2)for (int i = b - 2; i >d; i--) num[c][i] = 0;
                }*/
}



void number::asui()
{
    int i,j,ji=0;
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            if(num[i][j]==0) ji++;
    if(ji==0) return;
    int s=(rand()%ji)+1;
    ji=0;
    for(i=0;i<4;i++)
         for(j=0;j<4;j++)
         {
             if(num[i][j]==0) ji++;
             if(ji==s) {num[i][j]=2;return;}
         }
}

