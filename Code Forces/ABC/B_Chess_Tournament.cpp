/*
    ***************************
    *    Author: rafa45       *
    *    Date: 14 Sep 2021    *
    ***************************
*/


#include<bits/stdc++.h>
using namespace std;


const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
const int N=5000;


#define endl              '\n'
#define PRIME             M
#define mod               M
#define ll                long long
#define all(v)            (v).begin(),(v).end()
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main()
{
    IOS


    int tc;
    cin >> tc;


    while(tc--){
        int n; cin >> n;
        string opt; cin >> opt;

        int op2 = count(all(opt), '2');

        if(op2==1 || op2==2){
            cout << "NO" << endl;
            continue;
        }
        
        vector<vector<char>> matrix(n, vector<char>(n, '*'));
        
        for(int i=0; i<n; i++){
            //This player wants not lose any game.
            //So, the greedy choice is he should draw.
            if(opt[i] == '1'){
                for(int j=0; j<n; j++){
                    if(i == j){
                        matrix[i][j] = 'X';
                        continue;
                    }
                    if(matrix[i][j] == '*'){
                        matrix[i][j] = '=';
                        matrix[j][i] = '=';
                    }
                }
            }
            //This player wants to win at least one game.
            //So, the greedy choice is he should win one game
            //and loose/draw others 
            else{
                bool already_won = false;
                for(int j=0; j<n; j++){
                    if(i == j){
                        matrix[i][j] = 'X';
                        continue;
                    }
                    if(matrix[i][j] == '*'){
                        if(opt[j] == '2'){
                            if(!already_won){
                                matrix[i][j] = '+';
                                matrix[j][i] = '-';
                                already_won = true;
                            }
                            else{
                                matrix[i][j] = '-';
                                matrix[j][i] = '+';
                            }
                        }
                    }
                }
            }
        }

        cout << "YES" << endl;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << matrix[i][j];
            }
            cout << endl;
        }
    }


    return 0;
}