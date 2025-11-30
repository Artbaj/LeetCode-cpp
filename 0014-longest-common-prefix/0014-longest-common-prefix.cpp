class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int firstSize = strs[0].length();
        for(int j=0;j<firstSize;j++){
             for(int i=0;i<strs.size()-1;i++){
                if((strs[i+1].length()<=j)){
                    return ans;
                }
                if(strs[i].at(j)!=strs[i+1].at(j)) {
                    return ans;
                }
                

            }
            ans.push_back(strs[0].at(j));
        }
       
        return ans;
    }
};