#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T=0, i=0, j=0, n=0, temp=0;
    cin >> T;

    while(T--){
        cin >> n;
        int arr[n][n];

        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                cin >> arr[i][j];
            }
        }

        int step = 0;

        for(i=n-1; i>=1; i--){
            if(arr[0][i]!=i+1){
                step += 1;
                for(j=1; j<n; j++){
                    temp = arr[0][j];
                    arr[0][j] = arr[j][0];
                    arr[j][0] = temp;
                }
            }
        }

        cout << step << "\n";

    }

    return 0;
}
