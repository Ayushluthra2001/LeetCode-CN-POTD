class Solution {
public:
    string getSmallestString(string s, int k) {
        if(k == 0) return s;
        int curr =0;
        for(int i=0;i<s.length();i++){
            int right = ('z'-s[i])+1;
            int left = s[i]-'a';
            int mini = min(left,right);
            if(k>=mini){
                s[i]='a';
                k-=mini;
            }else{
                char ch =s[i]-k;
                s[i]=ch;
                k=0;
            }
        }
        return s;
    }
};
