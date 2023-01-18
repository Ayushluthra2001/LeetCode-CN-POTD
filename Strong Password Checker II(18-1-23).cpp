class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        if(password.length()<8)
            return false;
        
        bool low=false;
        bool up=false;
        bool  digit=false;
        bool  special=false;
        for(int i=0;i<password.length();i++)
        {
            if( i<password.length() && password[i]==password[i+1])
                return false;
            else if(password[i]>='a' && password[i]<='z')
            {
                    low=true;
            }
            else if(password[i]>='A'&& password[i]<='Z')
                up=true;
            else if(password[i]=='!' || password[i]=='@'|| password[i]=='#'|| password[i]=='$'|| password[i]=='%'|| password[i]=='^'|| password[i]=='&'|| password[i]=='*'|| password[i]=='('|| password[i]==')'|| password[i]=='-'|| password[i]=='+'){
                special=true;
            }
            else 
                digit=true;
        }
        
        if(low && up && digit && special)
            return true;
        else 
            return false;
        
    }
};
