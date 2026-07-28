class Solution {
public:
    double myPow(double x, double n) {
        if (n<0)
        {
        x=1/x;
        n=-n;
        
        }
         double ans=pow(x,n);
        return ans;

        
    }
};