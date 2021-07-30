/*
Author: rafa45
Date: 22 Jul 2021
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
        string s; cin >> s;

        int t1 = 0, t2 = 0;
        
        int ans1 = 10, ans2 = 10;

        for(int i=0; i<10; i++){
            int l1 = 0, l2 = 0;

            if(i%2 == 0){
                if(s[i] == '1' || s[i] == '?') t1++;
                l1 = (10-i-1)/2; 
                l2 = l1 + 1; 
            }
            else{
                if(s[i] == '1') t2++;
                l2 = (10-i-1)/2; 
                l1 = l2; 
            }
            
            if(t2+l2<t1 || t1+l1<t2){
                ans1 = i+1;
                break;
            }
        }

        t1 = 0, t2 = 0;

        for(int i=0; i<10; i++){
            int l1 = 0, l2 = 0;

            if(i%2 == 0){
                if(s[i] == '1') t1++;
                l1 = (10-i-1)/2; 
                l2 = l1 + 1; 
            }
            else{
                if(s[i] == '1' || s[i] == '?') t2++;
                l2 = (10-i-1)/2; 
                l1 = l2; 
            }

            if(t2+l2<t1 || t1+l1<t2){
                ans2 = i+1;
                break;
            }
        }

        cout << min(ans1, ans2) << endl;
    }


    return 0;
}