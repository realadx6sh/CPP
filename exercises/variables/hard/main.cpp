#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main()
{

    // Input 5 subject marks and calculate percentage

    // int sub1, sub2, sub3, sub4, sub5, maximumMarks;
    // float percentage;
    // cout << "Enter the mark of subject 1 :" << endl;
    // cin >> sub1;
    // cout << "Enter the mark of subject 2 :" << endl;
    // cin >> sub2;
    // cout << "Enter the mark of subject 3 :" << endl;
    // cin >> sub3;
    // cout << "Enter the mark of subject 4 :" << endl;
    // cin >> sub4;
    // cout << "Enter the mark of subject 5 :" << endl;
    // cin >> sub5;
    // cout << "Maximum possible mark : " << endl;
    // cin >> maximumMarks;
    // percentage = (sub1 + sub2 + sub3 + sub4 + sub5) * 100.0 / (5 * maximumMarks);
    // cout << "The percentage of marks obtained is :" << percentage;
    // return 0;

    // long long number, multiple;
    // cout << "Enter a long number : ";
    // cin >> number;
    // multiple = number * 2;
    // cout << "Mutiple of the " << number << "is " << multiple;
    // return 0;

    // Build a student report card system

    // int standard;
    // int grade;
    // string address, name;
    // int age, birthYear;

    // cout << "Enter your name: ";
    // getline(cin, name);

    // cout << "Enter your standard: ";
    // cin >> standard;

    // cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // cout << "Enter your address: ";
    // getline(cin, address);

    // cout << "Enter your overall grade: ";
    // cin >> grade;

    // cout << "Enter your birth year: ";
    // cin >> birthYear;

    // age = 2026 - birthYear;

    // cout << "\n========== Student Details ==========\n";
    // cout << "Name        : " << name << endl;
    // cout << "Standard    : " << standard << endl;
    // cout << "Address     : " << address << endl;
    // cout << "Grade       : " << grade << endl;
    // cout << "Birth Year  : " << birthYear << endl;
    // cout << "Age         : " << age << " years old" << endl;

    // Apply GST on product price

    // float originalCost, gstRate, gstAmount, finalPrice;

    // cout << "Enter original cost of the product: ";
    // cin >> originalCost;

    // cout << "Enter the GST rate (%): ";
    // cin >> gstRate;

    // gstAmount = (originalCost * gstRate) / 100;
    // finalPrice = originalCost + gstAmount;

    // cout << "\nGST Amount : " << gstAmount << endl;
    // cout << "Final Price: " << finalPrice << endl;

    // Create a simple ID card system

    // Unique ID number
    // Full name
    // Date of birth
    // Age
    // Gender
    // Address
    // Phone number
    // Email

    long long uniqueIdNumber, phoneNumber;
    string firstName, lastName, gender, email, dateOfBirth, address;
    int age;

    cout << "Enter your unique ID : " << endl;
    cin >> uniqueIdNumber;

    cout << "Enter your first name : " << endl;
    cin >> firstName;

    cout << "Enter your last name : " << endl;
    cin >> lastName;

    cout << "Enter your date of birth [DD/MM/YY] : " << endl;
    cin >> dateOfBirth;

    cout << "Enter your gender: " << endl;
    cin >> gender;

    cout << "Enter your address: " << endl;
    cin.ignore();
    getline(cin, address);

    cout
        << "Enter your phone number: " << endl;
    cin >> phoneNumber;

    cout << "Enter your email: " << endl;
    cin.ignore(); // cin.ignore() removes that leftover newline
    getline(cin, email);

    cout << "\n";
    cout << "=========================================\n";
    cout << "              DIGITAL ID CARD            \n";
    cout << "=========================================\n";

    cout << "Unique ID     : " << uniqueIdNumber << endl;
    cout << "Name          : " << firstName << " " << lastName << endl;
    cout << "Date of Birth : " << dateOfBirth << endl;
    cout << "Gender        : " << gender << endl;
    cout << "Address       : " << address << endl;
    cout << "Phone Number  : " << phoneNumber << endl;
    cout << "Email         : " << email << endl;

    cout << "=========================================\n";
    cout << "        Identity Verified Successfully   \n";
    cout << "=========================================\n";

    return 0;
}