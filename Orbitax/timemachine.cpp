/*
    ***************************
    *    Author: rafa45       *
    *    Date: 13 Dec 2021    *
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

bool valid(int n, unordered_set<int> us){
    if(n==0 && us.count(n)==0) return false;

    while(n>0){
        if(us.count(n/10) == 0) return false;
        n /= 10;
    }

    return true;
}

int main()
{
    IOS


    string time;
    cin >> time;

    unordered_set<int> uset = {time[0]-'0', time[1]-'0', time[3]-'0', time[4]-'0'};
    for(auto el:uset) cout << el << endl;

    bool found = false;
    int hour, minute;

    for(hour=stoi(time.substr(0, 2)); hour<24; hour++){
        if(!valid(hour, uset)) continue;
        for(minute=stoi(time.substr(3, 2))+1; minute<60; minute++){
            if(!valid(minute, uset)) continue;
            found = true;
            break;
        }
        if(found) break;
        if(hour == 23) hour = 0;
    }

    string ans = "";

    if(to_string(hour).length() == 1) ans += "0" + to_string(hour);
    else ans += to_string(hour);

    if(to_string(minute).length() == 1) ans += ":0" + to_string(minute);
    else ans += ":"+to_string(minute);

    cout << ans;
    
    return 0;
}