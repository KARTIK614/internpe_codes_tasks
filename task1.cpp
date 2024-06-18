#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int guess_num, rand_num;

    for (int i = 0; i >= 0; i++) {
        cout << "Enter the number you want to guess between 1 to 100: \nEnter -1 to exit the game"
             << endl; // taking input.

        cin >> guess_num;
        rand_num = rand() % 100;

        if (guess_num == -1) // Exiting the game.
        {
            cout << "Thanks for playing the game" << endl;
            break;
        }
        if (guess_num > 100 || guess_num < 1) // validation of the number.
        {
            cout << "Enter the valid number" << endl;
        }
        if (guess_num == rand_num) {
            cout << "Congratulations you have guessed the right number" << endl; // Matched condition.
            break;
        }
        cout << "guessed number: " << guess_num << endl;
        cout << "Random number: " << rand_num << endl;
    }

    return 0;
}
