class Solution {
public:
    int maxWidthRamp(vector<int>& a) {
        int maxi = 0;
        int n = a.size();
       

        stack<int>s;
        for(int i=0;i<n;i++)
        {
            if(s.empty() || a[i]<a[s.top()])
                s.push(i);
        }
        
        int ans = 0;
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && a[s.top()]<=a[i])
            {
                ans = max(ans, i-s.top());
                s.pop();
            }
        }
        
        return ans;
    }
};
