/*
    ***************************
    *    Author: rafa45       *
    *    Date: 08 Sep 2021    *
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
        string s; cin >> s;

        vector<vector<char>> matrix(n, vector<char>(n, 'X'));

        for(int i=0; i<n; i++){
            bool already_Won = false;
            int opt_i = s[i]-'0'; 

            for(int j=0; j<n; j++){
                if(i==j) continue;

                int opt_j = s[j]-'0';

                //0 Loss
                if(opt_i == 1){
                    if(matrix[i][j] == 'X'){
                        matrix[i][j] = '=';
                        matrix[j][i] = '=';
                    }
                }

                //1 Win
                else{
                    if(opt_j == 1){
                        if(matrix[i][j] == 'X'){
                            matrix[i][j] = '=';
                            matrix[j][i] = '=';
                        }
                    }
                    else{
                        //already won
                        if(already_Won){
                            matrix[i][j] = '-';
                            matrix[j][i] = '+';
                        }
                        else{
                            matrix[i][j] = '+';
                            matrix[j][i] = '-';
                            already_Won = true;
                        }
                    }
                }
            }
        }

        bool ok = true;
        
        for(int i=0; i<n; i++){
            int win = 0;
            int opt_i = s[i]-'0'; 

            for(int j=0; j<n; j++){
                if(opt_i == 1 && matrix[i][j] == '-') 
                    ok = false;
                win += (matrix[i][j] == '+');
            }

            if(opt_i == 2 && win == 0) ok = false;
            
            if(!ok) break;
        }

        if(ok){
            cout << "YES" << endl;
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    cout << matrix[i][j];
                }
                cout << endl;
            }
        }
        else{
            cout << "NO" << endl;
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    cout << matrix[i][j];
                }
                cout << endl;
            }
        }
    }


    return 0;
}