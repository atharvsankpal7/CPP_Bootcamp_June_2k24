#include <iostream>
using namespace std;
class C
{
public:
    int x;
    void printX()
    {
        cout << x << endl;
    }
};

class A
{
public:
    int a;
    void printA()
    {
        cout << a << endl;
    }
};

class B : public A
{
public:
    int b;
    void printB()
    {
        cout << b << endl;
    }
    void printA()
    {
        cout << "this is overiding of the function" << endl;
    }
};
int main()
{
    // C c1;
    // C *ptr1 = &c1;
    // // ptr1->x = 22;
    // // c1.printX();
    // c1.x = 22;
    // ptr1->printX();

    B b1;
    b1.a = 20;
    // b1.printA();

    // A a1;
    // a1.a = 10;
    // a1.printA();

    A *aptr = &b1;
    // aptr->printA();

    B *bptr = &b1;
    bptr->printA();

    return 0;
}