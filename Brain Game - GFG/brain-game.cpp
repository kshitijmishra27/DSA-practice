// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
// Simple C++ Tukka solution ;)

public:
int pF(int n)
{
    if(n == 1) return 0;
    int c=2,ans = 0;
    while(n>1)
    {
        if(n%c==0){
        ans++;
        n/=c;
        }
        else c++;
    }
    return ans-1;
}
bool brainGame(vector<int>nums) 
{
    int sum = 0,ex = 0,c = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        ex = pF(nums[i]);
        c ^= ex;
        // sum += (ex%2);
        // if(ex >= 2 )c++;
            
    }
    if(c!= 0) return 1;
    return 0;
    // if(c%2)return 1;
    // if(sum%2) return 1;
    // return 0;
}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		bool ans = ob.brainGame(nums);
		if(ans)
			cout << "A\n";
		else cout << "B\n";
	}  
	return 0;
}  // } Driver Code Ends