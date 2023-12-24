#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    int a[n];
    bool pos = true;
    bool zero = false;
    for(int i =0 ; i < n ;i++) {
      cin >> a[i];
      if(a[i] < 0) {
        pos = false;
      }

      if(a[i] == 0) {
        zero = true;
      }
    }
    if(zero) {
      cout << 0 << endl;
      continue;
    }
    if(pos) {
      cout << 1 << endl;
      cout << 1 << " " << 0 << endl;
      continue;
    }
    int cn = 0;
    for(int i = 0 ; i < n; i++) {
      if(a[i] < 0) {
        cn++;
      }
    }
    if(cn % 2 != 0) {
      cout << 0 << endl;
      continue;
    } else{
      cout << 1 << endl;
      cout << 1 << " " << 0 << endl;
      continue;
    }
  }
  return 0;
}