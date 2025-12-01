class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int check =0;
        int ans=-1;
        bool found=0;
        if(needle.length()>haystack.length()) return -1;
      
        for(int i=0;i<haystack.length();i++){
            if(haystack.at(i)!=needle.at(check)){
                i-=check;
                check=0;
                ans=-1;
            }      
            else{
                if(check==needle.length()-1){
                    ans=i-check;
                    return ans;
                }
                else{
                    check++;
                }
            }
        }
        return ans;
    }
};