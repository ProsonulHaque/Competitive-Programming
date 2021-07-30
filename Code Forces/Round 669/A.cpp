#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T=0, i=0, n=0, even=0, odd=0, diff=0;
    cin >> T;

    while(T--){
        cin >> n;
        vector<int> arr(n);

        for(i=0; i<n; i++){
            cin >> arr[i];
        }

        even=0, odd=0, diff=0;

        for(i=0; i<n-1; i+=2){
            odd += arr[i];
        }
        for(i=1; i<n; i+=2){
            even += arr[i];
        }

        if(arr[0]==0 && arr[1]==0){
            cout << 1 << "\n";
            cout << 0 << "\n";
        }
        else if(even == odd){
            cout << n << "\n";
            for(i=0; i<n; i++){
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
        else if(n==2){
            cout << 1 << "\n";
            cout << 0 << "\n";
        }
        else{
            if(even>odd){
                diff = even-odd;
                for(i=1; diff>0; i+=2){
                    if(arr[i]==1){
                        arr[i] = -1;
                        diff -= 1;
                    }
                }
                diff = even-odd;
                for(i=0; diff>0; i+=2){
                    if(arr[i]==0){
                        arr[i] = -1;
                        diff -= 1;
                    }
                }
                diff = even-odd;
            }

            else{
                diff = odd-even;
                for(i=0; diff>0; i+=2){
                    if(arr[i]==1){
                        arr[i] = -1;
                        diff -= 1;
                    }
                }
                diff = odd-even;
                for(i=1; diff>0; i+=2){
                    if(arr[i]==0){
                        arr[i] = -1;
                        diff -= 1;
                    }
                }
                diff = odd-even;
            }

            cout << n-(diff*2) << "\n";
            for(i=0; i<n; i++){
                if(arr[i]!=-1)
                    cout << arr[i] << " ";
            }
            cout << "\n";

        }

    }

    return 0;
}
