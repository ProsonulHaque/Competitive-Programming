/*
Author: rafa45
Date: 10 Jul 2021
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
        int pos = -1;
        char ch = 'b';
        string ans = "Yes";
        string s; cin >> s;

        for(int i=0; i<s.length(); i++){
            if(s[i] == 'a') pos = i;
        }

        if(pos == -1){
            cout << "No" << endl;
            continue;
        }

        int left = pos, right = pos;
        
        while(left>0 || right <s.length()-1){
            if(s[left-1] == ch){
                left -= 1;
            }
            else if(s[right+1] == ch){
                right += 1;
            }
            else{
                ans = "No";
                break;
            }
            ch++;
        }

        cout << ans << endl;
    }

    return 0;
}