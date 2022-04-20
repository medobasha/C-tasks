#include <iostream>

using namespace std;

int main()
{
    int marks[3][4];  /*= {{10,20,10,20},{20,40,90,30}, {30,50,80,40}};*/

    for (int row = 0 ; row < 3 ; row++)
{
    for (int col = 0 ; col < 4 ; col++)
    {

        cout<< "enter for the student no. " << row+1 << "  the score of subject  " << col+1 << "\n";
        cin >> marks[row][col];
}
}

int sum = 0;
for(int row = 0 ; row < 3 ; row++)
{
    for(int col = 0 ; col < 4 ; col++)
    {
        sum += marks[row][col];

    }
       cout << "the sum of subjects for student no" <<row+1 << " = " << sum << "\n";
       sum = 0;

}
int avg = 0;
for(int col = 0 ; col < 4 ; col++)
{
    for(int row = 0 ; row < 3 ; row++)
    {
        avg += marks[row][col];


    }
    cout << "the average of subject no" <<col+1 << " = " << avg/3 << "\n";
    avg = 0;
}
}
