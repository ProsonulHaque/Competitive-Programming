#include<bits/stdc++.h>
using namespace std;

int main(){
    int T, W, i, j, k;
    int eng, arb;
    string word;

    cin >> T;

    while(T--){
        cin >> W;
        string arabic[W], english[W];
        j = 0, k= 0, eng = -1, arb = -1;

/*--------------------------Take input---------------------------*/
        for(i=0; i < W; i++){
            cin >> word;
            //English Word
            if (word[0]!='#'){
                english[j] = word;
                eng = i;
                arb = k;
                j++;
            }
            //Arabic Word
            else{
                arabic[k] = word;
                k++;
            }
        }
/*----------------Print Output for different cases---------------*/

        //All Arabic
        if(eng==-1){
            for(i=0; i < W; i++){
                cout << arabic[i] << " ";
            }
        }
        //All English
        else if(k==0){
            for(i=0; i < W; i++){
                cout << english[i] << " ";
            }
        }
        //English first
        else if(eng==0){
            for(i=0; i < k; i++){
                cout << arabic[i] << " ";
            }
            cout << english[0] << " ";
        }
        //English last
        else if(eng==W-1){
            cout << english[0] << " ";
            for(i=0; i < k; i++){
                cout << arabic[i] << " ";
            }
        }
        //English in the middle
        else{
            for(i=arb; i < k; i++){
                cout << arabic[i] << " ";
            }
            cout << english[0] << " ";
            for(i=0; i < arb; i++){
                cout << arabic[i] << " ";
            }
        }

        cout << "\n";

    }

    return 0;
}
