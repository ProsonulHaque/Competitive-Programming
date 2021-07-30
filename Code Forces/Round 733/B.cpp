/*
Author: rafa45
Date: 17 Jul 2021
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
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main()
{
    IOS


    int t;
    cin >> t;


    while(t--){
        int row, col; 
        cin >> row >> col;
        vector<vector<int>> table(row, vector<int>(col, 0));
        int bit = 0;

        for(int i=0; i<=col-1; i+=2){
            table[0][i] = 1;
        }
        for(int i=2; i<=row-1; i+=2){
            table[i][col-1] = 1;
        }

        for(int i=col-3; i>=0; i-=2){
            table[row-1][i] = 1;
        }
        for(int i=row-3; i>1; i-=2){
            table[i][0] = 1;
        }

        for(auto r : table){
            for(auto c : r) cout << c;
            cout << endl;
        }
        cout << endl;
    }


    return 0;
}