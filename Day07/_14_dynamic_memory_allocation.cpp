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
    // int *aptr = new int(10);
    // cout << *aptr << endl;

    // delete(aptr);
    // cout << *aptr << endl;

    A *a1 = new A(5, 6);
    A *a2 = new A(10, 12);
    A a3(20, 24);
    A a4(30, 36);
    A *a5 = new A(40, 48);
    delete (a5);
    delete (a1);
    delete (a2);

    return 0;
}