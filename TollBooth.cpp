#include <iostream>
using namespace std;

class TollBooth
{
public:
    unsigned int totalcars;
    double totalcash;

    TollBooth()
    {
        totalcars = 0;
        totalcash = 0;
    }
    void payingcar();
    void nopaycar();
    void Display();
};

void TollBooth ::payingcar()
{
    totalcash += 0.50;
    totalcars++;
}
void TollBooth ::nopaycar()
{
    totalcars++;
    totalcash = totalcash; // remain same
}
void TollBooth ::Display()
{
    cout << "Total cars: " << totalcars << endl;
    cout << "Total cash: " << totalcash << endl;
}
int main()
{
    TollBooth tool;
    char Carch[10];
    cout << "Enter choice " << endl
         << "p for count a paying car" << endl
         <<

        "n for count a non-paying car" << endl
         <<

        "e for exit program and show totals" << endl;

    for (int i = 0; i < 10; i++)
    {
        cin >> Carch[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (Carch[i] == 'P' || Carch[i]=='p')
        {
            tool.payingcar();
        }
        else if (Carch[i] == 'N' || Carch[i]== 'n')
        {
            tool.nopaycar();
        }
        else if (Carch[i] == 'E' || Carch[i]== 'e')
        {
            break;
        }
        else
        {
            continue;
        }
    }
    tool.Display();

    return 0;
}
