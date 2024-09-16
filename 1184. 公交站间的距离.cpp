class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int mini  = INT_MAX;
        int n = distance.size();
        int temp = start;
        // forward
        
        int sum1 = 0;
        int sum2 = 0;
        while(start != destination){
            sum1 += distance[start];
            start = (start + 1) % n;
           

        }
        
        // backward
        start = temp;
        while(start != destination){
           
            
             start = (start - 1 + n ) % n;
              sum2 += distance[start];
            
        }
      
    
        return min(sum1 , sum2);
    }
};
