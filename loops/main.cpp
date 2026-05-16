#include <iostream>
using namespace std;

int main()
{
    /*
        FOR LOOP

        A for loop is used when the number of iterations
        is known beforehand.

        Structure:
        1. Initialization   -> Starting value of the loop variable
        2. Condition        -> Checked before every iteration
        3. Increment/Decrement -> Updates the loop variable

        Syntax:
        for (initialization; condition; update)
        {
            // code to execute
        }
    */

    /*
    Example:
    Prints "Hello, Adarsh" 10 times.

    for (int count = 1; count <= 10; count++)
    {
        cout << "Hello, Adarsh" << endl;
    }
    */

    /*
        BREAK STATEMENT

        The break statement immediately terminates
        the loop when the given condition becomes true.
    */

    /*
    Example:
    Stops the loop when i becomes 3.

    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            break;
        }

        cout << i << "th iteration done" << endl;
    }
    */

    /*
        CONTINUE STATEMENT

        The continue statement skips the current iteration
        and moves directly to the next iteration.
    */

    /*
    Example:
    Skips printing when i becomes 3.

    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;
        }

        cout << i << "th iteration done" << endl;
    }
    */

    /*
        WHILE LOOP

        A while loop is used when the number of iterations
        is not fixed beforehand.

        The loop continues executing as long as
        the condition remains true.

        Syntax:
        while (condition)
        {
            // code to execute
        }
    */

    int i = 0;

    /*
        This loop prints the current value of i
        from 0 to 5.
    */
    while (i <= 5)
    {
        cout << "The current value of i is " << i << endl;

        // Increase the value of i after each iteration
        i++;
    }

    return 0;
}