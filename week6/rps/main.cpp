#include <iostream>

using namespace std;

// Ask user for their choice
char getUserChoice() {
    char choice;
    cout << "Weapon choice? r==rock, s==scissors, p==paper";
    cin >> choice;
    if (choice == 'r' || choice == 'p' || choice == 's') {
        return choice;
    } else {
        cout << "Yo, wth? that's not valid." << endl;
        return getUserChoice();
    }
}

// randomly generate the computer's choice from the set "r", "p", "s"
char getComputerChoice() {
    int num = rand() % 3;
    if (num == 0)
        return 'r';
    if (num == 1)
        return 'p';
    return 's';
}

bool gameWasTied(char userChoice, char computerChoice) {
    return userChoice == computerChoice;
}

// Play a game of RPS, return true if the user won, false if
// the computer won. If there was a tie, play again and return
// that result.

bool playGame() {
    char userChoice = getUserChoice();
    char computerChoice = getComputerChoice();

    cout << "User: " << userChoice << " Computer: " << computerChoice << endl;

    if (gameWasTied(userChoice, computerChoice)) {
        return playGame();
    } else if ((userChoice == 'r' && computerChoice == 's') ||
               (userChoice == 's' && computerChoice == 'p') ||
               (userChoice == 'p' && computerChoice == 'r')) {
        // user wins
        cout << "User wins!" << endl;
        return true;
    } else {
        cout << "User loses!" << endl;
        return false;
    }
}

int playGames(int gamesLeft) {
    int numberOfUserWins;

    if (gamesLeft == 0) {
        return 0;
    }
    bool userWon = playGame();
    numberOfUserWins = playGames(gamesLeft - 1);
    if (userWon) {
        numberOfUserWins = numberOfUserWins + 1;
    }
    return numberOfUserWins;
}
int main() {
    int howManyGames;

    cout << "How many games? ";
    cin >> howManyGames;
    int userWins = playGames(howManyGames);
    cout << double(userWins) / howManyGames << endl;
}
