class Solution {
public:
    
    double binaryexp( double x, long long n , double ans){
        
        if(n==0) return 1; // any number raised to the power 0 will be 1
        
        double unity = binaryexp(x, n/2, ans);
        
        if( (n % 2) == 0) return unity * unity ;
        
        else return x * unity * unity;
        
    }
    
    double myPow(double x, int n) {
        
        long long nn = n;
        if(nn < 0) nn = (nn) * (-1);
        
        double ans = 1.0;
        
       ans = binaryexp(x , nn, ans);
        
        if(n < 0) return (double)(1.0) / (double)(ans);
        
        else return ans;
        
    }
};