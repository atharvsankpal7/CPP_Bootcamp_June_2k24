#include <iostream>
using namespace std;
class Complex
{
    int real, img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    Complex(Complex o2, Complex o1)
    {
        real = o1.real - o2.real;
        img = o1.img - o2.img;
    }
    void printData()
    {
        cout << real << " " << img << endl;
    }

    static void addComplex(Complex o1, Complex o2)
    {
        int realAddition = o1.real + o2.real;
        int imgAddition = o1.img + o2.img;
        cout << realAddition << " " << imgAddition << "i" << endl;
    }
};
int main()
{
    // Complex c1;
    // Complex c2(5);
    // Complex c3(5, 6);

    Complex o1(20, 10);
    Complex o2(5, 7);

    // Complex::addComplex(o1, o2);

    Complex o3(o1, o2);
    o3.printData();
    return 0;
}