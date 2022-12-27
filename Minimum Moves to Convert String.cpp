class Solution {
public:
    int minimumMoves(string s) {
        int start=0,end=s.length()-1;
        int count=0;
        int j;
        
        while(start<=end){
            j=start;
            int c=1;
            bool find =false;
            while(j<=end && s[j]=='O') j++;
            while(j<=end && c<=3 ) {
                c++;
                if(s[j]=='X') {
                    find=true;
                }
                j++;
            }
            if(find)
            count++;
            start=j;
            

            
        }

        return count;
    }
};


