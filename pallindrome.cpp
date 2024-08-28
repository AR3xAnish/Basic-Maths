//If pallindrome return true else return false
class Solution {
public:
    bool isPalindrome(int x) {
        int copy=x;
        long rev=0;
        while(copy>0){
            int ldigit=copy%10;
            copy=copy/10;
            rev=(rev*10)+ldigit;
        };
        if(rev==x)
            return true;
        else
            return false;
    }
};