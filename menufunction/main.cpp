#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

void gotoxy( int column, int line );
int down(int row);
int up(int row);
void Add();
void Subtract();
void Multiply();
void Divide();
int row;
int main()
{
    int row = 6;

    do{
        system("cls");    //clear screen to make menu
        cout << "Choose your operation \n" ;

        gotoxy(5,6);
        cout << "1) Add";

        gotoxy(5,7);
        cout << "2) Subtract";

        gotoxy(5,8);
        cout << "3) Multiply";

        gotoxy(5,9);
        cout << "4) Divide";

        gotoxy(5,10);
        cout << "5) Exit \n";

        gotoxy(5, row);


        char ch = getch();

        if((int)ch == -32)
        {
            ch = getch();
        switch((int)ch)
        {
        case 80:
            row = down(row); // function call  //في حالة لو انا هنزل او هطلع بالسهمين
            break;
        case 72:
        row = up(row); // function call
        break;
        case 71:
            row = 6;
            gotoxy(5,row);
            break;
        }
        }
        else if((int)ch== 13) {   //في حالة لو ضغطت على انتر
            switch(row) {
        case 6 :
            Add();
            break;

        case 7 :
            Subtract();
            break;

        case 8 :
             Multiply();
             break;

        case 9 :
            Divide();
            break;
        case 10:
            return 0;

            }
        }


    }
    while (1);
    return 0;

}

void gotoxy( int column, int line )

  {

  COORD coord;

  coord.X = column;

  coord.Y = line;

  SetConsoleCursorPosition(

    GetStdHandle( STD_OUTPUT_HANDLE ), coord  );

  }

int down(int row)
{
    int newRow;
    if(row < 10) {

        newRow = row + 1 ;
    }
    else {
    newRow = 6;
    }
    gotoxy(5 , newRow);
    return newRow;
    }

int up(int row)
{
    int newRow;
    if(row > 6) {
        newRow = row - 1 ;
}    else {
      newRow = 10;
}
gotoxy(5, newRow);
return newRow;
}

void Add()
{
    double a , b , result;
    system("cls");
    cout << "\n Enter 2 numbers : \n";
    cin >> a;
    cin >> b;
    result = a + b;
    cout << "your result is \n" << result << "\n";
    system("pause");
}

void Subtract()
{
    double a , b , result;
    system("cls");
    cout << "\n Enter 2 numbers : \n";
    cin >> a;
    cin >> b;
    result = a - b;
    cout << "your result is \n" << result << "\n";
    system("pause");
}

void Multiply()
{
    double a , b , result;
    system("cls");
    cout << "\n Enter 2 numbers : \n";
    cin >> a;
    cin >> b;
    result = a * b;
    cout << "your result is \n" << result << "\n";
    system("pause");
}

void Divide()
{
    double a , b , result;
    system("cls");
    cout << "\n Enter 2 numbers : \n";
    cin >> a;
    cin >> b;
    result = a / b;
    cout << "your result is \n" << result << "\n";
    system("pause");
}



