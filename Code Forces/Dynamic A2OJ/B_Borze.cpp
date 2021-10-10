/*
    ***************************
    *    Author: rafa45       *
    *    Date: 10 Aug 2021    *
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


    string s, ans="";
    cin >> s;

    int n = s.size(), i = 0;

    while(i<n){
        if(s[i] == '.'){
            ans += '0';
            i++;
        } 
        else if(s[i] == '-' && s[i+1] == '.'){
            ans += '1';
            i += 2;
        }
        else{ 
            ans += '2';
            i += 2;
        }
    }

    cout << ans;


    return 0;
}