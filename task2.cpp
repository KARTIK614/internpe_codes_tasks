#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    
    string choices[] = {"Rock", "Paper", "Scissors"};
    int userChoice, computerChoice;
    
    while (true) {
        cout << "Enter your choice (1 for Rock, 2 for Paper, 3 for Scissors, -1 to exit): ";
        cin >> userChoice;
        
        if (userChoice == -1) {
            cout << "Thanks for playing. Goodbye!" << endl;
            break;
        }
        
        if (userChoice < 1 || userChoice > 3) {
            cout << "Invalid choice. Please try again." << endl;
            continue;
        }
        
        computerChoice = rand() % 3 + 1;
        
        cout << "You chose: " << choices[userChoice - 1] << endl;
        cout << "Computer chose: " << choices[computerChoice - 1] << endl;
        
        if (choices[userChoice - 1] == choices[computerChoice - 1]) {
            cout << "It's a tie!" << endl;
        } else if ((choices[userChoice - 1] == "Rock" && choices[computerChoice - 1] == "Scissors") ||
                   (choices[userChoice - 1] == "Paper" && choices[computerChoice - 1] == "Rock") ||
                   (choices[userChoice - 1] == "Scissors" && choices[computerChoice - 1] == "Paper")) {
            cout << "You win!" << endl;
        } else {
            cout << "Computer wins!" << endl;
        }
        
        cout << endl;
    }
    
    return 0;
}