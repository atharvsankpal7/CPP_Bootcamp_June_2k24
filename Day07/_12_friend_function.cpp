#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    friend int printArea(Rectangle o1);
};

int printArea(Rectangle obj1)
{
    int area = obj1.length * obj1.width;
    cout << "the area of the rectangle is " << area << endl;
}

int main()
{
    Rectangle r1(2, 4);
    printArea(r1);

    Rectangle r2(5,10);
    printArea(r2);
    return 0;
}