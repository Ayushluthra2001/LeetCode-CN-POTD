class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int>ans(num_people,0);
        int i=0;
        int j=1;
        int k=1;
        while(candies>0){
                    int candy=j;
                    if(candy>candies) candy=candies;
                    ans[i]+=candy;
                    candies-=candy;
                    j++;
                    i++;
                
                if(i==num_people) {
                    i=0;
                   
                    k++;
                }
            
           

        }
        return ans;
    }
};
