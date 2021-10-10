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


    int year; cin >> year;
    int ans;
    while(true){
        set<int> s;
        year += 1;
        int y = year;
        int c = 0;
        while(y>0){
            s.insert(y%10);
            y /= 10;
            c++;
        }
        if(s.size() == c){
            ans = year;
            break;
        }
    }
    cout << ans;


    return 0;
}