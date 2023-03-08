class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        // cout<<blocks.length()<<endl;
        int count_b=0,count_w=0;
        for(int i=0;i<blocks.length() && i<k;i++){
            if(blocks[i]=='W') count_w++;
            else count_b++;
        }
        if(count_w==0) return 0;
        if(k==blocks.length()) return count_w;
        int mini=count_w;
        // cout<<count_w<<" "<<count_b<<endl;
        for(int i=k;i<blocks.length();i++){
            if(blocks[i-k]=='W') count_w--;
            else count_b--;
            if(blocks[i]=='W') count_w++;
            else count_b++;
            mini=min(mini,count_w);
        }
        return mini;
    }
};
// "BBBBBWWBBWBWBWWWBWBWBBBBWBBBBWBWBWBWBWWBWWBWBWWWWBBWWWWBWWWWBWBBWBBWBBWWW"
