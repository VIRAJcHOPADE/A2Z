//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int minEle;
    stack<int> s;
    int minEl=-1;
    public:
    
       /*returns min element from stack*/
       int getMin(){
          if(s.size()==0) return -1;
           return minEl;
           //Write your code here
       }
       
       /*returns poped element from stack*/
       int pop(){
          if(s.size()>0){
              int del;
           if(s.top()<=minEl){
               del=minEl;
               minEl=2*minEl-s.top();
           }
           else{
               del=s.top();
           }
           s.pop();
           return del;
          }
          return -1;
           //Write your code here
       }
       
       /*push element x into the stack*/
       void push(int x){
           //was getting error here ,because i missed this "if" case that if stack is empty
           //then the first el is the minEl 
           if(s.size()==0){
               s.push(x);
               minEl=x;
           }
          else if(x<minEl){
               s.push((2*x)-minEl);
               minEl=x;
           }
           else s.push(x);
           
           //Write your code here
       }
};

//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}

// } Driver Code Ends