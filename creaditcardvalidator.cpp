#include <iostream>

int getDigit(const int num) {

    return num % 10 + (num / 10 % 10);
}
int sumOddDigits(const std::string cardNumber) {

    int sum = 0;

    for (int i = cardNumber.size() - 1; i >= 0; i -= 2) {
        sum += cardNumber[i] - '0';
    }

    return sum;

}
int sumEvenDigits(const std::string cardNumber) {

    int sum = 0;

    for (int i = cardNumber.size() - 2; i >= 0; i -= 2) {
        int digit = getDigit((cardNumber[i] - '0') * 2);
        sum += digit;
    }

    return sum;
}


int main() {

    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card number: ";
    std::cin >> cardNumber;

    result = sumOddDigits(cardNumber) + sumEvenDigits(cardNumber);

    if (result % 10 == 0) {
        std::cout << "Valid" << std::endl;
    } else {
        std::cout << "Invalid" << std::endl;
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}
