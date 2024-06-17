// jungle game 
#include <iostream>
#include <string>

using namespace std;

// Function declarations
void intro();
void firstChoice();
void leftPath();
void rightPath();
void win();
void lose();

int main() {
    intro();
    firstChoice();
    return 0;
}

void intro() {
    cout << "Welcome to the Adventure Game!" << endl;
    cout << "You find yourself in a dark forest with two paths ahead." << endl;
    cout << "One path leads to the left, and the other leads to the right." << endl;
    cout << "Which path will you take? (left/right)" << endl;
}

void firstChoice() {
    string choice;
    cin >> choice;

    if (choice == "left") {
        leftPath();
    } else if (choice == "right") {
        rightPath();
    } else {
        cout << "Invalid choice. Please choose 'left' or 'right'." << endl;
        firstChoice();
    }
}

void leftPath() {
    cout << "You walk down the left path and encounter a wild animal." << endl;
    cout << "Do you want to (run/fight)?" << endl;
    
    string choice;
    cin >> choice;

    if (choice == "run") {
        cout << "You run away safely and find a hidden treasure." << endl;
        win();
    } else if (choice == "fight") {
        cout << "The animal overpowers you. You lose." << endl;
        lose();
    } else {
        cout << "Invalid choice. Please choose 'run' or 'fight'." << endl;
        leftPath();
    }
}

void rightPath() {
    cout << "You walk down the right path and fall into a trap." << endl;
    cout << "Do you want to (climb out/wait)?" << endl;
    
    string choice;
    cin >> choice;

    if (choice == "climb out") {
        cout << "You manage to climb out and find a hidden treasure." << endl;
        win();
    } else if (choice == "wait") {
        cout << "You wait for hours, but no one comes to help. You lose." << endl;
        lose();
    } else {
        cout << "Invalid choice. Please choose 'climb out' or 'wait'." << endl;
        rightPath();
    }
}

void win() {
    cout << "Congratulations! You have won the game!" << endl;
}

void lose() {
    cout << "Game Over. Better luck next time." << endl;
}
