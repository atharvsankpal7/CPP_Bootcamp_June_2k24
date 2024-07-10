#include <iostream>
using namespace std;

class Bank
{
    // member variables
private:
    double interest, principle, year, rate, totalAmount;

public:
    Bank(double p, double y, double r)
    {
        principle = p;
        year = y;
        rate = r;
    }
    Bank(double p, double y, int r)
    {
        principle = p;
        year = y;
        rate = r;
        cout << "Constructor with int rate" << endl;
    }

    Bank(int p, double y, int r)
    {
        principle = p;
        year = y;
        rate = r;
        cout << "Third constructor is called" << endl;
    }

    void calculateTotalAmount()
    {
        interest = (principle * year * rate) / 100;
        totalAmount = principle + interest;

        cout << "Interest: " << interest << endl;
        cout << "Total Amount: " << totalAmount << endl;
    }
};

int main()
{
    // Bank b1(10000, 10.3, 3);
    // b1.calculateTotalAmount();
    // Bank b2(15000.20, 7.5, 4.5);
    // b2.calculateTotalAmount();

    double p, y;
    int r;
    cout << "Enter principle, year and rate: ";
    cin >> p >> y >> r;
    Bank b3(p, y, r);

    return 0;
}