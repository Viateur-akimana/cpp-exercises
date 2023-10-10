#include <iostream>

int sumDifference(int n) {
    int sumNumbers = 0;
    for (int i = 1; i <= n; ++i) {
        sumNumbers += i;
    }

    int squareSum = sumNumbers * sumNumbers;
    int sumSquares = 0;
    for (int i = 1; i <= n; ++i) {
        sumSquares += i * i;
    }
    int difference = squareSum - sumSquares;

    return difference;
}

int main() {
    int n = 10; 
    int result = sumDifference(n);
    std::cout << "The difference is:" << n << " natural numbers is: " << result << std::endl;

    return 0;
}