
#include <iostream>
#include <cstdlib>     // for rand() and srand()
#include <ctime>       // for time()
using namespace std;

int main() {
    int secret, guess;

    // Seed the random number generator
    srand(time(0));
    secret = rand() % 10 + 1;  // random number between 1 and 10

    cout << "🎮 Welcome to the Guessing Game!\n";
    cout << "Guess a number between 1 and 10:\n";

    // Keep asking until user guesses correctly
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == secret) {
            cout << "✅ Correct! You win!\n";
            break;
        } else {
            cout << "❌ Wrong guess! Try again.\n";
        }
    }

    return 0;
}
