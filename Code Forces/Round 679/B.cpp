/*
Author: rafa45
Date: 25 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;

int main()
{
    int t, n, m, i, j, k;
    cin >> t;

    while(t--){
        cin >> n >> m;
        int a[n][m], b[m][n];
        int c[n];

        for(i=0; i<n; i++){
            for(j=0; j<m; j++){
                cin >> a[i][j];
            }
        }
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                cin >> b[i][j];
            }
        }

        for(i=0; i<n; i++){
            int num = b[0][i];
            int flag = 0;
            for(j=0; j<n; j++){
                for(k=0; k<m; k++){
                    if(a[j][k]==num){
                        c[i]=j;
                        flag=1;
                        break;
                    }
                }
                if(flag==1) break;
            }
        }

        for(i=0; i<n; i++){
            int row = c[i];
            for(j=0; j<m; j++){
                cout << a[row][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}

