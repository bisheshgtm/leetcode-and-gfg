class Solution {
public:
    bool isoperator(string c){
        if (c=="+"||c=="-"||c=="*"||c=="/"){
            return true;
        }
        return false;
    }
    long long perform(string a,long long x,long long y){
        if (a=="+"){
            return x+y;
        }
        else if (a=="-"){
            return x-y;
        }
        else if (a=="*"){
            return x*y;
        }
        else if (a=="/"){
            return x/y;
        }
        return 0;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for (int i=0;i<tokens.size();i++){
            if (isoperator(tokens[i])){
                long long x=s.top();
                s.pop();
                long long y=s.top();
                s.pop();
                s.push(perform(tokens[i],y,x));
            }
            else{
                s.push(stoi(tokens[i]));
            }
        }
        return s.top();
    }
};