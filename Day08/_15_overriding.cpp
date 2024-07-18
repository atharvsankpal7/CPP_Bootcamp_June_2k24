#include <iostream>
using namespace std;

class BankAccount
{
protected:
    int accountNumber;
    double balance;
    string branch;

public:
    void setBalance(double b)
    {
        balance = b;
    }
    double getAmount(double rate, double year)
    {
        // simple interest
        double interest = (balance * rate * year) / 100;
        double totalAmount = balance + interest;
        return totalAmount;
    }
};

class SavingsAccount : public BankAccount
{
public:
    double getAmount(double r, double year)
    {
        // compound interest
        double amount = balance;
        for (int i = 0; i < year; i++)
        {
            amount = amount * (1 + r / 100);
        }
        return amount;
    }
};

int main()
{
    BankAccount account1;
    account1.setBalance(10000);
    cout << account1.getAmount(7.5, 3) << endl;

    SavingsAccount account2;
    account2.setBalance(10000);
    cout << account2.getAmount(7.5, 3) << endl;
    return 0;
}