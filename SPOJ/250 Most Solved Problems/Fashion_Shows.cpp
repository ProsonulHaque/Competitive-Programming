/*
    ***************************
    *    Author: rafa45       *
    *    Date: 03 Sep 2021    *
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
        vector<int> men(n), women(n);

        for(int &x:men) cin >> x;
        for(int &x:women) cin >> x;

        sort(men.begin(), men.end());
        sort(women.begin(), women.end());

        ll sum = 0;

        for(int i=0; i<n; i++){
            sum += men[i]*women[i]*1ll;
        }

        cout << sum << endl;
    }


    return 0;
}