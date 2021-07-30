/*
Author: rafa45
Date: 14 Jul 2021
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


    int t;
    cin >> t;


    while(t--){
        int n, a, b; string s;
        cin >> n >> a >> b >> s;

        int points = n*a;

        if(b>=0){
            points += n*b;
        }
        else{
            int chunks = 1;
            for(int i=1; i<s.length(); i++){
                if(s[i] != s[i-1]) chunks++;
            }
            points += (chunks/2 + 1)*b;
        }

        cout << points << endl;
    }


    return 0;
}