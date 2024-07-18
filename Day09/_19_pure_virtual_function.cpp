#include <iostream>
using namespace std;
class Employee
{
private:
    string name;
    int id;
    float salary;

public:
    void eatLunch()
    {
        cout << "Eating lunch" << endl;
    }
    void markAttendance()
    {
        cout << "Marking attendance" << endl;
    }
    virtual void attendMetting() = 0;
};
class Teacher : public Employee
{
public:
    void teach()
    {
        cout << "Teaching" << endl;
    }
    void attendMetting()
    {
        cout << "attending the meeting" << endl;
    }
};

class Principle : public Employee
{
public:
    void work()
    {
        cout << "Working" << endl;
    }
    void attendMetting()
    {
        cout << "preparing for the meeting" << endl;
        cout << "attending the meeting" << endl;
    }
};
int main()
{
    // Teacher t1 = Teacher();
    // t1.eatLunch();
    // t1.teach();
    // t1.attendMetting();

    Principle p1 = Principle();
    p1.eatLunch();
    p1.attendMetting();
    return 0;
}