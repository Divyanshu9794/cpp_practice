#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long t, x, y;
	cin >> t;
	while (t--) {
	    cin >> x >> y;
	    cout << ((x+2*y)%2 || (y%2 && x<2)? "NO" : "YES") << '\n';
	}
	return 0;
}