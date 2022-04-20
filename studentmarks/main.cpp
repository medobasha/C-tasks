#include <iostream>
using namespace std;



int main()

{int marks[3][4];
 float sum = 0.0

 for (int row = 0; row<3 ; row++)
    {

     for(int col = ; col < 4 ; col++)
        {
    cout << "Enter score of subject " << col << "/n" << "for student "<< row+1 "\n" ;
    cin << marks[row][col];
    sum += marks[row][col];
    cout << "the sum of subjects for student " << row+1 << "is  " << sum;
    }

    }

return 0;
}
