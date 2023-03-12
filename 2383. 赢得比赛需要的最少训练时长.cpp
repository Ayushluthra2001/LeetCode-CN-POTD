class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        
        int th=0;
        for(int i=0;i<energy.size();i++){
            if(initialEnergy>energy[i]){
                if(initialExperience >experience[i]){
                     initialEnergy-=energy[i];
                     initialExperience+=experience[i];
                }else{
                    th+=abs(experience[i]-initialExperience)+1;
                     initialEnergy-=energy[i];
                     initialExperience+=abs(experience[i]-initialExperience)+1;
                    initialExperience+=experience[i];
                }
               
            }else{
                if(initialExperience>experience[i]){
                    th+=abs(energy[i]-initialEnergy)+1;
                    initialEnergy=1;
                    initialExperience+=experience[i];
                }else{
                    th+=abs(energy[i]-initialEnergy)+1;
                    initialEnergy=1;
                    th+=abs(experience[i]-initialExperience)+1;
                    initialExperience+=abs(experience[i]-initialExperience)+1;
                    initialExperience+=experience[i];
                }
               
                
            }
        }
        return th;
    }
};
