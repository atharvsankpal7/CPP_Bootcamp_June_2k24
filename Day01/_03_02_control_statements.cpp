#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout << "Enter the value of a --> ";
    cin >> a;
    cout << "Enter the value of b --> ";
    cin >> b;
    cout << "Enter the value of c --> ";
    cin >> c;
    // checking for `a` to be greatest
    if (a > b)
    {
        if (a > c)
        {
            cout << "a is greatest" << endl;
        }
        else
        {
            cout << "c is greatest" << endl;
        }
    }
    // checking for `b` to be greatest
    else
    {
        if (b > c)
        {
            cout << "b is greatest" << endl;
        }
        else
        {
            cout << "c is greatest" << endl;
        }
    }
}