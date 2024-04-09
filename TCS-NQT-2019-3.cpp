#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    long long  num;
    cin >> num;
    int  sumOdd = 0, sumEven = 0, index = 0;
    if(num < 0){
        cout << "invalid number";
    }
    else{
        while(num != 0){
            if(index % 2 == 0){
                sumEven = sumEven + num % 10;
                num = num / 10;
                index++;
            }
            else{
                sumOdd = sumOdd + num % 10;
                num = num / 10;
                index++;
            }
            
        }
        cout << abs(sumOdd - sumEven);
    }
}
