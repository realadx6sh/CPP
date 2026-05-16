#include <iostream>
using namespace std;

int main()
{
    /*
        VARIABLE DECLARATION

        A variable named 'mark' is declared
        to store an integer value entered by the user.

        Since no value is assigned initially,
        it may contain a random value
        called a "garbage value".
    */
    int mark;

    /*
        OUTPUT STATEMENT

        Displays a message asking the user
        to enter their mark.
    */
    cout << "Enter your mark :" << endl;

    /*
        INPUT STATEMENT

        cin is used to take input from the user.

        The entered value is stored inside
        the variable 'mark'.
    */
    cin >> mark;

    /*
        OUTPUT STATEMENT

        Displays the value entered by the user.
    */
    cout << "Your mark: " << mark << endl;

    return 0;
}