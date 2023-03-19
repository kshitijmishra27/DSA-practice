class Solution 
{
public:
    int commonFactors(int a, int b) 
    {
        int ans=0;
        // find the max(a,b) 
        //iterating over the input
        for(int i = 1 ; i <= max(a,b);i++){
            //Check condition if a modulus i equal to 0 and b modulus i equal to 0 ans++
            if(a%i==0 && b%i==0){
                ans++;
            }
        }
        // returning the ans 
        return ans;
    }
};