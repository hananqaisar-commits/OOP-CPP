// My programme flow:
//   Insert card
//  ️ Enter PIN (once)
//  ️ If PIN correct → show menu
//   Perform multiple actions
//   Logout

#include <iostream>
#include <string>
#include <windows.h> //for Sleep use in my programme
using namespace std;
class BankAccount
{
    int pin;
    int accNo;
    string name;
    int balance;
    int chance;

public:
    BankAccount(int account, string name, int balance, int pin, int chance)
    {
        accNo = account;
        this->name = name;
        this->balance = balance;
        this->pin = pin;
        this->chance = chance;
    }
    void deposit(int deposit);
    void withdraw(int withdraw);
    void check();
    void display();
    void choice(int n);
    bool checkPin();
    int insertCard();
};
void BankAccount ::deposit(int deposit)
{
    char action;
    cout << "Deposit cash in right top box of machine\n";
    cout << "Enter d after done: ";
    cin >> action;
    if (action == 'D' || action == 'd')
    {
        cout << "Processing, please wait..." << endl;
        Sleep(3000);
        if (deposit < 0)
        {
            cout << "Sorry! This amount is not deposited" << endl;
        }
        else if (deposit > 0)
        {
            balance += deposit;
            cout << "You deposit " << deposit << " rupees sucessfully" << endl;
        }
        else
            cout << "Invalid" << endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
}

void BankAccount ::withdraw(int withdraw)
{
    cout << "Processing, please wait..." << endl;
    Sleep(2000);
    if (withdraw > balance)
    {
        cout << "Sorry! " << withdraw << " rupees is not in your account" << endl;
    }
    else if (withdraw < balance && withdraw > 0 || withdraw == balance)
    {
        cout << "Take your cash\n";
        Sleep(2000);
        cout << withdraw << " rupees is withdraw sucessfully" << endl;
        balance -= withdraw;
    }
    else
        cout << "Invalid" << endl;
}
void BankAccount ::check()
{

    char ch;
    cout << "Want to check account balance?((y or n): )" << endl;
    cin >> ch;
    if (ch == 'Y' || ch == 'y')
    {
        cout << "Your balance is :" << balance << endl;
    }
    else if (ch == 'N' || ch == 'n')
    {
        cout << "Thanks for using ATM" << endl;
    }
    else
        cout << "Enter valid choice:" << endl;
}
void BankAccount ::display()
{
    cout << "Account Owner: " << name << endl;
    cout << "Account id " << accNo << endl;
    cout << "Balance: " << balance << endl;
}
bool BankAccount ::checkPin()
{
    int enteredpin;

    cout << "Enter pin: ";
    while (chance > 0)
    {
        cin >> enteredpin;
        cout << "Verifying PIN, please wait..." << endl;
        Sleep(2000); // sleep for 2000 milisecond it is in window.h library

        if (enteredpin == pin)
        {
            cout << "Correct pin\nAccess granted" << endl;
            return true;
        }
        else
        {
            cout << "Wrong pin " << --chance << " more chance(s) left" << endl
                 << "Otherwise permission will be denied\nTry again: " << endl;
        }
    }
    cout << "Sorry permission denied\n";
    return false;
}
void BankAccount ::choice(int n)
{
    int depositAmount;
    int withdrawAmount;

    switch (n)
    {
    case 0:
        cout << "Card is coming out, please wait..." << endl;
        Sleep(3000);
        cout << "Take your card\n";
        Sleep(1000);
        cout << "logout sucessfull" << endl;
        cout << "Thanks for using me" << endl;
        break;
    case 1:
    {
        cout << "Enter amount to deposit: ";
        cin >> depositAmount;
        deposit(depositAmount);
    }
    break;

    case 2:
    {
        cout << "Enter amount to Withdraw: ";
        cin >> withdrawAmount;
        withdraw(withdrawAmount);
    }
    break;

    case 3:
        check();
        break;

    case 4:
        display();
        break;

    default:
        cout << "Enter valid choice" << endl;
    }
}
int BankAccount ::insertCard()
{
    int insert;
    cout << "=====Welcome to ATM=====\nInsert your card" << endl;
    cout << "1 for insert card\n0 for nothing" << endl;
    cout<<"->";
    cin >> insert;
    if (insert == 1)
    {
        cout << "Processing your card, please wait..." << endl;
        Sleep(3000);
        return 1;
    }
    else if (insert == 0)
    {
        return 0;
    }
    else
    {
        cout << "Invalid Card\n";
        return 0;
    }
}
int main()
{
    int choice;
    BankAccount account1(1199, "Hanan Qaisar", 0, 1493, 3);
    if (account1.insertCard())
    {
        if (!account1.checkPin())
        {
            return 0;
        }
        else
        {
            cout << "\n====ATM DISPLAY====\n";
            cout << "Choose option:" << endl
                 << "1. Deposit" << endl
                 << "2. Withdraw" << endl
                 << "3. Check Balabnce" << endl
                 << "4. Display detail" << endl
                 << "0. End" << endl;
                 cout<<"->";

            do
            {
                cin >> choice;
                if (choice < 0 || choice > 4)
                {
                    cout << "Enter valid Choice" << endl;
                }
                else
                {
                    account1.choice(choice);
                    if (choice != 0)
                    {
                        cout << "Choose next option:" << endl<<"->";
                    }
                }
            } while (choice != 0);
        }

        return 0;
    }
}