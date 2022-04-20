#include <iostream>

using namespace std;

int main()
{

    int i, Max, Min,Size;


    cout<<"enter size of array";   //هنحط قيمة حجم الاراي
    cin>>Size;
    int ar[Size];
          cout<<"\n Enter "<<Size <<" elements in the array: ";


    for(i=0; i<Size; i++)
        cin>>ar[i];     //هندخل قيم الاراي لحد مايخلص السايز

   Max = ar[0];
    Min = ar[0];    //maximum and minimum is the first element until we change it below when we find bigger and smaller numbers

    for(i=1; i<Size; i++)
    {
        if(ar[i] > Max)
            Max = ar[i];
        if(ar[i] < Min)
            Min = ar[i];
    }
    // Print maximum and minimum element
    cout<<"Maximum element =" << Max << "\n";
    cout<<"Minimum element =" << Min;
    return 0;

  return 0;
}
