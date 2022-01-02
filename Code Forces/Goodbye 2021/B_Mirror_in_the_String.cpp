/*
    ***************************
    *    Author: rafa45       *
    *    Date: 29 Dec 2021    *
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
        int n;
        string s, s1 = "", ans;
        
        cin >> n >> s;
        
        if(count(all(s), s[0]) == n){
            ans += s[0];
            ans += s[0];
            cout << ans << endl;
            continue;
        }

        s1 += s[0];

        for(int i=1; i<n; i++){
            if(s[i] > s1[i-1]) break;
            if(s[i] == s1[i-1]){
                if(i == 1) break;
                char ch = s1[i-1];
                string temp = "";
                
                while(i<n && s[i] == ch){
                    temp += ch;
                    i++;
                } 
                
                if(i==n || s[i] >ch){
                    s1 += temp;
                    break;
                }
                else{
                    s1 += temp;
                }
            }
            s1 += s[i];
        }

        ans = s1;
        reverse(all(s1));
        ans += s1;

        cout << ans << endl;
    }


    return 0;
}