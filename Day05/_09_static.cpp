#include <iostream>
using namespace std;

class A
{
public:
    int id;
    static int count;
};
int main()
{
    A o1;
    A o2;
    // o1.id = 5;
    // o2.id = 10;
    // cout << o1.id << endl;
    o1.count = 10;
    cout << o1.count << endl;
    o2.count = 20;
    cout << o1.count << endl;

    return 0;
}