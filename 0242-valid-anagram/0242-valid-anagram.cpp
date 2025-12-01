class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> map;
        if(s.length()!=t.length()) return false;
        else{
           for(auto& c:t){
                map[c]++;
           }
        }
        for(auto& c:s){
            if((map.find(c)!=map.end())&&map[c]!=0){
                map[c]--;
            }
            else return false;
        }
        return true;
        
    }
};