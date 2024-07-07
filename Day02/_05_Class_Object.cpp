#include <iostream>
using namespace std;
// class ClassName{};
class Car
{
private:
    int a;

public:
    // member variables
    int noOfSeats;
    bool isManual;
    string name;

    // member functions
    void start()
    {
        cout << "Car started" << endl;
    }
    void stop()
    {
        cout << "Car stopped" << endl;
    }

    void printName()
    {
        cout << "The name of the car is " << name << endl;
    }
};

int main()
{
    // Car vivek;
    // vivek.noOfSeats = 7;
    // cout << vivek.noOfSeats << endl;

    // Car anant;
    // anant.noOfSeats = 10;
    // cout << anant.noOfSeats << endl;

    // anant.start();
    // vivek.start();
    // anant.stop();

    // Car aditya;
    // aditya.noOfSeats = anant.noOfSeats + vivek.noOfSeats;
    // cout << aditya.noOfSeats << endl;
    // aditya.start();
    // anant.stop();
    // aditya.stop();

    Car prajakta;
    prajakta.noOfSeats = 2;
    prajakta.name = "Toyota";
    prajakta.printName();

    Car suhana;
    suhana.name = "Honda";
    suhana.printName();
}