class Solution {
public:
string reverse(string temp){
    int start=0,end=temp.length()-1;
    while(start<=end){
        swap(temp[start++],temp[end--]);
    }
    return temp;
}
    string finalString(string s) {
        int i=0;
        string ans="";
        while(i<s.length()){
            int j=i;
            string temp=ans;
            while(j<s.length() && s[j]!='i') temp+=s[j++];
            if(j<s.length() && s[j]=='i') ans=reverse(temp);
            i=j+1;
            if(j==s.length()) ans=temp;
        }
        return ans;
    }
};
