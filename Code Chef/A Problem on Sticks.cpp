#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T=0, i=0, n=0;
    cin >> T;

    while(T--){
        cin >> n;
        vector<int> arr(n);

        for(i=0; i<n; i++){
            cin >> arr[i];
        }

        sort(arr.rbegin(), arr.rend());

        int step = 0;
        int j=1;
        int current = arr[0];

        while(j<n){
            if(current!=arr[j]){
                step += 1;
                current = arr[j];
            }
            j++;
        }

        if(arr[n-1]!=0)
            cout << step+1 << "\n";
        else
            cout << step << "\n";

    }

    return 0;
}
