#include<iostream>
using namespace std;

class Solution {
public:
    string reorderSpaces(string text) {
        int spc=0, i=0, word=0, j=0;
        string line="";

        //Space Count
        for(i=0; i<text.size(); i++){
            if(text[i]==' '){
                spc += 1;
            }
        }

        if(spc==0) return text;

        //Word Count
        i=0;
        while(i<text.size()){
            if(text[i]!=' '){
                word += 1;
                while(text[i]!=' ' && i<text.size()){
                    i++;
                }
            }
            i++;
        }

        int spw = 0;

        if(word>1){
            spw = spc/(word-1);
        }

        int lftovr = spc-spw*(word-1);

        //Rearrangement
        i=0;
        while(i<text.size()){
            if(text[i]!=' '){
                word -= 1;
                while(text[i]!=' ' && i<text.size()){
                    line += text[i];
                    i++;
                }
                if(word >0){
                    int cnt = spw;
                    while(cnt--){
                        line += ' ';
                    }
                }
            }
            i++;
         }


        while(lftovr--){
            line += ' ';
        }

        return line;
    }
};

int main(){
    Solution obj;

    cout << obj.reorderSpaces("  this   is  a sentence ") << "\n";

    return 0;
}
