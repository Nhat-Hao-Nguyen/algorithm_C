#include <conio.h>
#include <time.h>
#include <windows.h>

void Nocursortype()// ẩn con trỏ chuột
{
    CONSOLE_CURSOR_INFO Info;
    Info.bVisible = FALSE;
    Info.dwSize = 20;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}
void xuly()
{HANDLE consleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
Nocursortype();
SetConsoleTextAttribute(consleHandle, (5<<1)|5);
    gotoxy(4,2);
    printf("%c",176);
    char key_press;
    int vitr=4, x=4, y=2;
    int arar[100][42]={{0},{0}};
    for(int i=0;;i++)
    {

        gotoxy(vitr+1,2);
        key_press=getche();
        gotoxy(vitr+1,2);
        printf(" ");
        if(key_press==56)//len->8
        {
            len(&vitr,&x,&y,&arar);
        }
        else if(key_press==50)//xuong->2
        {
            xuong(&vitr,&x,&y,&arar);
        }
        else if(key_press==52)//trai->4
        {
            trai(&vitr,&x,&y,&arar);
        }
        else if(key_press==54)//phai->6
        {
            phai(&vitr,&x,&y,arar);
        }
        else if(key_press==53)//giua->5
        {
           pre_yes(&x,&y,&arar);
           super_xuly_nganchan(&x,&y,&arar);
           //exit(0);

        }
    }
}

void len(int *pointe,int *xx, int *yy,int arar[100][42])
{HANDLE consleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    int y=2;
    int x=4;
    int xp2=2;
    short bl=0;
    gotoxy(x+1,y);
    printf(" ");
    x=*xx;
    y=*yy;
    if(y>2)
    {
        y-=2;
        bl=1;
        gotoxy(x,y);
        printf("%c",176);

    }
    if(bl && arar[x][y+2]==0)
    {
        gotoxy(x,y+2);
        printf(" ");

    }
    else if(bl && arar[x][y+2]!=0)
    {
        gotoxy(x,y+2);
        SetConsoleTextAttribute(consleHandle, (5<<1)|8);
        printf("%c",219);
        SetConsoleTextAttribute(consleHandle, (5<<1)|5);
    }

    *pointe = x;
    *yy=y;

}
void xuong(int *pointe,int *xx, int *yy,int arar[100][42])
{HANDLE consleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    int y=2;
    int x=4;
    short bl=0;
    gotoxy(x+1,y);
    printf(" ");
     x=*xx;
     y=*yy;
    if(y<38)
    {
        y+=2;
        bl=1;
        gotoxy(x,y);
        printf("%c",176);
    }
    if(bl && arar[x][y-2] == 0)
    {
        gotoxy(x,y-2);
        printf(" ");
    }
    else if(bl && arar[x][y-2] != 0)
    {
        gotoxy(x,y-2);
        SetConsoleTextAttribute(consleHandle, (5<<1)|8);
        printf("%c",219);
        SetConsoleTextAttribute(consleHandle, (5<<1)|5);
    }
    *pointe = x;
    *yy=y;

}
void trai(int *pointe,int *xx, int *yy,int arar[100][42])
{HANDLE consleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    int y=2;
    int x=4;
    short bl=0;
    gotoxy(x+1,y);
    printf(" ");
     x=*xx;
     y=*yy;
    if(x>4)
    {
        x-=4;
        bl=1;
        gotoxy(x,y);
        printf("%c",176);
    }
    if(bl && arar[x+4][y]==0)
    {
        gotoxy(x+4,y);
        printf(" ");
    }
    else if(bl && arar[x+4][y]!=0)
    {
        gotoxy(x+4,y);
        SetConsoleTextAttribute(consleHandle, (5<<1)|8);
        printf("%c",219);
        SetConsoleTextAttribute(consleHandle, (5<<1)|5);
    }
    *pointe = x;
     *xx=x;

}
void phai(int *pointe,int *xx, int *yy,int arar[100][42])
{HANDLE consleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    int y=2;
    int x=4;
    short bl=0;
    gotoxy(x+1,y);
    printf(" ");
     x=*xx;
     y=*yy;
    if(x<92)
    {
        x+=4;
        bl=1;
        gotoxy(x,y);
        printf("%c",176);
    }
    if(bl && arar[x-4][y]==0)
    {
        gotoxy(x-4,y);
        printf(" ");
    }
    else if(bl && arar[x-4][y]!=0)
    {
        gotoxy(x-4,y);
        SetConsoleTextAttribute(consleHandle, (5<<1)|8);
        printf("%c",219);
        SetConsoleTextAttribute(consleHandle, (5<<1)|5);
    }
    *pointe = x;
     *xx=x;

}

void pre_yes(int *xx,int *yy,int arar[100][42])
{HANDLE consleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    int x,y;
    x=*xx;
    y=*yy;
    gotoxy(x,y);
    SetConsoleTextAttribute(consleHandle, (5<<1)|8);
    printf("%c",219);
    SetConsoleTextAttribute(consleHandle, (5<<1)|5);
    arar[x][y]=1;

}
///////////////////////////////////////////////////////////////////////////////
void super_xuly_nganchan(int *xx,int *yy,int arar[100][42])
{int x=*xx,y=*yy,random;
 const int maxx=6,minn=1;
HANDLE consleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(consleHandle, (0<<8)|6);

    //quet phai
    char trai_p[9]={0},tren_d[9]={0},cheo1[9]={0},cheo2[9]={0};
    for(int i=x,j=4;i<=x+16;i+=4,j++)
    {
        if(i<=92)
        {
            if(arar[i][y]==1)
            {
                trai_p[j]=1;

            }
        }
        else if(i>92)
            break;

    }
    //quet trai
    for(int i=x,j=4;i>=x-16;i-=4,j--)
    {
        if(i>=4)
        {
            if(arar[i][y]==1)
            {
                trai_p[j]=1;

            }
        }
        else if(i<4)
            break;

    }
    // quet tren
    for(int i=y,j=4;i>=y-10;i-=2,j++)
    {
        if(i>=2)
        {
            if(arar[x][i]==1)
            {
                tren_d[j]=1;

            }
        }
        else if(i<2)
            break;


    }
    // quet duoi
    for(int i=y,j=4;i<=y+10;i+=2,j--)
    {
        if(i<=38)
        {
            if(arar[x][i]==1)
            {
                tren_d[j]=1;

            }
        }
        else if(i>38)
            break;

    }
    //cheo phai tren
    for(int i=x,k=y,j=4;;i+=4,k-=2,j++)
    {
        if(i>x+16)
            break;
        else if(k<y-10)
            break;
        if(k>=2 && i<=92)
        {
            if(arar[i][k]==1)
            {
                cheo1[j]=1;

            }

        }
        else if(k<2 || i>92)
            break;
    }
    //cheo trai duoi
    for(int i=x,k=y,j=4;;i-=4,k+=2,j--)
    {
        if(i<x-16)
            break;
        else if(k>y+10)
            break;
        if(k<=38 && i>=4)
        {
            if(arar[i][k]==1)
            {
                cheo1[j]=1;
            }
        }
        else if(k>38 || i<4)
            break;

    }
    //cheo trai tren
    for(int i=x,k=y,j=4;;i-=4,k-=2,j++)
    {
        if(i<x-16)
            break;
        else if(k<y-10)
            break;
        if(k>=2 && i>=4)
        {
            if(arar[i][k]==1)
            {
                cheo2[j]=1;
            }
        }
        else if(k<2 || i<4)
            break;

    }
    // cheo phai duoi
    for(int i=x,k=y,j=4;;i+=4,k+=2,j--)
    {
        if(i>x+16)
            break;
        else if(k>y+10)
            break;
        if(k<=38 && i<=92)
        {
            if(arar[i][k]==1)
            {
                cheo2[j]=1;
            }
        }
        else if(k>38 || i>92)
            break;

    }
    for(int i=0,k=0,l=0,m=0,n=0,j=100;i<9;i++,j++)// kiem tra thang , thua
    {


        if(trai_p[i])
        {
            SetConsoleTextAttribute(consleHandle, (0<<8)|6);
            gotoxy(j,6);
            printf("%d ",trai_p[i]);
            k++;
            if(k>5)
            {
                gotoxy(100,12);
                printf("ghe thiet!!!");
            }
            else if(k==5)
            {
                gotoxy(100,12);
                printf("ban thang <)))");
            }
        }
        else
        {
            SetConsoleTextAttribute(consleHandle, (5<<1)|5);
            gotoxy(j,6);
            printf("%d ",trai_p[i]);
            k=0;
        }
        if(tren_d[i])
        {
            SetConsoleTextAttribute(consleHandle, (0<<8)|6);
            gotoxy(j,7);
            printf("%d ",tren_d[i]);
            l++;
            if(l>5)
            {
                gotoxy(100,12);
                printf("ghe thiet!!!");
            }
            else if(l==5)
            {
                gotoxy(100,12);
                printf("ban thang <)))");
            }
        }
        else
        {
            SetConsoleTextAttribute(consleHandle, (5<<1)|5);
            gotoxy(j,7);
            printf("%d ",tren_d[i]);
            l=0;
        }
        if(cheo1[i])
        {
            SetConsoleTextAttribute(consleHandle, (0<<8)|6);
            gotoxy(j,8);
            printf("%d ",cheo1[i]);
            m++;
            if(m>5)
            {
                gotoxy(100,12);
                printf("ghe thiet!!!");
            }
            else if(m==5)
            {
                gotoxy(100,12);
                printf("ban thang <)))");
            }
        }
        else
        {
            SetConsoleTextAttribute(consleHandle, (5<<1)|5);
            gotoxy(j,8);
            printf("%d ",cheo1[i]);
            m=0;
        }
        if(cheo2[i])
        {
            SetConsoleTextAttribute(consleHandle, (0<<8)|6);
            gotoxy(j,9);
            printf("%d ",cheo2[i]);
            n++;
            if(n>5)
            {
                gotoxy(100,12);
                printf("ghe thiet!!!");
            }
            else if(n==5)
            {
                gotoxy(100,12);
                printf("ban thang <)))");
            }
        }
        else
        {
            SetConsoleTextAttribute(consleHandle, (5<<1)|5);
            gotoxy(j,9);
            printf("%d ",cheo2[i]);
            n=0;
        }


    }
    SetConsoleTextAttribute(consleHandle, (5<<1)|5);

////////////////////////////////////////////////////////////
// tinh toan
    for(int i=x,j=y,jj=0,an1=0,an2=0;;)
    {
           while(1)
           {
               if(i>4&&i>x-16)
                i-=4;
            else if(i<=4||i<=x-16)
                an1=1;
                if(j>2&&j>y-8)
                j-=2;
            else if(j<=2||j<=y-8)
                an2=1;
                if(an1==1&&an2==1)
                    break;
           }
           jj=j;
           j=y;
           while(1)
           {
                if(j<38&&j<y+8)
                j+=2;
            else if(j>=38||j>=y+8)
                    break;
           }
           for(int m=i,n=jj,i=0,a[25]={0};m<x+16;m+=4,i++)
           {

           }
           gotoxy(100,15);
           printf("%d %d",i,j);
           break;

    }
    random = (rand()%(maxx - minn +1)) + minn;
    gotoxy(100,5);
    printf("%d",random);



}


















