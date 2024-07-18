#include <iostream>
using namespace std;
class A
{
private:
    int x;
    int y;

public:
    A(int a, int b)
    {
        x = a;
        y = b;
        cout << "A constructor called" << endl;
    }
    void printData()
    {
        cout << x << " " << y << endl;
    }
    ~A()
    {
        printData();
        cout << "A destructor called" << endl;
    }
};
int main()
{
    A a1(5, 6);
    A a2(10, 12);
    A a3(21,22);

    return 0;
}