/*
Author: rafa45
Date: 8 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;
const int MXN=600;

int main()
{
    int i=0, j=0;
    string n1, n2;

    while(cin >> n1){
        cin >> n2;
        reverse(n1.begin(), n1.end());
        reverse(n2.begin(), n2.end());
        int ans[600];
        memset(ans, 0, sizeof(ans));

        for(i=0; i<n1.size(); i++){
            for(j=0; j<n2.size(); j++){
                ans[i+j] += (n1[i]-'0')*(n2[j]-'0');
            }
        }

        for(i=0; i<MXN-1; i++){
            ans[i+1] += ans[i]/10;
            ans[i] = ans[i]%10;
        }

        while(i>0 && ans[i]==0) i--;
        while(i>=0){
            cout << ans[i];
            i--;
        }
        cout << endl;
    }

    return 0;
}
