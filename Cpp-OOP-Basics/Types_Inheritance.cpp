// Mostly 5 types of inheritance:
// 1:Single Inheritance e.g: class B : public A { ... };
// 2:Multiple Inheritance e.g: class C : public A, public B { ... };
// 3:Multilevel Inheritance e.g: Class B: Puclic A, class C : Public B (B is inherited from A, and C is inherited from B.)
// 4:Hierarchical Inheritance e.g: B : A, C : A (both B and C is inherited by A)
// 5:Hybrid Inheritance e.g: A combination of two or more types of inheritance (like multiple + multilevel).

#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(int age, string name)
    {
        this->age = age;
        this->name = name;
    }
};

class Student : public Person
{
public:
    string rollNo;
    string schoolName;
    Student(int age, string name, int rollNo, string schoolNme) : Person(age, schoolName)
    {
        this->rollNo = rollNo;
        this->schoolName = schoolName;
    }
};
class Matric : public Person, public Student
{
    string registration_Number;

public:
    string board;
    Matric(int age, string name, string rollNo, string schoolName, string rn, string board) : Person(age, name, rollNo, schoolName)
    {
        rn = registration_Number;
        this->board = board;
    }
};
int main()
{

    return 0;
}