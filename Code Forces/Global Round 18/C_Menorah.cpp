/*
    ***************************
    *    Author: rafa45       *
    *    Date: 24 Dec 2021    *
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
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        if(a == b){
            cout << 0 << endl;
            continue;
        }
        if(count(all(a), '0') == n){
            cout << -1 << endl;
            continue;
        }

        int one_to_zero = 0, zero_to_one = 0;

        for(int i=0; i<n; i++){
            if(a[i] != b[i]){
                if(a[i] == '1') one_to_zero++;
                else zero_to_one++;
            }
        }

        if(one_to_zero == zero_to_one) cout << 0 << endl;
        cout << 1 << endl;
    }


    return 0;
}