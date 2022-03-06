#include <windows.h>

void do_hoa()
{HANDLE consleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
 SetConsoleTextAttribute(consleHandle, (5<<1)|5);
    for(int i=0;i<121;i++)
    {
        printf("%c",219);
    }
    printf("\n");
    for(int i=0,j=1;i<30;i++)
    {
        if(i==j)
        {
            printf("%c",219);
            j+=1;
            i--;
            for(int i=1;i<96;i++)
            {
                printf("-");

            }
            printf("%c\t\t\t%c\n",219,219);


        }
        else
        {
            printf("%c   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   %c\t\t\t%c\n",219,219,219);
        }

    }
    for(int i=0;i<121;i++)
    {
        printf("%c",219);
    }
    gotoxy(100,3);
    printf("nhat hao nguyen\n");
    gotoxy(100,4);
    printf("---car%c_car%c---",224,225);



}
/*
#include <stdlib.h>
#include <windows.h>


int main()
{
    Sleep(2000);
    HANDLE consleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<20;j++)
        {
            for(int k=0;k<20;k++)
            {

                Sleep(1);
                SetConsoleTextAttribute(consleHandle, (i<<k)|j);
                printf("%d",i);

            }
        }
    }
    return 0;
}

*/

