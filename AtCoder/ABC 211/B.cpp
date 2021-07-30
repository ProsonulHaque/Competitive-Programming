/*
    ***************************
    *    Author: rafa45       *
    *    Date: 24 Jul 2021    *
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
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main()
{
    IOS


    int a=0, b=0, c=0, d=0;
    for(int i=0; i<4; i++){
        string s; cin >> s;
        if(s == "H") a++;
        if(s == "2B") b++;
        if(s == "3B") c++;
        if(s == "HR") d++;
    }
    if(a*b*c*d>0) cout << "Yes";
    else cout << "No";


    return 0;
}