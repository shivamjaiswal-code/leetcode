class Solution {
public:
    int reverse(int x) {
        
       
        long reverse=0;
        if(x<0){
            reverse=-(reverse);
        }
        while(x!=0)
        {
            int digit=x%10;
            reverse=reverse*10+digit;
            x/=10;

        }
        if(reverse<INT_MIN||reverse>INT_MAX){
            return 0;
        }

        return reverse;
    }
};
