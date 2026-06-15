class Solution {
public:
    string processStr(string s) {
        string result = "";

        stack<char>st;
        string temp = "";
        for(int i =0; i<s.length(); i++){
          
             if(s[i] == '*' && temp.length()>=1)  temp.pop_back();
            else if(s[i]  == '#') temp += temp;
            else if(s[i] == '%') reverse(temp.begin(),temp.end());
            else if(s[i]>='a' && s[i]<='z')temp += s[i];
        }


        return temp;
    }
};
