#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "Enter the values of num1 and num2 -->" << endl;
    cin >> num1 >> num2;
    
    int addition = num1 + num2;
    cout << "The addition of " << num1 << " and " << num2 << " is " << addition << endl;

    int subtraction = num1 - num2;
    cout << "The subtraction of " << num1 << " and " << num2 << " is " << subtraction << endl;
    
    float division = num1 /(float)num2; 
    cout << "The division of " << num1 << " and " << num2 << " is " << division << endl;
    return 0;
}