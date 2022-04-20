#include <iostream>



using namespace std;
int power(int num1 , int num2);
int main()
{
    int n1 , n2;
    cout << "Enter your number and the then power of it \n " ;
    cin>> n1 >>  n2 ;
    cout << "the result is  " << power( n1 , n2) << "\n";
    return 0;
}

int power(int num1 , int num2)
{
    if(num2==0)
    return 1;
    else
        return(num1* power(num1 , num2 - 1));

}

/* power(2,5) 32
   power(2,4) 16
   power(2,3) 8
   power(2,2)  4
   power(2,1)  2
   power(2,0)  0

   */
