/*
    ***************************
    *    Author: rafa45       *
    *    Date: 07 Oct 2021    *
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

        string ans = "", temp = "";
        int n = s.length();

        for(int i=0; i<n; i++){
            if(s[i] == 'W'){
                if(i+2 < n){
                    if(s.substr(i, 3) == "WUB"){
                        if(i)
                    }
                }
            }
        }
    }


    return 0;
}