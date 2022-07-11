class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
     
        int maxWords=-1;
        for(int i=0; i<sentences.size();i++) {
            auto sentence = sentences[i];
            int currentIndex=0;
            int words=0;
            while(sentence[currentIndex]!='\0') {
                if(sentence[currentIndex] == ' '){
                    words+=1;
                }
                
                currentIndex+=1;
            }
            words+=1;
            
            if(words>maxWords){
                maxWords = words;
            }
        }
        
        return maxWords;
    }
};