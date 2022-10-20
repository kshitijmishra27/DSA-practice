class Solution {
public:
    string intToRoman(int num) {
        
        unordered_map<int,string> mpp;
        
        mpp[1] = "I";  mpp[3] = "III"; mpp[4] = "IV"; mpp[5] = "V"; mpp[6] = "VI";
        mpp[2] = "II";  mpp[7] = "VII"; mpp[8] = "VIII"; mpp[9] = "IX";
          
        string ans ;
                            
        while(num >= 1000){
            num-= 1000;
            ans+="M";
        }
                            
            if(num == 0){
                return ans;
            }
        
        if(num>=900){
            num -= 900;
            ans += "CM";
        }
        
          if(num == 0){
                return ans;
            }
                            
        while(num >= 500){
            num -= 500;
            ans+= "D";
        }
                            
              if(num == 0){
                return ans;
            }
        
        while(num >= 400){
            num -= 400;
            ans += "CD";
        }
        
          if(num == 0){
                return ans;
            }
                            
        while( num >= 100){
            num -= 100;
            ans+= "C";
        }
                            
           if(num == 0){
                return ans;
            }
        
        while( num >= 90){
            num -= 90;
            ans += "XC";
        }
        
          if(num == 0){
                return ans;
            }
                            
        while(num >= 50){
            num -= 50;
            ans += "L";
        }
                            
              if(num == 0){
                return ans;
            }
        
        while(num >= 40){
            num -= 40;
            ans += "XL";
        }
        
          if(num == 0){
                return ans;
            }
                            
        while( num >= 10){
            num -= 10;
            ans += "X";
        }

  if(num == 0){
                return ans;
            }
                            
        ans += mpp[num];
                            
                            return ans;
        
    }
};