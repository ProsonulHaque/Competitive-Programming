#include<iostream>
using namespace std;

int main(){
    int T, i, j, k, n, m;
    int cnt, flag, idx, uniq;

    cin >> T;

    while(T--){
        cin >> n >> m;
        int hall[n+2][m+2];
        int record[n*m];
        idx = 0;
        //Fill in the records with zeros
        for(i=0; i<n*m; i++){
            record[i] = 0;
        }
        //Make the 2 extra rows zeros
        for(i=1; i<=m; i++){
            hall[0][i] = 0;
            hall[n+1][i] = 0;
        }
        //Make the 2 extra columns zeros
        for(i=0; i<=n+1; i++){
            hall[i][0] = 0;
            hall[i][m+1] = 0;
        }
        //Take actual input
        for(i=1; i<=n; i++){
            for(j=1; j<=m; j++){
                cin >> hall[i][j];
            }
        }
        //Adjacency calculation
        for(i=1; i<=n; i++){
            for(j=1; j<=m; j++){
                if(hall[i][j]==-1) continue;
                cnt = 0;
                if(hall[i][j]==hall[i-1][j-1]) cnt++;
                if(hall[i][j]==hall[i-1][j]) cnt++;
                if(hall[i][j]==hall[i-1][j+1]) cnt++;
                if(hall[i][j]==hall[i][j-1]) cnt++;
                if(hall[i][j]==hall[i][j+1]) cnt++;
                if(hall[i][j]==hall[i+1][j-1]) cnt++;
                if(hall[i][j]==hall[i+1][j]) cnt++;
                if(hall[i][j]==hall[i+1][j+1]) cnt++;
                //Check if there are 2 or more teams around hall[i][j]
                //and hall[i][j] was previously included in the record[]
                if(cnt>=1) {
                    flag = 1;
                    for(k=0; k<n*m; k++){
                        if(hall[i][j]==record[k]){
                            flag = 0;
                            break;
                        }
                    }
                    if(flag==1){
                        record[idx] = hall[i][j];
                        idx++;
                    }
                }
            }
        }
        //No of different universities with two or more adjacent teams
        uniq = 0;
        for(i=0; i<n*m; i++){
            if(record[i] == 0) break;
            uniq++;
        }
    //Output
    cout << uniq << "\n";
    }

    return 0;
}
