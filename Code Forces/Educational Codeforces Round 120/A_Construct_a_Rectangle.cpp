/*
    ***************************
    *    Author: rafa45       *
    *    Date: 27 Dec 2021    *
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
        int a, b, c;
        cin >> a >> b >> c;

        if(abs(a-b) == c || abs(a-c) == b || abs(b-c) == a){
            cout << "YES" << endl;
        }
        else if((a==b && c%2==0) || (b==c && a%2==0) || (c==a && b%2==0)){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }


    return 0;
}