#include <iostream>

double getTotal(double prices[], int size) {

    double total;

    for (int i = 0; i < size; i++) {
        total += prices[i];
    }

    return total;
}

int main() {

    double prices[] = { 4.99, 10.99, 6.87, 7.99 };
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices, size);

    std::cout << "Total: " << total << std::endl;

    return 0;
}
