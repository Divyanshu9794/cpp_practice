#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    double t1,t2,t3;
	    double sum = 0;
	    for(int i=0;i<n;i++){
	        cin >> t1 >> t2 >> t3;
            double act_price = t1;
            double disc = t3;
            double disc_val = (act_price*disc)/100;
            double incre_price = act_price+disc_val;
            double offer = (incre_price*disc)/100;
            double sel_price = incre_price - offer;
            double loss = act_price-sel_price;
            double quantity = t2;
            sum += loss*quantity;
	    }
	    cout <<fixed<< setprecision(9)<< sum << "\n";
	    
	    
	}
	return 0;
}