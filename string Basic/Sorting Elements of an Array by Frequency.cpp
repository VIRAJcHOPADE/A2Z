#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>&a,pair<int,int>&b){
    if(a.first==b.first)return a.second<b.second;
    
    else return a.first>b.first;
}


int main()
 {
	  int t;
	  cin>>t;
	  while(t--){
	      int n;cin>>n;
	      vector<int>v1(n);
	      
	      map<int,int>s;
	      for(int i=0;i<n;i++){
	          cin>>v1[i];
	          s[v1[i]]++;
	      }
	      
	      
	       vector<pair<int,int>>v;
	       for(auto it:s){
	           v.push_back({it.second,it.first});
	       }
	       
	       sort(v.begin(),v.end(),cmp);
	     
	     
	       
	       v1.clear();
	       for(auto it:v){
	              for(int i=0;i<it.first;i++){
	                  v1.push_back(it.second);
	              }
	       }

	       for(int i=0;i<v1.size();i++){
	           cout<<v1[i]<<" ";
	       }
	       cout<<endl;
	  
	           
	        
	  }
	
	
	return 0;
}