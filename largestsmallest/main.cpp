#include <iostream>

using namespace std;

int main()
{
   int largest , smallest , value;
   int n = 5;
   cout<<" please enter the first number of your five numbers : " ;
   cin >> value;
   largest = smallest = value;
   for (int i = 0 ; i < n ; i++)
    {
        cout <<"PLease enter the next number : " ;
        cin >> value;

      if(value > largest)
      {
          largest = value;
      }
      if(value < smallest )
      {
          smallest = value;
      }
      cout << "the largest value is :  " << largest << "\n";

      cout<<"The smallest value is :  "<< smallest <<"\n";

}}
