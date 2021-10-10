/*
    ***************************
    *    Author: rafa45       *
    *    Date: 10 Aug 2021    *
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

    vector<vector<int>> grid(3, vector<int>(3, 1));
    vector<int> dx = {0, 0, 0, 1, -1};
    vector<int> dy = {0, 1, -1, 0, 0};

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            int t; cin >> t;
            if (t%2==0) continue;
            for(int k=0; k<5; k++){
                int x = i+dx[k], y = j+dy[k];
                if(x>=0 && x<3 && y>=0 && y<3) 
                    grid[x][y] ^= 1; 
            }
        }
    }

    for(auto row:grid){
        for(int col:row) cout << col;
        cout << endl;
    }

    return 0;
}