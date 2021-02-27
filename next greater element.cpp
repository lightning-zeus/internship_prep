// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return Next larger elements


vector<long long> nextLargerElement(vector<long long> arr, int n){
    // Your code here
    vector<long long> res;
    stack<long long> aux;
    for(int i=n-1;i>=0;i--){
        if(i==n-1){
         aux.push(arr[i]);
         res.push_back(-1);
        }
         else{
             if(arr[i]<=aux.top()){
                 res.push_back(aux.top());
                 aux.push(arr[i]);
             }else{
                 while(aux.top()<arr[i]){
                     aux.pop();
                     if(aux.empty())
                      break;
                 }if(!aux.empty()){
                     res.push_back(aux.top());
                 }else
                    res.push_back(-1);
                    
                aux.push(arr[i]);
                     
                 
             }
         }
    }reverse(res.begin(),res.end());
    return res;
    
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        
        vector <long long> res = nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
  // } Driver Code Ends