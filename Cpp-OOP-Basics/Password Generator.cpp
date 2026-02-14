#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{

    int lenght;
    string password;

    cout << "Enter lenght of password: ";
    cin >> lenght;

    char list[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
                   'q', 'w', 'e', 'r', 't', 'y',
                   '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '_', '+', '=', '~', '[', ']'};

    srand(time(NULL));
    int size = sizeof(list) / sizeof(list[0]);

    for (int i = 0; i < lenght; i++)
    {
        int position = rand() % size;
        password = password + list[position]; // it is bcz password is string and in string characters are concatinated instead of arithimatic operations
    }
    cout << "password :" << password << endl;

    return 0;
}