        if(end == -1)
            return "";
        
        // Remove leading zeros
        int start = 0;
        while(start < end && s[start] == '0') {
            start++;
        }
        
        return s.substr(start, end - start + 1);
    }
};