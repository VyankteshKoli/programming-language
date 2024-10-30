#include <iostream>
using namespace std;

int main() {
    int num = 42;  
    int guess;
    int numberOfGuesses = 0;

    cout << "! Welcome to Guessing Game !" << endl;
    cout << "Guess the number between 1 and 100." << endl;

    do {
        cout << "Enter your Guess:- ";
        cin >> guess;
        numberOfGuesses++;

        if (guess > num) {
            cout << "It's a High Number! Try again." <<endl;
        } else if (guess < num) {
            cout << "It's a Small Number! Try again." <<endl;
        } else {
            cout << "Hurrrahhh! You've guessed the Correct Number is " << numberOfGuesses << " Attempts." <<endl;
        }
    } while (guess != num);

    return 0;
}
