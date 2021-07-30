/*
    ***************************
    *    Author: rafa45       *
    *    Date: 25 Jul 2021    *
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
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main()
{
    IOS


    int tc;
    cin >> tc;


    while(tc--){
        int n; cin >> n;
        vector<vector<int>> record(n, vector<int>(5));

        for(int i=0; i<n; i++){
            for(int j=0; j<5; j++)
                cin >> record[i][j];
        }

        int w = 0;

        for(int i=1; i<n; i++){
            int a1 = 0, a2 = 0;
            for(int j=0; j<5; j++){
                if(record[w][j]<record[i][j]) a1++;
                else a2++;
            }
            if(a2>a1){
                w = i;
            }
        }

        bool ok = true;

        for(int i=0; i<n; i++){
            if(i==w) continue;
            int a1=0, a2=0;
            for(int j=0; j<5; j++){
                if(record[w][j]<record[i][j]) a1++;
                else a2++;
            }
            if(a2>a1) ok = false;
        }

        if(ok) cout << w+1 << endl;
        else cout << -1 << endl;
    }


    return 0;
}