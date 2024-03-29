class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i=digits.size()-1;
        int one=1;
        
        while(one){
            if(i<digits.size()){
                if(digits[i]==9)
                    digits[i]=0;
                else{
                digits[i]+=1;
                one=0;
                }
            }
            else{
                digits.insert(digits.begin(),1);
                one=0;
            }
            i--;        
        }

        return digits;
    }
};