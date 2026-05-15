#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number to generate quotes" << endl;
    cin >> number;

    switch (number)
    {
    case 1:
        cout << "Power is not given. It is taken by those willing to crush everything in their path. — Tai Lung" << endl;
        break;

    case 2:
        cout << "Fear is the chain that keeps the weak obedient. — Lord Shen" << endl;
        break;

    case 3:
        cout << "The world does not reward kindness. It rewards strength. — Kai" << endl;
        break;

    case 4:
        cout << "Destiny is only for those too afraid to seize control. — Tai Lung" << endl;
        break;

    case 5:
        cout << "A warrior without ambition is already defeated. — Kai" << endl;
        break;

    case 6:
        cout << "Peace is just silence before the next conquest. — Lord Shen" << endl;
        break;

    case 7:
        cout << "Mercy is a luxury villains can never afford. — Tai Lung" << endl;
        break;

    case 8:
        cout << "Legends are not born. They are forged through domination. — Kai" << endl;
        break;

    case 9:
        cout << "The stronger your enemies become, the sweeter their downfall feels. — Lord Shen" << endl;
        break;

    case 10:
        cout << "Victory belongs to the one willing to become the monster others fear. — Tai Lung" << endl;
        break;

    default:
        cout << "Enter between 1 - 10" << endl;
        break;
    }

    return 0;
}