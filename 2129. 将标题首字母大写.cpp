class Solution {
public:
    string capitalizeTitle(string title) {

        int i=0;
        string ans="";
        while(i<title.length()){
            int j=i;
            string temp="";
            while(j< title.length() && title[j]!=' '){
                temp+=title[j];
                j++;

            }
            if(temp.length()>=3){
                temp[0]=toupper(temp[0]);
                int k=1;
                while(k<temp.length()){
                    temp[k]=tolower(temp[k]);
                    k++;
                }
                
            }else{
                int k=0;
                while(k<temp.length()){
                    temp[k]=tolower(temp[k]);
                    k++;
                }

            }
            if(ans.length()>=1)
             ans+=' ';
             ans+=temp;
             i=j+1;
        }
        return ans;
    }
};
