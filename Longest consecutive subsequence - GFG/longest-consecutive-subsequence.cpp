//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      int cnt = 0;
      int maxi = 0;
      
    set<int> st;
    
    for(int i=0; i<N; i++) st.insert(arr[i]);
    vector<int> ans(st.begin(), st.end());
    
      
      for(int i=1; i<ans.size(); i++){
          
          if(ans[i] == ans[i-1] + 1){
              cnt++;
              maxi = max(maxi, cnt);
          }
          else{
              cnt = 0;
          }
          
      }
      
      return maxi+1;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends