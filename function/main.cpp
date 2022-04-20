#include <iostream>

using namespace std;

int larger(int num1 , int num 2);
int main()
{
   int n1,n2;
   cout<< " Enter 2 numbers \n";
   cin>> n1 >> n2;
   cout<< "the larger number is "<< larger(n1,n2) <<"\n";
}
int larger(int num1 , int num2)
{
    if(num1>= num2)
        return num1;
    else(num1< num2)
    return num2;
}
