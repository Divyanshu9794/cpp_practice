#include <iostream>
#include <cmath>

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int A, B;
        std::cin >> A >> B;
        int total = 0;
        while (A != B) {
            if (A > B) {
                total += std::ceil(A / 2.0);
                A = std::floor(A / 2.0);
            } else {
                total += std::ceil(B / 2.0);
                B = std::floor(B / 2.0);
            }
        }
        std::cout << total << std::endl;
    }
    return 0;
}