#include <iostream>
using namespace std;

class A
{
public:
    int x;
};

class B : virtual public A
{
};

class C : virtual public A
{
};

class D : public B, public C
{
    
};
int main()
{
    D obj1 = D();
    obj1.x = 10;
    cout << obj1.x << endl;
    return 0;
}