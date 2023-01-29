class Solution {
public:
    int countAsterisks(string s) {
        int open=0;
        
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='|' && open==0) open++;
            else if(s[i]=='|'&& open>0) open--;
            else if(s[i]=='*'&& open==0 ) count++;
                

        }
        return count;
        
    }
};
