//number guessing game task 1
#include <iostream>
#include <cstdlib>   // Needed for rand() and srand()
#include <ctime>     // Needed for time()

using namespace std;

int main() {
    // Seed the random number generator using current time
    // This makes sure we get a different number every time we run the program
    srand(time(0));

    // Generate a random number between 1 and 100
    // This is the number the user needs to guess
    int secretNumber = rand() % 100 + 1;

    // Variable to store the user's guess
    int guess = 0;

    // Display game instructions
    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I'm thinking of a number between 1 and 100.\n";

    // Keep looping until the user guesses the correct number
    while (guess != secretNumber) {

        // Ask the user to enter a guess
        cout << "Enter your guess: ";
        cin >> guess;

        // Check if the guess is too high
        if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        }
        // Check if the guess is too low
        else if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        }
        // If neither of the above, the guess must be correct
        else {
            cout << "Congratulations! You guessed the correct number.\n";
        }
    }

    // End of program
    return 0;
}
