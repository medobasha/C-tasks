#include <iostream>

using namespace std;


void words(char word1[], char word2[]);
int main()
{
    char word1[20] = "Mango";
    char word2[20] = "Strawberry";
    words(word1, word2);
    cout << "the copied word is "<< word2 << "\n";
    return 0;
}

void words(char word1[], char word2[])
{
    int i = 0;
    for (i=0; word1[i] != '\0'; i++)
       word2[i] = word1[i];
    word2[i] = '\0';
}




/*
void Copies(char [] , char [] , int );

int main
{
char word1[20]= "Mango";
char word2[20] = "Strawberry";
cout<<"the first word is " << word1 << "\n";
cout<<"the second word is " << word2 << "\n";
cout<< "the copied array is here " << word1 << "\n";

return 0;
}
void Copies(char word1[] , char word2[] , int index );
{
    word2[index] = word1[index];
    if(word1[index] == '\0')
        return;
    copies(word1 , word2 , index +1);

}


int main()
{
    char list1[5] = {'hello'};
    int listcopy[5];

    for (int i = 0 ; i < 5 ; i++)
    {
        listcopy[i] = list1[i];

        cout << "the copied array is here " << listcopy[i] << ;
    }
}
*/
