#include <iostream>

int main() {

    std::string questions[] = {
        "1. What year was C++ created?: ",
        "2. Who created C++?: ",
        "3. What is the predecessor of C++?: ",
        "4. Is the earth flat?: ",
    };

    std::string options[][4] = {
        { "A. 1969", "B. 1975", "C. 1985", "D. 1991" },
        { "A. Bjarne Stroustrup", "B. Dennis Ritchie", "C. James Gosling", "D. Ken Thompson" },
        { "A. C", "B. C#", "C. Java", "D. B" },
        { "A. Yes", "B. No", "C. Maybe", "D. I don't know" }
    };

    char answers[] = { 'C', 'A', 'A', 'B' };

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score;

    for (int i = 0; i < size; i++) {
        std::cout << questions[i] << std::endl;

        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++) {
            std::cout << options[i][j] << std::endl;
        }

        std::cout << "Your answer: ";
        std::cin >> guess;
        guess = toupper(guess);

        if (guess == answers[i]) {
            std::cout << "Correct!" << std::endl;
            score++;
        }
        else {
            std::cout << "Wrong!" << std::endl;
        }
    }

    std::cout << "Your score: " << score << "/" << size << std::endl;


    return 0;
}
