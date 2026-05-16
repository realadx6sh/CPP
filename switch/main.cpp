#include <iostream>
using namespace std;

int main()
{
    /*
        VARIABLE DECLARATION

        A variable named 'number' is declared
        to store the user's input.
    */
    int number;

    /*
        OUTPUT STATEMENT

        Asks the user to enter a number
        for generating a quote.
    */
    cout << "Enter a number to generate quotes" << endl;

    /*
        INPUT STATEMENT

        Takes input from the user
        and stores it inside 'number'.
    */
    cin >> number;

    /*
        SWITCH STATEMENT

        A switch statement is used to execute
        different blocks of code based on
        the value of a variable.

        Syntax:
        switch(variable)
        {
            case value:
                // code
                break;

            default:
                // code
        }

        break:
        Stops execution after a matching case.

        default:
        Executes when no case matches.
    */
    switch (number)
    {
    case 1:
        /*
            Executes when the user enters 1.
        */
        cout << "Power is not given. It is taken by those willing to crush everything in their path. — Tai Lung" << endl;
        break;

    case 2:
        /*
            Executes when the user enters 2.
        */
        cout << "Fear is the chain that keeps the weak obedient. — Lord Shen" << endl;
        break;

    case 3:
        /*
            Executes when the user enters 3.
        */
        cout << "The world does not reward kindness. It rewards strength. — Kai" << endl;
        break;

    case 4:
        /*
            Executes when the user enters 4.
        */
        cout << "Destiny is only for those too afraid to seize control. — Tai Lung" << endl;
        break;

    case 5:
        /*
            Executes when the user enters 5.
        */
        cout << "A warrior without ambition is already defeated. — Kai" << endl;
        break;

    case 6:
        /*
            Executes when the user enters 6.
        */
        cout << "Peace is just silence before the next conquest. — Lord Shen" << endl;
        break;

    case 7:
        /*
            Executes when the user enters 7.
        */
        cout << "Mercy is a luxury villains can never afford. — Tai Lung" << endl;
        break;

    case 8:
        /*
            Executes when the user enters 8.
        */
        cout << "Legends are not born. They are forged through domination. — Kai" << endl;
        break;

    case 9:
        /*
            Executes when the user enters 9.
        */
        cout << "The stronger your enemies become, the sweeter their downfall feels. — Lord Shen" << endl;
        break;

    case 10:
        /*
            Executes when the user enters 10.
        */
        cout << "Victory belongs to the one willing to become the monster others fear. — Tai Lung" << endl;
        break;

    default:
        /*
            Executes when the entered number
            does not match any case.
        */
        cout << "Enter between 1 - 10" << endl;
        break;
    }

    return 0;
}