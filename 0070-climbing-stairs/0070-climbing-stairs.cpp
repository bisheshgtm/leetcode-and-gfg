class Solution {
public:
    int climbStairs(int n) {
        int a=1,b=2,c;
        if (n==1){
            return a;
        }
        if (n==2){
            return b;
        }
        n-=2;
        while (n--){
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
};