#include <iostream>
using namespace std;

int main()
{

    // =====================================================
    // QUESTION 1 : Check Driving Eligibility
    // =====================================================

    // Variable to store the user's age
    // int age;

    // Ask the user to enter their age
    // cout << "Enter your age : ";
    // cin >> age;

    // Check if the user is eligible for driving
    // if (age >= 18)
    // {
    //     cout << "You are eligible for driving";
    // }
    // else
    // {
    //     // Executes if age is below 18
    //     cout << "You are not eligible for driving";
    // }

    // return 0;

    // =====================================================
    // QUESTION 2 : Find the Largest of 3 Numbers
    // =====================================================

    // Variables to store three numbers
    // int num1, num2, num3;

    // Take input from user
    // cout << "Enter first number : ";
    // cin >> num1;

    // cout << "Enter second number : ";
    // cin >> num2;

    // cout << "Enter third number : ";
    // cin >> num3;

    // Check the largest number using nested if
    // if (num1 > num2)
    // {
    //     if (num1 > num3)
    //     {
    //         cout << "First number is the largest";
    //     }
    //     else
    //     {
    //         cout << "Third number is the largest";
    //     }
    // }
    // else
    // {
    //     if (num2 > num3)
    //     {
    //         cout << "Second number is the largest";
    //     }
    //     else
    //     {
    //         cout << "Third number is the largest";
    //     }
    // }

    // return 0;

    // =====================================================
    // QUESTION 3 : Leap Year Check
    // =====================================================

    // Variable to store the year
    // int year;

    // Ask the user to enter a year
    // cout << "Enter a year : ";
    // cin >> year;

    // Check whether the year is a leap year
    // if (year % 400 == 0)
    // {
    //     cout << year << " is a leap year";
    // }
    // else if (year % 100 == 0)
    // {
    //     cout << year << " is not a leap year";
    // }
    // else if (year % 4 == 0)
    // {
    //     cout << year << " is a leap year";
    // }
    // else
    // {
    //     cout << year << " is not a leap year";
    // }

    // return 0;

    // =====================================================
    // QUESTION 4 : Salary Tax System
    // =====================================================

    // Variable to store salary
    double salary;

    // Ask the user to enter salary
    cout << "Enter your salary : ";
    cin >> salary;

    // Check tax percentage based on salary
    // if (salary <= 250000)
    // {
    //     cout << "No tax applicable";
    // }
    // else if (salary > 250000 && salary <= 500000)
    // {
    //     cout << "Tax applicable is 5%";
    // }
    // else if (salary > 500000 && salary <= 1000000)
    // {
    //     cout << "Tax applicable is 20%";
    // }
    // else
    // {
    //     cout << "Tax applicable is 30%";
    // }

    // return 0;

    string username = "aadhi", password = "aadhi@2004";
    cout << "Enter your username : ";
    cin >> username;
    cout << "Enter your password : ";
    cin >> password;
    if (username == "aadhi" && password == "aadhi@2004")
    {
        cout << "Authentication success";
    }
    else
    {
        cout << "Authentication failed";
    }
}