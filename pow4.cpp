class Solution {
public:
    bool isPowerOfFour(int num) {
        int n=num;
        if(n==0) return 0;
        while(n%4==0) n=n/4;
        
        if(n==1) return 1;
        return 0;
        
    }
};