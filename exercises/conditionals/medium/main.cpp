#include <iostream>
using namespace std;

int main()
{

    // =====================================================
    // QUESTION 1 : Check Voting Eligibility
    // =====================================================

    // Variable to store the user's age
    // int age;

    // Ask the user to enter their age
    // cout << "Enter your age : ";
    // cin >> age;

    // Check if the user is eligible for voting
    // if (age >= 18)
    // {
    //     cout << "You are eligible for voting";
    // }
    // else
    // {
    //     // Executes if the age is below 18
    //     cout << "You are not eligible for voting";
    // }

    // =====================================================
    // QUESTION 2 : Grade Classification System
    // =====================================================

    // Variable to store the student's marks
    // int grade;

    // Ask the user to enter marks
    // cout << "Enter your grade : ";
    // cin >> grade;

    // Check the grade category based on marks
    // if (grade >= 80)
    // {
    //     cout << "Your grade is A";
    // }
    // else if (grade <= 79)
    // {
    //     cout << "Your grade is B";
    // }
    // else if (grade <= 78)
    // {
    //     cout << "Your grade is C";
    // }
    // else if (grade < 25)
    // {
    //     cout << "You have failed";
    // }

    // return 0;

    // =====================================================
    // QUESTION 3 : Find the Largest of Two Numbers
    // =====================================================

    // Variables to store two numbers
    // int num1, num2;

    // Take first number input
    // cout << "Enter the value of the first number : ";
    // cin >> num1;

    // Take second number input
    // cout << "Enter the value of the second number : ";
    // cin >> num2;

    // Compare both numbers
    // if (num1 > num2)
    // {
    //     cout << "The number one is the greatest!";
    // }
    // else
    // {
    //     // Executes if second number is greater
    //     cout << "The number two is the greatest";
    // }

    // return 0;

    // =====================================================
    // QUESTION 4 : Check Divisibility by 5
    // =====================================================

    // Variable to store the number
    // int number;

    // Ask the user to enter a number
    // cout << "Enter a number to check the divisibility of 5 : ";
    // cin >> number;

    // Check whether the number is divisible by 5
    // if (number % 5 == 0)
    // {
    //     cout << "This number is divisible by 5";
    // }
    // else
    // {
    //     // Executes if the number is not divisible by 5
    //     cout << "This number is not divisible by 5";
    // }

    // return 0;

    // =====================================================
    // QUESTION 5 : Check Whether a Number Lies Between 1 and 100
    // =====================================================

    // Variable to store the user input
    int number;

    // Ask the user to enter a number
    cout << "Enter a number to check it lies between 1 - 100 : ";
    cin >> number;

    // Check if the number is within the range 1 to 100
    if (number >= 1 && number < 101)
    {
        cout << "This number lies between 1 - 100";
    }
    else
    {
        // Executes if the number is outside the range
        cout << "This number doesnt lies between 1 - 100";
    }
}