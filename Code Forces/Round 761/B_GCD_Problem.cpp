/*
    ***************************
    *    Author: rafa45       *
    *    Date: 16 Dec 2021    *
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

        if(n%2 == 0) cout << n-3 << " " << 2 << " " << 1 << endl;
        else{
            int a = n/2, b = n/2;

            while(__gcd(a, b) != 1){
                a++;
                b--;
            }

            cout << a << " " << b << " " << 1 << endl;
        }
    }


    return 0;
}