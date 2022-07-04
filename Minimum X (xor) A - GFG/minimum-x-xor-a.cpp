// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    // Simple and Easy to understand
 // Count No of set bits in a & b
 // Three cases - No of set bits in a=Number of set bits in b
 // Number(set bits a)> Number(set bits b) then delete set bits from right end of a (difference times)
 // Else  delete set bits from right end of a (difference times)
 
 
 //Go through the code...Very easy
 
 int minVal(int a, int b) {
        // code here
        int bit_cnt_b=__builtin_popcount(b);
        int bit_cnt_a=__builtin_popcount(a);
        
        if(bit_cnt_a==bit_cnt_b)return a;
        
        else if(bit_cnt_a>bit_cnt_b)
        {
           // cout<<"Entered Case 2"<<endl;
            int diff=bit_cnt_a-bit_cnt_b;
           // cout<<diff<<endl;
            int i=0;
            while(diff)
            {
                int bit=a & (1<<i);
             //   cout<<bit<<endl;
                if(bit>0)
                {
                    a=a-bit;
                    diff--;
                }
                i++;
            }
            return a; 
        }
        
        else if(bit_cnt_a<bit_cnt_b){
            int diff=bit_cnt_b-bit_cnt_a;
          //  cout<<diff<<endl;
            int i=0;
          
            while(diff)
            {
                int bit=a& (1<<i);
               
                if(bit==0)
                {
                    a=a+(1<<i);
                    diff--;
                }
                i++;
            }
            return a;
        }
        return -1;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}  // } Driver Code Ends