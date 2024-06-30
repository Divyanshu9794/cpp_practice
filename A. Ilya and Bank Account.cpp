#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    if (n >= 0) {
        std::cout << n << std::endl;
    } else {
        std::string s = std::to_string(n);
        std::string option1 = s.substr(0, s.size() - 1);
        std::string option2 = s.substr(0, s.size() - 2) + s.back();
        int value1 = std::stoi(option1);
        int value2 = std::stoi(option2);
        std::cout << std::max(value1, value2) << std::endl;
    }

    return 0;
}
