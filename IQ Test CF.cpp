#include<bits/stdc++.h>
using namespace std;

void IQ_test()
{
	int n,countEven=0,CountOdd=0,index1=0,index2=0;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
		countEven++;
		index1=i+1;
		}
		else
		{
		CountOdd++;
		index2=i+1;
		}
		if(countEven>1 &&CountOdd==1)
		{
			cout<<index2;
			return;
		}
		if(CountOdd>1 &&countEven==1)
		{
			cout<<index1;
			return;
		}
	}
}
int main()
{
	IQ_test();
}