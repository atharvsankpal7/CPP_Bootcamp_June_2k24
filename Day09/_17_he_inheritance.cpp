#include <iostream>
using namespace std;

class A
{
public:
    int x;
    A()
    {
        cout << "Constructor of A" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "Constructor of B" << endl;
    }
};

class C : public A
{
    public:
    C()
    {
        cout << "Constructor of C" << endl;
    }
};
int main()
{
    // B obj1 = B();
    C obj2 = C();
    
    
    return 0;
}