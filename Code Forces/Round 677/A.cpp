/*
Author: rafa45
Date: 20 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;
const int MXN=200002;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int x, ans;
        cin >> x;
        int len = to_string(x).size();
        switch(len){
            case 1: ans = ((x%10)-1)*10+1;
            break;
            case 2: ans = ((x%10)-1)*10+3;
            break;
            case 3: ans = ((x%10)-1)*10+6;
            break;
            case 4: ans = ((x%10)-1)*10+10;
            break;
        }
        cout << ans << endl;
    }

    return 0;
}
