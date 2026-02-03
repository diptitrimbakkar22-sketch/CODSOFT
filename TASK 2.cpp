//SIMPLE CALCULATOR
#include <iostream>
using namespace std;

// Function to add two numbers
double add(double a, double b) {
    return a + b;
}

// Function to subtract second number from first
double subtract(double a, double b) {
    return a - b;
}

// Function to multiply two numbers
double multiply(double a, double b) {
    return a * b;
}

// Function to divide first number by second
double divide(double a, double b) {
    // Check to avoid division by zero
    if (b == 0) {
        cout << "Error! Division by zero is not allowed." << endl;
        return 0;
    }
    return a / b;
}

int main() {
    double num1, num2;
    int choice;

    //you can Ask user to enter two numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    //it will Display available operations
    cout << "\nSelect operation:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;

    // Take user's choice
    cout << "Enter your choice (1/2/3/4): ";
    cin >> choice;

    //it will Perform the selected operation
    //we have used switch case here
    switch (choice) {
        case 1:
            cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
            break;

        case 2:
            cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
            break;

        case 3:
            cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
            break;

        case 4:
            cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
            break;

        default:
            cout << "Invalid choice! Please select between 1 and 4." << endl;
    }

    return 0;
}
