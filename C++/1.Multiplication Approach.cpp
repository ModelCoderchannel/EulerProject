#include <iostream>
int sum_of_multiples_multiplication(int limit) {
    int total_sum = 0;
    for (int i = 1; i < limit; ++i) {
        int multiple_3 = i * 3;
        if (multiple_3 < limit) {
            total_sum += multiple_3;
        }

        int multiple_5 = i * 5;
        if (multiple_5 < limit && multiple_5 % 3 != 0) {
            total_sum += multiple_5;
        }
    }
    return total_sum;
}

int main() {
    //  limit = 1000
    int result_multiplication = sum_of_multiples_multiplication(1000);
    std::cout << result_multiplication << std::endl;

    return 0;
}

