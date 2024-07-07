#include <iostream>

using namespace std;

int add(int a, int b)
{ 
    return a + b;
}

float add(float a, float b)
{
    return a + b + 1;
}

int main()
{
    int x = 1;
    int y = 2;
    float a = 2.3;
    float b = 1.2;
    cout << add(x, y) << endl; //3
    cout << add(a, b) << endl; 
    return 0;
}