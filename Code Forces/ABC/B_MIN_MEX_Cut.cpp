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
        string str; 
        cin >> str;

        int zeroes = count(all(str), '0');
        int ans;

        if(zeroes == 0) ans = 0;
        else{
            int first = str.find('0');
            int last = str.rfind('0');

            if(last-first+1 == zeroes) ans = 1;
            else ans = 2;
        }

        cout << ans << endl;
    }


    return 0;
}