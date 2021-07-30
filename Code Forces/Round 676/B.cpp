/*
Author: rafa45
Date: 18 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;
const int MXN=210;

int main()
{
    int n, i, t, j;

    cin >> t;

    while(t--){
        char a[MXN][MXN];
        cin >> n;

        for(i=1; i<=n; i++){
            for(j=1; j<=n; j++){
                cin >> a[i][j];
            }
        }

        //Check all the conditions!
        if(a[1][2]==a[2][1] && a[n-1][n]==a[n][n-1]){
            if(a[1][2]==a[n-1][n]){
                cout << 2 << endl;
                printf("%d %d\n%d %d\n", n, n-1, n-1, n);

            }
            else cout << 0 << endl;
        }
        else if(a[1][2]==a[2][1] && a[n-1][n]!=a[n][n-1]){
            cout << 1 << endl;
            if(a[n-1][n]==a[1][2])
                printf("%d %d\n", n-1, n);
            else
                printf("%d %d\n", n, n-1);
        }
        else if(a[1][2]!=a[2][1] && a[n-1][n]==a[n][n-1]){
            cout << 1 << endl;
            if(a[1][2]==a[n-1][n])
                printf("%d %d\n", 1, 2);
            else
                printf("%d %d\n", 2, 1);
        }
        else if(a[1][2]!=a[2][1] && a[n-1][n]!=a[n][n-1]){
            cout << 2 << endl;
            if(a[1][2]=='0')
                printf("%d %d\n%", 1, 2);
            else
                printf("%d %d\n%", 2, 1);

            if(a[n-1][n]=='1')
                printf("%d %d\n%", n-1, n);
            else
                printf("%d %d\n%", n, n-1);
        }
    }

    return 0;
}
