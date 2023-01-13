class Solution {
public:
    int countDifferentSubsequenceGCDs(vector<int>& a){
        int ans=0;
        int ma=INT_MIN;
        int n=a.size();
        int b[2000001]={0};     //array to check if number is present in given array (O(1))
        
		for(int i=0;i<n;i++){
            ma=max(ma, a[i]);      //find max element in array
            b[a[i]]=1;
        }
        
		for(int i=1;i<=ma;i++){    // loop for all possible candidates which can be gcd i.e from 1 to max_element
            int cgcd=0;     //current gcd
            
			for(int j=i;j<=ma;j+=i){     //loop for all multiples of i
                if(b[j]==1){     // if j is present in array
                    cgcd=__gcd(cgcd, j);
                }
               
			   if(cgcd==i){    //check if we can form subsequence with gcd
                    ans++;   //increment ans;
                    break;
                }
            }
        }
        return ans;
    }
};
//Fast io
static bool     _foo = ios::sync_with_stdio(false);
static ostream* _bar = cin.tie(NULL);
