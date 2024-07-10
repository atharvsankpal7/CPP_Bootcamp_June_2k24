#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:
    static int count;
    Student() //default constructor
    {
        cout << "object created" << endl;
        count++;
    }

    Student(int r){ //parameterized constructor
        rollNo = r;
    }

    Student(string n){ //parameterized constructor
        name = n;
    }

    Student(int r, string n){ //parameterized constructor
        rollNo = r;
        name = n;
    }
    void printName()
    {
        cout << name << endl;
    }
    void printRollNo()
    {
        cout << rollNo << endl;
    }
};
int Student::count = 0;
int main()
{
    // cout << Student::count << endl;
    // Student pranav(1);
    // pranav.printRollNo();
    // cout << pranav.count << endl;
    // Student sakshi;
    // cout << pranav.count;


    Student manasi(1);
    manasi.printRollNo();

    Student ashwini("ashwini");
    ashwini.printName();

    Student Sanjana(3, "Sanjana");
    Sanjana.printRollNo();
    Sanjana.printName();
    return 0;
}