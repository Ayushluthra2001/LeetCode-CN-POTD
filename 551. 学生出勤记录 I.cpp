class Solution {
public:
    bool checkRecord(string s) {
        int i = 0;
        int totalAbsent = 0;
        while(i < s.length()){
            int j = i;
            int count = 0;
            if(s[i]=='A') totalAbsent += 1;
            while(j < s.length() && s[j]=='L') count++,j++;
            if(count >= 3) return false;
            if(s[i]=='L')
            i = j;
            else i++;

        } 

        return totalAbsent<=1 ? true : false;

        
    }
};
