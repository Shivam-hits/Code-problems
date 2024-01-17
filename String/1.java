// Longest Palindromic Substring
// Given a string s, return the longest palindromic substring in s.

// Example 1:
// Input: s = "babad"
// Output: "bab"
// Explanation: "aba" is also a valid answer.

// Example 2:
// Input: s = "cbbd"
// Output: "bb"

class Solution{
    int ans;
    public String longestPalindrome(String s){
        String arr;
        if(s.length()==1){
            return s;
        }
        for(int i=0;i<s.length();i++)
        {
            for(int j=i+1;j<s.length();j++){
                arr=s.substring(i,j+1);
                if(palin(arr))
                {
                    return arr;
                }
            }
        }
        return s.substring(0,1);
    }
    boolean palin(String str)
    { 
        for(int i=0,j=str.length()-1;i<str.length();i++,j--)
        {
            if((str.charAt(i)!=str.charAt(j)) && i<j){
                return false;
            }
        }
        return true;
    }
}
