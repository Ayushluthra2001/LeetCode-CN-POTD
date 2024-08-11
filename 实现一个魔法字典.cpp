class MagicDictionary {
public:
unordered_map<string,int>mapping;
    MagicDictionary() {
            
    }
    
    void buildDict(vector<string> dictionary) {
        for(auto i : dictionary) mapping[i]++;
    }
    
    bool search(string searchWord) {
        
       
    


        // check for all the possibilites 
        // iterate over the string and put all 26 char on currposition and check if it is present or not 
        // if not just put the original curr back check for rest of string
        for(int j=0;j<searchWord.length();j++){
            char currChar = searchWord[j];

            for(int i=0;i<26;i++){
                char newChar =  (char)('a'+i);

                searchWord[j] =newChar;

                if(currChar != newChar && mapping.find(searchWord) != mapping.end()) return true;
            }
            searchWord[j] = currChar;

        }
        return false;
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */
