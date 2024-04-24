class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
      if(mainTank<5)
       return mainTank*10;
       int sum=0;
       while(mainTank!=0){
        if(mainTank>=5){
            sum+=50;
            mainTank-=5;
            if(additionalTank>=1){
               
                additionalTank--;
                mainTank++;
            }
        }else{
            sum+=mainTank*10;
            mainTank=0;
        }
        

       }
       return sum;
    }
};
