// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        
        priority_queue< long long, vector<long long > , greater<long long > > minn;
        
        for(auto i = 0; i<n; i++){
            
            minn.push(arr[i]);
            
        }
        
        long long sum = 0;
        
        while(minn.size() >= 2){
            
            long long  a = minn.top();
            minn.pop();
            
            long long  b = minn.top();
            minn.pop();
            
            sum += (a + b);
            
            minn.push(a+b);
            
        }
        
        return sum;
        
    }
};


// { Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends