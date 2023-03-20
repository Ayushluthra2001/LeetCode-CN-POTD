class Solution {
public:
    vector<double> convertTemperature(double celsius) {
       double x = celsius+273.15;
       double y = celsius*1.80+32.00;
       return {x,y};
    }
};
