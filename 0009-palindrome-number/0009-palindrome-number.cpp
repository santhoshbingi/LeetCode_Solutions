class Solution {
public:
    bool isPalindrome(int x) {
        long reverse = 0;
        int dup = x;
       if(x < 0)
       {
        return false;
       }   
       else if(x == 0)
       {
        return true;
       } 
       else{
        while(x != 0)
        {
            int last_digit = x%10;
            reverse = (reverse * 10) + last_digit;
            x = x/10;
        }
        if(dup == reverse)
        {
            return true;
        }
        else
        {
            return false;
        }
       }
    }
};