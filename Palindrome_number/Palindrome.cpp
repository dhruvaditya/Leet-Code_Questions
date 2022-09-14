// https://leetcode.com/problems/palindrome-number/
class Solution {
public:
    bool isPalindrome(int x) {
       
        int p=x;
        if(x<0){
            return false;
        }
        long int y=0;
        while(x!=0){
            int rem=x%10;
            y=y*10+rem;
            x=x/10;
        }
        if(y==p){
            return true;
        }
        else
            return false;
    }
};
