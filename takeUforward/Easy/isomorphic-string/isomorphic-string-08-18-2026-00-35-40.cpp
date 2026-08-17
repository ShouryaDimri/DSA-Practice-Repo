            if(m1[s[i]]!= 0 && m1[s[i]] != t[i] +1){
                return false;
            }
        for(int i=0; i<s.length(); i++){
        int m1[256] = {0};
        int m2[256] = {0};
            if(m2[t[i]] != 0 && m2[t[i]] != s[i]+1){
                return false;
            }
            m1[s[i]] = t[i]+1;
            m2[t[i]] = s[i] +1;
            
        }
        return true;