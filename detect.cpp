class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        if(word[n-1]>=65 && word[n-1]<=90){
            for(int i=0;i<n-1;i++){
                if(word[i]>=91) return false;
                
            }
            return true;
        }
        else{
            for(int i=1;i<n;i++){
                if(word[i]>=65 && word[i]<=90) return false;
                
            }
            return true;
            
        }
        
    }
};