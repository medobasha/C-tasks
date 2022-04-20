#include <iostream>

using namespace std;

/*int list3(int ar[] , int s , int lists[s]);

int main
{
int items[6] = {10,20,30,40,50,60};
int copied_items[6];
list3(items , 6  , copied_items);
cout<< "the copied array is here " << copied_items[6] << "\n";

}
int list3(int ar[] , int s , int lists[s])
{
    for(int i = 0 ; i < s , i++)
      {

        ar[i]= lists[i];
      }

return ar[i] , lists[i];
}
*/
int main()
{
    int list1[5] = {10 , 20 , 30 , 40 , 50};
    int listcopy[5];

    for (int i = 0 ; i < 5 ; i++)
    {
        listcopy[i] = list1[i];

        cout << "the copied array is here " << listcopy[i] << "\n";
    }
}
