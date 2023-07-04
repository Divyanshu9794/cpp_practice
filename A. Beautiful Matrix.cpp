#include <iostream>
#include <cmath>
using namespace std;
int a[6][6];     
int main() {
	int x, y;
	for (int i = 1; i <= 5; i++)
		for (int j = 1; j <= 5; j++) {
			cin >> a[i][j];
			if (a[i][j]) {
				x = i;
				y = j;
			}
		}
	cout << abs(3 - x) + abs(3 - y);
	return 0;
}