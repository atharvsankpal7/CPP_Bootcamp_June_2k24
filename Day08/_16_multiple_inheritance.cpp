#include <iostream>
using namespace std;
class A
{
protected:
    int x = 10;

public:
    void printX()
    {
        cout << x << endl;
    }
};
class B
{
protected:
    int y = 20;

public:
    void printY()
    {
        cout << y << endl;
    }
};
class C : public A, public B
{
};
int main()
{
    C obj1;
    obj1.printX();
    B objB;
    objB.printY();
    obj1.printY();
    return 0;
}