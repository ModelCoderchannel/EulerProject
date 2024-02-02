#include <iostream>

int sum_of_multiples_division(int limit) {
    int total_sum = 0;
    for (int num = 0; num < limit; ++num) {
        if (num % 3 == 0 || num % 5 == 0) {
            total_sum += num;
        }
    }
    return total_sum;
}

int main() {
    // limit =1000
    int result_division = sum_of_multiples_division(1000);
    std::cout << result_division << std::endl;

    return 0;
}
