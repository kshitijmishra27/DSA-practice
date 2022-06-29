#include<bits/stdc++.h>
using namespace std;
int main()
 {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	   int n, k;
	   cin >> n >> k;
	   
	   int arr[n];
	   
	   for(int i=0; i<n; i++){
	       cin >> arr[i];
	   }
	   
	   priority_queue<int, vector<int> , greater<int>> minn;
	   
	   for(int i=0; i<n; i++){
	       
	       minn.push(arr[i]);
	       
	       if(minn.size() > k){
	           
	    cout << minn.top() << " ";
	    minn.pop();
	           
	       }
	       
	   }
	   
	   while(!minn.empty()){
	       
            cout << minn.top() << " ";
            minn.pop();
	   }
	   
	  cout << "\n"; 
	    
	}
	
	return 0;
}