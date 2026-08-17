class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length()){
            return false;
        }
        int m1[256] = {0};
        int m2[256] = {0};
        for(int i =0; i<s.length(); i++){
            m1[s[i]]++;
            m2[t[i]]++;
        }
        for(int i=0; i<256; i++){
            if(m1[i] != m2[i]){
                return false;
            }
        }
        return true;
    }
};