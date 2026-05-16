#include <iostream>
using namespace std;

int main()
{
    /*
        VARIABLE

        A variable is used to store data in memory.

        Syntax:
        <data_type> <variable_name> = <value>;
    */

    /*
        VARIABLE DEFINITION

        Here, the variable is created and assigned
        a value at the same time.
    */

    // int age = 22;
    // cout << "Adarsh age is: " << age << endl;

    /*
        VARIABLE DECLARATION

        A variable can also be declared without
        assigning a value initially.

        Note:
        Printing an uninitialized local variable
        may produce a random value called
        a "garbage value".
    */

    // int age;

    /*
        VARIABLE DECLARATION + INITIALIZATION

        The variable is declared and assigned
        a value together.
    */

    int age = 22;

    /*
        Displays the value stored in the variable.
    */
    cout << "The age is: " << age << endl;

    /*
        Note:
        Two variables cannot have the same name
        within the same scope.
    */

    return 0;
}