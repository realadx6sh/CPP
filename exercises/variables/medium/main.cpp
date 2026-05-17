#include <iostream>
using namespace std;

// Take name and age from user and display a sentence
// Store marks of 3 subjects and calculate total
// Swap two numbers using a temporary variable
// Store salary (double) and print yearly salary
// Input student details and print formatted output

int main()
{
    // Take name and age from user and display a sentence
    // int age;
    // string name;

    // cout << "Enter your name :";
    // cin >> name;
    // cout << "Enter your age";
    // cin >> age;
    // cout << "My name is " << name << ", I am " << age << " years old." << endl;

    // Store marks of 3 subjects and calculate total

    // int subject1, subject2, subject3, totalMarks;

    // cout << "Enter the mark of the first subject 1" << endl;
    // cin >> subject1;
    // cout << "Enter the mark of the first subject 2" << endl;
    // cin >> subject2;
    // cout << "Enter the mark of the first subject 3" << endl;
    // cin >> subject3;
    // totalMarks = subject1 + subject2 + subject3;
    // cout << "Your total mark is : " << totalMarks;

    // Swap two numbers using a temporary variable

    // int a, b, temp;
    // cout << "Enter the value of a:";
    // cin >> a;
    // cout << "Enter the value of b: ";
    // cin >> b;

    // temp = a;
    // a = b;
    // b = temp;

    // cout << "Value of a: " << a << ", b : " << b
    //      << " temp: " << temp;

    // Store salary (double) and print yearly salary

    // double salary;

    // cout << "Enter your salary :" << endl;
    // cin >> salary;
    // cout << "Your salary/yr : " << salary * 12;

    // Input student details and print formatted output

    int standard;
    int age;
    int birthYear;
    string name;
    string city;

    cout << "Enter students name : " << endl;
    cin >> name;

    cout << "Enter students standard : " << endl;
    cin >> standard;

    cout << "Enter students age : " << endl;
    cin >> age;

    cout << "Enter students birth year : " << endl;
    cin >> birthYear;

    cout << "Enter students city : " << endl;
    cin >> city;

    cout << "The name of the student is " << name
         << ", age is " << age
         << ", born in " << birthYear
         << ", studying in standard " << standard
         << ", living in " << city;
    return 0;
}