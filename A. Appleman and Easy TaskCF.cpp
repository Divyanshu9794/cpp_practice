#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    char a[100][101];
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    
    for(int i = 0;i<n;i++) {
		for(int j = 0;j<n;j++) {
				int k = 0;
				if(j + 1 < n) {
					if(a[i][j + 1] == 'o') {
						k++;
					}
				}
				if(i + 1 < n) {
					if(a[i + 1][j] == 'o') {
						k++;
					}
				}
				if(i - 1 >= 0) {
					if(a[i - 1][j] == 'o') {
						k++;
					}
				}
				if(j - 1 >= 0) {
					if(a[i][j - 1] == 'o') {
						k++;
					}
				}	
				if(k % 2 != 0) {
					cout<<"NO"<<endl;
					return ;
				}
				
		}								
	}
	cout<<"YES"<<endl;
}
int main(){
    solve();
}