#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>


using namespace std;

void gotoxy( int column , int line)
{
    COORD coord;
    coord.X = column;
    coord.Y = line;
    SetConsoleCursorPosition(
                             GetStdHandle(STD_OUTPUT_HANDLE),
                             coord);
}

int main()
{
    int col;
    int row;
    int boxSize;
    int currNum;
    cout<< "Mohamed Ibrahem Abdelsabour - Let's make the Magic Box Algorithm\n";
    cin >> boxSize;
    system("cls");
    cout<< "Magic Box of Size"  << boxSize << "X" << boxSize;
    for (currNum = 1; currNum<=(boxSize*boxSize); currNum++)
     {

        if(currNum == 1)
    {
        row = 1 ;
        col = ((boxSize+1)/2);
    }
    else if (((currNum -1)% boxSize) == 0)
    {
        row++;
    }
    else {
        col--;
        row--;
    }
    if (row > 3)
    {
        row = 1;
    }
    else if (row < 1)
    {

     row = 3;

    }
    else if (col < 1 )
    {
        col = 3;
    }

gotoxy(col , row);
Sleep(1000);
printf("%d", currNum);



}
return 0;
}
