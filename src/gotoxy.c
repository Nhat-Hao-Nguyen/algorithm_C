#include <windows.h>

void gotoxy(int x, int y)
{
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


//HANDLE consleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
//SetConsoleTextAttribute(consleHandle, (15<<8)|12);


