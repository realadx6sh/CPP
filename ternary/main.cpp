#include <iostream>
using namespace std;
int main()
{
    int age;
    string result;

    cout << "Enter your age: " << endl;
    cin >> age;

    // Syntax : condition ? true_expression : false_expression;

    result = age >= 18 ? "Villian" : "Hero"; // Uses ternary operator to assign result based on age

    cout << result; // Displays the result message

    return 0; // Indicates successful program execution
}