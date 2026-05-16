#include <iostream>
using namespace std;

int main()
{
    /*
        VARIABLE DECLARATION

        'age' stores the user's age.
        'result' stores the final output message.
    */
    int age;
    string result;

    /*
        OUTPUT STATEMENT

        Asks the user to enter their age.
    */
    cout << "Enter your age: " << endl;

    /*
        INPUT STATEMENT

        Takes age input from the user
        and stores it in the variable 'age'.
    */
    cin >> age;

    /*
        TERNARY OPERATOR

        The ternary operator is a shortcut
        for an if-else condition.

        Syntax:
        condition ? true_expression : false_expression;

        If the condition is true:
            "Villian" is assigned to result

        Otherwise:
            "Hero" is assigned to result
    */
    result = age >= 18 ? "Villian" : "Hero";

    /*
        OUTPUT STATEMENT

        Displays the value stored in 'result'.
    */
    cout << result;

    /*
        RETURN STATEMENT

        return 0 indicates successful
        program execution.
    */
    return 0;
}