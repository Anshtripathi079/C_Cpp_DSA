class Solution {
public:
    bool isPalindrome(int x) {
       long int sum=0,rem,a=x;
        while(x>0){
         rem=x%10;
   sum = (sum*10)+rem;
   x = x/10;
        }
        if(a==sum){
          return 1;
        }
        else{
            return 0;
            }
    }
};