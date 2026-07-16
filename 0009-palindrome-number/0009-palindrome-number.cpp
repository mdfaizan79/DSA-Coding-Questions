class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){
            return false;

        }

        int original = x;
        long long temp =0;

        while(x>0){
            int digit = x%10;
            temp = temp *10 + digit;
            x = x/10;
        }
        return original == temp;

    }
};