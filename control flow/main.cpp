#include <iostream>
using namespace std;

int main()
{
    /*

        This program demonstrates:
        1. if statement
        2. if - else statement
        3. if - else if - else ladder
        4. nested if statement

        We use ONE input (number) and apply multiple conditions
        to understand how decision-making works in C++.
    */

    // Variable declaration
    // This variable stores user input
    int number;

    // Prompting user input
    cout << "Enter a number: " << endl;

    // Taking input from user
    cin >> number;

    /*
        =========================================================
        1. SIMPLE IF STATEMENT
        =========================================================

        Definition:
        Executes a block ONLY if the condition is TRUE.

        Syntax:
        if (condition)
        {
            // code
        }

        Example use-case:
        Check if number is positive
    */

    if (number > 0)
    {
        cout << "\n[IF] The number is positive" << endl;
    }

    /*
        =========================================================
        2. IF - ELSE STATEMENT
        =========================================================

        Definition:
        Chooses between two paths:
        - if condition is true → IF block
        - if condition is false → ELSE block

        Syntax:
        if (condition)
        {
            // true block
        }
        else
        {
            // false block
        }

        Example use-case:
        Check even or odd
    */

    if (number % 2 == 0)
    {
        cout << "[IF-ELSE] The number is EVEN" << endl;
    }
    else
    {
        cout << "[IF-ELSE] The number is ODD" << endl;
    }

    /*
        =========================================================
        3. IF - ELSE IF - ELSE LADDER
        =========================================================

        Definition:
        Used when multiple conditions must be checked
        in sequence.

        Only ONE block executes.

        Syntax:
        if (condition1)
        {
        }
        else if (condition2)
        {
        }
        else
        {
        }

        Example use-case:
        Categorizing numbers
    */

    if (number > 100)
    {
        cout << "[LADDER] Very large number (>100)" << endl;
    }
    else if (number > 50)
    {
        cout << "[LADDER] Medium number (51-100)" << endl;
    }
    else if (number > 0)
    {
        cout << "[LADDER] Small positive number (1-50)" << endl;
    }
    else if (number == 0)
    {
        cout << "[LADDER] The number is ZERO" << endl;
    }
    else
    {
        cout << "[LADDER] Negative number" << endl;
    }

    /*
        =========================================================
        4. NESTED IF STATEMENT
        =========================================================

        Definition:
        An IF inside another IF.

        Used when second condition depends on first condition.

        Syntax:
        if (condition1)
        {
            if (condition2)
            {
            }
        }

        Example use-case:
        Detailed classification of number
    */

    if (number >= 0)
    {
        cout << "\n[NESTED IF] Number is NON-NEGATIVE" << endl;

        // Second level condition (only runs if number >= 0)
        if (number >= 10)
        {
            cout << "[NESTED IF] Number is >= 10" << endl;

            if (number >= 100)
            {
                cout << "[NESTED IF] Number is also >= 100" << endl;
            }
            else
            {
                cout << "[NESTED IF] Number is between 10 and 99" << endl;
            }
        }
        else
        {
            cout << "[NESTED IF] Number is between 0 and 9" << endl;

            if (number == 0)
            {
                cout << "[NESTED IF] Special case: ZERO" << endl;
            }
            else
            {
                cout << "[NESTED IF] Positive single-digit number" << endl;
            }
        }
    }
    else
    {
        cout << "\n[NESTED IF] Number is NEGATIVE" << endl;

        if (number < -100)
        {
            cout << "[NESTED IF] Very large negative number" << endl;
        }
        else
        {
            cout << "[NESTED IF] Small negative number" << endl;
        }
    }

    /*
        PROGRAM END
        return 0 means successful execution
    */

    return 0;
}