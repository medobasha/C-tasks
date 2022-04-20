#include <iostream>

using namespace std;


int main()
{

int x[5] [2] = {{ 24 , 2 }, { 23 , 54},{ 68 , 4 },{ 18 , 34 },
               {28,14}};

for(int i = 0 ; i < 5 ; i++)
{
    for(int j = 0 ; j < 2 ; j++)
    {
        cout<< "value at x[" << i <<"][" << j <<"] : " ;
        cout << x[i][j]<< "\n";
    }
}


}
