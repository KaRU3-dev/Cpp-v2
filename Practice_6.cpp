#include <iostream>
#include <ctime>


char getUserChoice() {

    char player;

    do {
        std::cout << "Rock Paper Scissors Game !!" << std::endl;
        std::cout << "'r' for rock, 'p' for paper, 's' for scissors: ";
        std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice() {

    srand(time(0));
    int num = rand() % 3 + 1;

    char r = 'r';
    char p = 'p';
    char s = 's';

    switch (num) {
        case 1:
            return r;
        case 2:
            return p;
        case 3:
            return s;
        default:
            return r;
    }
}

void showChoice(char choice) {
    switch (choice) {
        case 'r':
            std::cout << "Rock" << std::endl;
            break;
        case 'p':
            std::cout << "Paper" << std::endl;
            break;
        case 's':
            std::cout << "Scissors" << std::endl;
            break;
    }
}
void chooseWinner(char player, char computer) {

    switch(player) {
        case 'r':
            if (computer == 'r') {
                std::cout << "It's a tie!" << std::endl;
            }
            else if (computer == 'p') {
                std::cout << "You lose!" << std::endl;
            }
            else {
                std::cout << "You win!" << std::endl;
            }
            break;
        case 'p':
            if (computer == 'r') {
                std::cout << "You win!" << std::endl;
            }
            else if (computer == 'p') {
                std::cout << "It's a tie!" << std::endl;
            }
            else {
                std::cout << "You lose!" << std::endl;
            }
            break;
        case 's':
            if (computer == 'r') {
                std::cout << "You lose!" << std::endl;
            }
            else if (computer == 'p') {
                std::cout << "You win!" << std::endl;
            }
            else {
                std::cout << "It's a tie!" << std::endl;
            }
            break;
    }

}


int main() {

    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}
