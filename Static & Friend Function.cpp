#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;
    int rollNo;
    int marks;

public:
    Student()
    {
        totalStudents++;
    }
    static int totalStudents; // static is initiallized with 0 by default
    friend void compareMarks(Student s1, Student s2);
    void setname();
    string getname();
    void setrollNo();
    int getrollNo();
    void setmarks();
    int getmarks();
    void display(int n);
};

int Student ::totalStudents;
//  void Student :: totalStudents=1;--->if i want to initilize then this is method

void Student ::setname()
{

    cout << "Enter name: ";
    cin.ignore();
    getline(cin, name);
}
string Student ::getname()
{
    return name;
}
void Student ::setrollNo()
{
    cout << "Enter Roll number: ";
    cin >> rollNo;
    cin.ignore();
}
int Student ::getrollNo()
{
    return rollNo;
}
void Student ::setmarks()
{
    cout << "Enter marks: ";
    cin >> marks;
}
 int Student ::getmarks()
{
    return marks;
}

void compareMarks(Student s1, Student s2)
{
    if (s1.marks > s2.marks)
    {
        cout <<s1.name << " has more marks then Student " << s2.name << endl;
    }
    else if (s1.marks < s2.marks)
    {
        cout << s1.name << " has less marks then Student " << s2.name << endl;
    }
    else
        cout << "Both have equal marks" << endl;
}
void Student ::display(int n)
{
    cout << "Student " << n << " name " << getname() << endl;
    cout << "Student " << n << " has marks " << getmarks() << endl;
    cout << "Student " << n << " Roll number " << getrollNo() << endl;
}
int main()
{

    // Student s1, s2;
    // s1.setname();
    // s1.setmarks();
    // s1.setrollNo();

    // s2.setname();
    // s2.setmarks();
    // s2.setrollNo();

    // s1.display();
    // s2.display();

    int total;
    cout << "Enter number of student: ";
    cin >> total;
    Student s[total]; // this is object array of Student
    for (int i = 1; i <= total; i++)
    {
        s[i].setname();
        s[i].setmarks();
        s[i].setrollNo();
        s[i].display(i);
    }

    for (int i = 0; i < total; i++)
    {
        compareMarks(s[i], s[i + 1]);
    }

    cout << "Total studens is " << Student ::totalStudents << endl; // it is way to access freind function in main bode

    return 0;
}