/*
    ***************************
    *    Author: rafa45       *
    *    Date: 28 Sep 2021    *
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
        string s;
        cin >> s;

        int a=0, b=0, c=0;

        for(char ch:s){
            if(ch == 'A') a++;
            else if(ch == 'B') b++;
            else c++;
        }

        if(b == a+c) cout << "YES" << endl;
        else cout << "NO" << endl;
    }


    return 0;
}