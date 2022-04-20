#include <iostream>

using namespace std;

int main()
{
int total = 0;
int num;

for (int i = 0 ; i < 100 ; i++ )
{
cout << "\n Enter the number to sum until we reach 100 :" <<" \n" ;
cin >> num;


 total = num + total;
 if(total >= 100)
 {
     cout << "We reached "<< total << "\n" <<"that's enough for today!";
     break;
 }
 cout << "the total sum yet is : " << total << "\n" << " we didn't reach 100 yet  " ;
}
}
