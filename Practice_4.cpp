#include <iostream>

int main() {

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = rand() % 100 + 1;

    std::cout << "***** NUMBER GUESSING GAME *****\n";

    do {
        std::cout << "Enter a guess between 1 and 100: ";
        std::cin >> guess;
        tries++;

        if (guess > num) {
            std::cout << "Too high!\n";
        }
        else if (guess < num) {
            std::cout << "Too low!\n";
        }
        else {
            std::cout << "Correct! You got it in " << tries << " guesses!\n";
        }

    } while (guess != num);

    std::cout << "********************************\n";

    return 0;
}