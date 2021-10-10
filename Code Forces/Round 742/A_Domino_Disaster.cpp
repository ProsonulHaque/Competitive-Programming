/*
    ***************************
    *    Author: rafa45       *
    *    Date: 05 Sep 2021    *
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

        string domino;
        cin >> domino;

        string ans = "";

        int indx = 0;

        while(indx<n){
            if(domino[indx] == 'U' || domino[indx] == 'D')
                ans += domino[indx] ^ ('U'^'D'), indx++;
            else ans += "LR", indx += 2;
        }

        cout << ans << endl;
    }


    return 0;
}