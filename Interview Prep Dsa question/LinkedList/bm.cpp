#include <iostream>
#include <cstring>
using namespace std;

int countOccurrences(const char* str, int size, const char* sub) {
    int count = 0, subLen = strlen(sub);
    for (const char* pos = str; pos - str < size && (pos = strstr(pos, sub)); pos += subLen) {
        count++;
    }
    return count;
}

int main() {
    const char* str = "helloworld";
    int size = 10;
    const char* sub = "l";

    cout << "Occurrences: " << countOccurrences(str,  size, sub) << endl;
    return 0;
}