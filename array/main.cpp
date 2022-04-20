#include <iostream>
#include <string.h>

using namespace std;

char first(char m[10]);
char second(char n[10]);
int main()
{
    char(first());
    char(second());
    char x[10] = {"Khaled"};
    char y[10] = { "Hassan"};


    strcpy(x , y);





    cout<< x << "\n" << y<< "\n";

    return 0;
}
void copyArray(char m[10])
{
    m[10] = {"Khaled"};
    char newArray[10] = {}



}


