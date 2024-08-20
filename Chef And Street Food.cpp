#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define cc(T,A) T N;cin >>N;T A[N];copy_n(istream_iterator<T>(cin),N,A);
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
	int T;
	cin >> T;
	while (T--){
	    int N,S,P,V,Profit, MaxProfit=0;
	    cin >> N;
	    while (N--){
	        cin >> S >>P >>V;
	        Profit = (P/(S+1)) * V;
	        MaxProfit = max(MaxProfit,Profit);
	    }
	    cout << MaxProfit <<"\n";
	}
	return 0;
}