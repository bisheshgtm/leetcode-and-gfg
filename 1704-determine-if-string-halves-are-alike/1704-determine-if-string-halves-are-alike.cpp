class Solution {
public:
    bool isvowel(char a){
        if (a=='a' || a=='e' ||a=='i' ||a=='o' ||a=='u' || a=='A' ||a=='E' ||a=='I' ||a=='O' ||a=='U'  )
            return true;
        else return false;
    }
    bool halvesAreAlike(string s) {
        int count1=0;
        int count2=0;
        for (int i=0;i<s.size();i++){
            if (i<s.size()/2){
                if(isvowel(s[i])){
                    count1++;
                }
            }
            else {
                if(isvowel(s[i])){
                    count2++;
                }
            }
        }
        if (count1==count2){
            return true;
        }
        else return false;
    }
};