#include <iostream>
using namespace std;

class TollBooth
{
    string shift;
    string collector_name;
    double totalcash;

public:
    unsigned int totalcars;
    string type; // vehcle type

    TollBooth()
    {
        totalcars = 0;
        totalcash = 0;
    }
    void payingcar();
    void nopaycar();
    void report();
    void input();
    void vehcleType();
    void Rates_chart();
};

void TollBooth ::payingcar()
{

    totalcars++;
}
void TollBooth ::nopaycar()
{
    totalcars++;
    totalcash = totalcash; // remain same
}

void TollBooth ::report()
{
    cout << "\n====== Toll Booth Report ======\n";
    cout << "Collector name: : " << collector_name << endl;
    cout << "Shift: : " << shift << endl;
    cout << "Total cash: " << totalcash << endl;
    cout << "Total cars: " << totalcars << endl;
    cout << "Average tax on every car: " << totalcash / totalcars << endl;
}
void TollBooth ::vehcleType()
{

    cout << "Enter vechile (e.g: car, truck, bus): ";
    cin >> type;
}
void TollBooth ::Rates_chart()
{
    cout << "Bike--------->0.00 rs/-\n";
    cout << "Car--------->0.35 rs/-\n";
    cout << "Vagon--------->0.35 rs/-\n";
    cout << "Bus--------->0.50 rs/-\n";
    cout << "Truck--------->0.80 rs/-\n";
    cout << "Others--------->0.35 rs/-\n";
}
void TollBooth ::input()
{
    char choice;
    cin >> choice;
    vehcleType();

    do
    {

        if (type == "car" || type == "Car" || type == "CAR")
        {
            totalcash = 0.35;
        }
        else if (type == "bus" || type == "Bus" || type == "BUS")
        {
            totalcash == 0.50;
        }
        else if (type == "truck" || type == "Truck" || type == "TRUCK")
        {
            totalcash == 0.80;
        }
        else if (type == "bike" || type == "Bike" || type == "BIKE")
        {
            totalcash == 0;
        }
        else if (type == "vagon" || type == "Vagon" || type == "VAGON")
        {
            totalcash = 0.45;
        }
        else
        {
            totalcash = 0.10;
        }

        payingcar();

        cout << "Enter next car: " << endl;
        cin >> choice;
        
    }
    while (choice != 'e' && choice != 'E');
}
int main()
{
    TollBooth tool;
    tool.input();

    return 0;
}