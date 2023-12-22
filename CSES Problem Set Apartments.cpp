#include<bits/stdc++.h>
using namespace std;
int main(){
    int applicant, free_apartment,maxallow,ans=0;
    cin>>applicant>>free_apartment>>maxallow;
    int desired[applicant],apartmentsize[free_apartment];
    for(int i=0;i<applicant;i++){
        cin>>desired[i];
    }
    for(int i=0;i<free_apartment;i++){
        cin>>apartmentsize[i];
    }
    sort(desired, desired + applicant);
	sort(apartmentsize, apartmentsize + free_apartment);
	int i = 0, j = 0;
	while (i < applicant && j < free_apartment) {
		
		if (abs(desired[i] - apartmentsize[j]) <= maxallow) {
			++i;
			++j;
			++ans;
		} else {
			if (desired[i] - apartmentsize[j] > maxallow) {
				++j;
			}
			else {
				++i;
			}
		}
	}
	cout << ans << endl;

}