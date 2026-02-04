#include <iostream>
#include <string>
using namespace std;

class Student
{
    int id;
    string name;

public:
    int *marks; // it create pointer which is pointing in memory randomly
    Student(int id, string name, int markptr)
    {
        this->id = id;
        this->name = name;
        this->marks = new int(markptr); // in this line i have declared *marks already no i am assinging new int in heap to it and passing value is markptr
    }
    Student(Student &s1)
    {
        id = s1.id;
        name = s1.name;
        marks = s1.marks;
    }

    void display();
};
void Student ::display()
{
    cout << "===Details===\n";
    cout << "Name is: " << name << endl;
    cout << "ID is: " << id << endl;
    cout << "Marks is: " << *marks << endl;//here i am accessing valu of marks by *marks
}

int main()
{

    Student s1(187, "Hanan Qaisar", 90);
    Student s2(s1);
    s1.display();
    (*s2.marks) = 78;//to acces *marsk here it must be declared as public in class
    s2.display();

    return 0;
}