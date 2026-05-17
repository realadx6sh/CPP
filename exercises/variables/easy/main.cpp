#include <iostream>
using namespace std;

// Create variables for name, age, and city and print them
// Store two numbers and print their sum
// Store a character and display it
// Create a boolean variable and print it
// Store a float value and display it

int main()
{
    // Create variables for name, age, and city and print them

    string name = "Adarsh", city = "Kottayam";
    int age = 21;

    cout << "My name is " << name << " , I am " << age << " years old, I am from " << city << "." << endl;

    // Store two numbers and print their sum

    int num1 = 10, num2 = 20;

    cout << "The sum of two numbers is : " << num1 + num2 << endl;

    // Store a character and display it

    char character = 'A';
    cout << "The character is :" << character;

    // Create a boolean variable and print it

    bool isAdult = true;
    cout << "My voting eligibility is : " << isAdult << endl; // 1 means true

    // Store a float value and display it

    float pi = 3.14;

    cout << "The value of pi is : " << pi;

    return 0;
}