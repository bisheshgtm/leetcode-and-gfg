class Solution {
public:
    int reverse(int x) {
        string a=to_string(x);
        string b="";
        if (a[0]=='-'){
            b+='-';
            for (int i = a.length()-1; i >0; i--){
                b+=a[i];
            }
        }
        else{
            for (int i = a.length()-1; i >=0; i--){
                b+=a[i];
            }
        }
        long long int c=stoll(b);
        if (c>INT_MAX || c<INT_MIN){
            return 0;
        }
        return c;
    }
};