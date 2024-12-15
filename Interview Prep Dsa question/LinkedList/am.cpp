#include <iostream>
#include <cmath>
using namespace std;

int minimumBuys(int input1, int input2, int input3) {
    int totalSweetsRequired = input2 * input3;
    int totalSundays = input3 / 7;
    int effectiveDaysToBuy = input3 - totalSundays;

    if (input2 > input1) return -1;

    int totalBoxesRequired = (totalSweetsRequired + input1 - 1) / input1;

    if (totalBoxesRequired > effectiveDaysToBuy) return -1;

    return totalBoxesRequired;
}

int main() {
    int input1 ,input2 ,input3 ;
    cin>>input1>>input2>>input3;
    cout<<minimumBuys(input1,input2,input3);
    return 0;
}
