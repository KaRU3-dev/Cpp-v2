#include <iostream>
#include <ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
std::string checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces, const std::string winner);


int main() {

    char spaces[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
    char player = 'X';
    char computer = 'O';
    bool running = true;
    std::string winner = "";

    drawBoard(spaces);

    while (running) {
        playerMove(spaces, player);
        drawBoard(spaces);

        winner = checkWinner(spaces, player, computer);

        if (winner == "player") {
            std::cout << "Winner : " << winner << std::endl;
            std::cout << "You win!" << std::endl;
            running = false;
            break;
        } else if (winner == "computer") {
            std::cout << "Winner : " << winner << std::endl;
            std::cout << "You lose!" << std::endl;
            running = false;
            break;
        } else {
            checkTie(spaces, winner);
        }

        computerMove(spaces, computer);
        drawBoard(spaces);

        winner = checkWinner(spaces, player, computer);

        if (winner == "player") {
            std::cout << "Winner : " << winner << std::endl;
            std::cout << "You win!" << std::endl;
            running = false;
            break;
        } else if (winner == "computer") {
            std::cout << "Winner : " << winner << std::endl;
            std::cout << "You lose!" << std::endl;
            running = false;
            break;
        } else {
            checkTie(spaces, winner);
        }
    }

    return 0;
}

void drawBoard(char *spaces) {
    std::cout << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << std::endl;
}
void playerMove(char *spaces, char player) {
    int number;
    do {
        std::cout << "Enter a spot place a marker (1-9): ";
        std::cin >> number;
        number--;
        if (spaces[number] != ' ') {
            std::cout << "That spot is taken!" << std::endl;
        } else {
            spaces[number] = player;
            break;
        }
    } while (!number > 0 || !number < 8);
}
void computerMove(char *spaces, char computer) {
    int number;
    srand(time(0));

    while (true) {
        number = rand() % 9;
        if (spaces[number] == ' ') {
            spaces[number] = computer;
            break;
        }
    }
}
std::string checkWinner(char *spaces, char player, char computer) {

#pragma region Horizontal
    if (((spaces[0] != ' ') && (spaces[1] != ' ') && (spaces[2] != ' ')) && ((spaces[0] == player) && (spaces[1] == player) && (spaces[2] == player))) {
            return "player";
    } else if (((spaces[0] != ' ') && (spaces[1] != ' ') && (spaces[2] != ' ')) && ((spaces[0] == computer) && (spaces[1] == computer) && (spaces[2] == computer))) {
            return "computer";
    }
    if (((spaces[3] != ' ') && (spaces[4] != ' ') && (spaces[5] != ' ')) && ((spaces[3] == player) && (spaces[4] == player) && (spaces[5] == player))) {
            return "player";
    } else if (((spaces[3] != ' ') && (spaces[4] != ' ') && (spaces[5] != ' ')) && ((spaces[3] == computer) && (spaces[4] == computer) && (spaces[5] == computer))) {
            return "computer";
    }
    if (((spaces[6] != ' ') && (spaces[7] != ' ') && (spaces[8] != ' ')) && ((spaces[6] == player) && (spaces[7] == player) && (spaces[8] == player))) {
            return "player";
    } else if (((spaces[6] != ' ') && (spaces[7] != ' ') && (spaces[8] != ' ')) && ((spaces[6] == computer) && (spaces[7] == computer) && (spaces[8] == computer))) {
            return "computer";
    }
#pragma endregion

#pragma region Vertical

    if (((spaces[0] != ' ') && (spaces[3] != ' ') && (spaces[6] != ' ')) && ((spaces[0] == player) && (spaces[3] == player) && (spaces[6] == player))) {
            return "player";
    } else if (((spaces[0] != ' ') && (spaces[3] != ' ') && (spaces[6] != ' ')) && ((spaces[0] == computer) && (spaces[3] == computer) && (spaces[6] == computer))) {
            return "computer";
    }
    if (((spaces[1] != ' ') && (spaces[4] != ' ') && (spaces[7] != ' ')) && ((spaces[1] == player) && (spaces[4] == player) && (spaces[7] == player))) {
            return "player";
    } else if (((spaces[1] != ' ') && (spaces[4] != ' ') && (spaces[7] != ' ')) && ((spaces[1] == computer) && (spaces[4] == computer) && (spaces[7] == computer))) {
            return "computer";
    }
    if (((spaces[2] != ' ') && (spaces[5] != ' ') && (spaces[8] != ' ')) && ((spaces[2] == player) && (spaces[5] == player) && (spaces[8] == player))) {
            return "player";
    } else if (((spaces[2] != ' ') && (spaces[5] != ' ') && (spaces[8] != ' ')) && ((spaces[2] == computer) && (spaces[5] == computer) && (spaces[8] == computer))) {
            return "computer";
    }
#pragma endregion

#pragma region Diagonal

    if (((spaces[0] != ' ') && (spaces[4] != ' ') && (spaces[8] != ' ')) && ((spaces[0] == player) && (spaces[4] == player) && (spaces[8] == player))) {
            return "player";
    } else if (((spaces[0] != ' ') && (spaces[4] != ' ') && (spaces[8] != ' ')) && ((spaces[0] == computer) && (spaces[4] == computer) && (spaces[8] == computer))) {
            return "computer";
    }
    if (((spaces[2] != ' ') && (spaces[4] != ' ') && (spaces[6] != ' ')) && ((spaces[2] == player) && (spaces[4] == player) && (spaces[6] == player))) {
            return "player";
    } else if (((spaces[2] != ' ') && (spaces[4] != ' ') && (spaces[6] != ' ')) && ((spaces[2] == computer) && (spaces[4] == computer) && (spaces[6] == computer))) {
            return "computer";
    }
#pragma endregion

    return "";
}
bool checkTie(char *spaces, const std::string winner) {
    if (winner == "") {
        for (int i = 0; i < 9; i++) {
            if (spaces[i] == ' ') {
                return false;
            }
        }
        return true;
    }
}
