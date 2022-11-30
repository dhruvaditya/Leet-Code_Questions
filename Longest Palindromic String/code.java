class Solution {
    public String longestPalindrome(String s) {
        int n = s.length();
       int index  = 0, palindromeLength = 1;
       for (int i = 1; i < n; i++) {
           int left = i - 1, right = i;
           while(left >= 0 && right < n && s.charAt(left) == s.charAt(right)) {
               if(right - left + 1 > palindromeLength) {
                   index = left;
                   palindromeLength = right - left + 1;
               }
               left--;
               right++;
           }
           left = i - 1;
           right = i + 1;
           while(left >= 0 && right < n && s.charAt(left) == s.charAt(right)) {
               if(right - left + 1 > palindromeLength) {
                   index = left;
                   palindromeLength = right - left + 1;
               }
               left--;
               right++;
           }
           
       }
       String ans = "";
       for (int i = index; i < index + palindromeLength; i++) {
           ans += s.charAt(i);
       }
       return ans;
    }
}
