/*
    ***************************
    *    Author: rafa45       *
    *    Date: 22 Aug 2021    *
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


    int tc; cin >> tc;

    for(int tcn=1; tcn<=tc; tcn++){
        string str, ans; cin >> str;
        unordered_map<char, int> mp;
        ans = str;
        sort(all(ans), greater<char>());

        for(char ch:ans) mp[ch]++;

        int maxAppear = 0;

        for(auto el:mp) maxAppear = max(maxAppear, el.second);

        if(maxAppear > (int)ans.length()/2) ans = "IMPOSSIBLE";
        else{
            for(int i=0; i<str.length(); i++){
                for(auto el:mp){
                    if(el.first != str[i]){
                        ans[i] = el.first;
                        if(el.second == 1) mp.erase(el.first);
                        else el.second -= 1;
                        break;
                    }
                }
            }
        }
 
        printf("Case #%d: %s\n", tcn, ans.c_str()); 
    }


    return 0;
}