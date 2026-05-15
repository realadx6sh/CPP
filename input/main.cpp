#include <iostream>
using namespace std;

int main()
{
    int mark; // Memory is usually allocated for it, and its value is (“garbage value”)
    cout << "Enter your mark :" << endl;
    cin >> mark;                           // Taking input to variable called as mark;
    cout << "Your mark: " << mark << endl; // Printed out marks variable
    return 0;
}