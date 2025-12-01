class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> map;
       
        for(int i=0;i<t.length();i++){
                map[t.at(i)]++;
                map[s.at(i)]--;
            }
        for(auto p:map){
            if(p.second!=0) return false;
        }
        return true;
        
    }
};