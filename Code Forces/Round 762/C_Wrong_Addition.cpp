/*
    ***************************
    *    Author: rafa45       *
    *    Date: 20 Dec 2021    *
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
        string a, s, b = "";
        cin >> a >> s;

        int ca = a.length()-1, cs = s.length()-1;
        bool ok = true;

        while(ca >= 0 || cs >= 0){
            if(cs < 0){
                ok = false;
                break;
            }
            if(ca < 0){
                while(cs>=0){
                    b = s[cs--] + b;
                }
                break;
            } 
            
            int num_a = a[ca]-'0';
            int num_s = s[cs]-'0';

            if(num_s < num_a){
                if(cs == 0){
                    ok = false;
                    break;
                }
                string ss = s.substr(cs-1, 2);
                num_s = stoi(ss);
                if(num_s > 18){
                    ok = false;
                    break;
                }
                cs--;
            }
            
            b = to_string(num_s-num_a) + b;

            ca--;
            cs--;
        }

        while(b.length() > 0 && b[0] == '0') b = b.substr(1, b.length()-1);
        
        if(ok) cout << b << endl;
        else cout << -1 << endl;
    }


    return 0;
}