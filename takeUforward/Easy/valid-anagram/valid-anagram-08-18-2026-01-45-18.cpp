                count[c- 'a']++;
            }
            for(char c: t){
                count[c -'a']--;
            }
            for(int i : count ){
                if(i != 0){
                    return false;
                }
            }
        }
            return true;
};