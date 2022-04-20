#include <iostream>

using namespace std;

int main()
{
    int input;
    int tmp;
    int counter = 1;
    int max_num=0;
    int min_num;

    //prompt user for integer amount
    cout << "How many integers would you like to enter? " << endl;
    cin >> input;
    cout<< "Please enter " << input << " integers." << endl;

    tmp = input;


//loop for requested amount with a test for each input
    while (counter <= tmp){
        cin >> input;
//if smaller than previous number it is the minimum
        if (input < min_num){
            min_num = input;
            counter++;
        }

// if larger than previous number it becomes max number
        else if (input > max_num){
            max_num = input;
            counter++;
        }


//continue loop if number isn't bigger than max or smaller than min
        else {
           counter++;
        }



    }

//display the max and min
    cout << "min: "<< min_num << endl;
    cout << "max: " << max_num<< endl;;



    return 0;
}

