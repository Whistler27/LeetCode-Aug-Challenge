class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string req;
        for(int i=0;i<n;i++){
            if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122){
                if(s[i]<=90) s[i]=s[i]+32;
            req+=s[i];
            }
            
            if(s[i]>=48 && s[i]<=57) req+=s[i];
            
        }
        bool f=1;
        int l=0,r=req.size()-1;
        while(l<=r){
            if(req[l++]!=req[r--]) f=0;
        }
        return f;
    }
};