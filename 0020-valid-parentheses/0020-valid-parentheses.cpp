class Solution {
public:
    bool isValid(string s) {
        string req;
        if(s.length()<=1) return false;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                switch (s[i]){
                    case '(':
                        req.push_back(')');
                        break;
                    case '[':
                        req.push_back(']');
                        break;
                    case '{':
                        req.push_back('}');
                        break;
                }
                
                        
            }
            else if(s[i]==')'||s[i]==']'||s[i]=='}'){
                if(!req.empty()){
                    if(req.back()!=s[i]){
                    return false;
                    }
                    else{
                    req.pop_back();
                     }
                }
                else{
                    return false;
                }
            }
            
        }
        if(req.empty()) return true;
        else return false;
        
    }
};