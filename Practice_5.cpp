#include <iostream>
#include <iomanip>

void showBalance(double balance) {
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << std::endl;
}

double deposit() {
    double amount = 0;

    std::cout << "Enter amount to deposit: ";
    std::cin >> amount;

    if (amount > 0) {
        return amount;
    }
    else {
        std::cout << "Invalid amount!" << std::endl;
        return 0;
    }
}

double withdraw(double balance) {

    double amount = 0;

    std::cout << "Enter amount to withdraw: ";
    std::cin >> amount;

    if (amount > 0 && amount <= balance) {
        return amount;
    }
    else {
        std::cout << "Invalid amount!" << std::endl;
        return 0;
    }

}

int main() {

    double balance = 123.01;
    int choice = 0;

    do {
        std::cout << "************************" << std::endl;
        std::cout << "Select your choice" << std::endl;
        std::cout << "1. Show balance" << std::endl;
        std::cout << "2. Deposit" << std::endl;
        std::cout << "3. Withdraw" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "************************" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch (choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                std::cout << "Thank you for using our service!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice!" << std::endl;
                break;
        }
    } while (choice != 4);

    return 0;
}
