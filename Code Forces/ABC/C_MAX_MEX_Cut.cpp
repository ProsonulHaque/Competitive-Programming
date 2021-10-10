/*
    ***************************
    *    Author: rafa45       *
    *    Date: 13 Sep 2021    *
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

        string row1, row2;
        cin >> row1 >> row2;

        int ans = 0;

        for(int i=0; i<n; i++){
            if(row1[i] != row2[i])
                ans += 2;
            else if(i<n-1){
                if(row1[i+1] == row2[i+1] && row1[i] != row1[i+1])
                    ans += 2, i++;
                else
                    ans += (row1[i]^('0'^'1'))-'0';
            }
            else
                ans += (row1[i]^('0'^'1'))-'0';
        }

        cout << ans << endl;
    }


    return 0;
}