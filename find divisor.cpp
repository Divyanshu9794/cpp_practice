#include <iostream>
#include <cmath>

int countDivisors(int n) {
    int count = 0;
    int sqrtN = sqrt(n);

    for (int i = 1; i <= sqrtN; ++i) {
        if (n % i == 0) {
            
            if (n / i == i) {
                count++;
            } else {
               
                count += 2;
            }
        }
    }

    return count;
}

int main() {
    int T;
    std::cin >> T;

    for (int t = 0; t < T; ++t) {
        int N;
        std::cin >> N;

        int result = countDivisors(N);
        std::cout << result << std::endl;
    }

    return 0;
}
