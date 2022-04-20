#include <iostream>

using namespace std;

int main()
{
    int choice;
    do
    {



    cout << "The Big Menu" << endl << "Please choose one of the menu choices" << endl << "1.Add" << endl <<
    "2.Edit" << endl << "3.Delete" << endl << "4.Exit" << endl;
    cin >> choice;

    switch(choice)
    {
    case(1):
        {
            cout<< "You've chosen ADD!\n";
            break;
        }
    case(2):
        {
            cout<< "You've chosen Edit!\n";
            break;
        }
    case(3):
        {
            cout<< "You've chosen Delete!\n";
            break;
        }
    case(4):
        {
            cout<< "You've chosen Exit..GOODBYE! \n";
            return 0;
        }
    }

} while (choice != 4);

}
