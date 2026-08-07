// class Solution {
// public:
//     bool isPowerOfFour(int n) {
//         if(n<=0){
//             return false;
//         }
//         while(n%4==0){
//             n/=4;
//         }
//         if(n==1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)return false;
        int zero=0;
        int one=0;
        while(n!=0){
            if((n&1) ==0)zero++;
            else one++;
            n=n>>1;
        }
        return (one ==1)&&(zero%2==0);
    }
};