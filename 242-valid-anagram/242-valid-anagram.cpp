class Solution {
public:
    bool isAnagram(string s, string t) {
        
        map<char,int> m1,m2;
        
    for(int i=0; i<s.size(); i++){    
        m1[s[i]]++;
    }
      
    for(int i=0; i<t.size(); i++){    
        m2[t[i]]++;
    }
      

       if(m1.size() == m2.size()){
           
           
        if(m1 == m2){
            return true;
        }
           else{
               return false;
           }
           
       }
        else{
            return false;
        }
        
    }
};