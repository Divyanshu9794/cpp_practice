#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
	    
	   
	  int alice[3];
	  int bob[3];
	  
	 for(int i=0;i<3;i++){
	     cin>>alice[i];
	 }
	     
	 for(int i=0;i<3;i++){
	     cin>>bob[i];
	 }    
	 
	 sort(alice,alice+3);
	 sort(bob,bob+3);
	 
	int  a1=alice[1]+alice[2];
	int  a2=bob[1]+bob[2];
	 
	 
	 if(a1>a2){
	     cout<<"Alice"<<endl;
	 }
	 else if(a2>a1){
	     cout<<"Bob"<<endl;
	      }
	 else{
	     cout<<"Tie"<<endl;
	 }
	 
	 
	}

}