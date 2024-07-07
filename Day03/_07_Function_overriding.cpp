#include <iostream>
using namespace std;

void operation(int a, int b)
{
    cout << "Addition is " << a + b << endl;
}

void operation(int a, int b)
{
    cout << "Subtraction is " << a - b << endl;
}

int main()
{
    int a = 4;
    int b = 2;
    operation(a, b);

    int x;
    x = 1;
    x = 4;
    cout << x;
    return 0;
}