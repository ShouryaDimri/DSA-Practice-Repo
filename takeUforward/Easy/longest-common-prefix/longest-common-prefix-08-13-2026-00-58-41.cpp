            int n = str.size();
            int minlength = min(first.size(), last.size());
            sort(str.begin(), str.end());
            string first = str[0];
            string last = str[str.size()-1];
            for(int i =0; i<minlength; i++){
                if(first[i] != last[i]){
                    return ans;
                }
                ans += first[i];
            }
            return ans;
        }