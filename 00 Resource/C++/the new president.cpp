#include<iostream>
using namespace std;

int main(){
    int T, c, v, i ,j;
    int first, second;
    int indx_1;
    cin >> T;

    while(T--){
        cin >> c >> v;
        int vote[v][c];
        int rnd1[2][c];
        //Vote preference input
        for(i=0; i<v; i++){
            for(j=0; j<c; j++){
                cin >> vote[i][j];
            }
        }
        //Candidate result round 1
        for(i=0; i<c; i++){
            rnd1[0][i] = vote[0][i];
            rnd1[1][i] = 0;
        }
        //Round 1 vote counting
        for(i=0; i<c; i++){
            for(j=0; j<v; j++){
                if(rnd1[0][i]==vote[j][0]){
                    rnd1[1][i] += 1;
                }
            }
        }
        //Round 1 Winner Selection (if any)
        first = rnd1[1][0];
        for(i=1; i<c; i++){
            if(rnd1[1][i]>first){
                first = rnd1[1][i];
                indx_1 = i;
            }
        }
        if(first>=(v/2+1)){
            cout << rnd1[0][indx_1] << " " << 1 <<"\n";
            continue;
        }

        //Enter Round 2 (if no winner in Round 1)
        rnd1[1][indx_1] = 0;
        int second=rnd1[1][0];
        for(i=1; i<c; i++){
            if(rnd1[1][i]>second){
                second = rnd1[1][i];
            }
        }
        //Round 2 winner selection
        int vote1=0, vote2=0;
        for(i=0; i<v; i++){
            for(j=0; j<c; j++){
                if(vote[i][j]==first){
                    vote1++;
                    break;
                }
                if(vote[i][j]==second){
                    vote2++;
                    break;
                }
            }
        }
        //Result announcement
        if(vote1>vote2) cout << first << " " << 2 << "\n";
        else cout << second << " " << 2 << "\n";
    }
    return 0;
}
