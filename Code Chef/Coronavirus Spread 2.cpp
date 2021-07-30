#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T=0, i=0, j=0, k=0, n=0;
    cin >> T;

    while(T--){
        cin >> n;
        vector<int> arr(n);
        vector<int> covid(n);

        for(i=0; i<n; i++){
            cin >> arr[i];
        }

        reverse(arr.begin(), arr.end());

        for(i=0; i<n; i++){

            int cnt = 1;
            //1st Athlete
            if(i==0){
                for(j=1; j<n; j++){
                    if(arr[j]>arr[i])
                        cnt += 1;
                }
            }
            //Last Athlete
            else if(i==n-1){
                for(j=n-2; j>=0; j--){
                    if(arr[j]<arr[i])
                        cnt += 1;
                }
            }
            //Any Athlete between 1st & Last
            else {
                //Upper part
                for(j=i-1; j>=0; j--){
                    if(arr[j]<arr[i])
                        cnt += 1;
                }
                //Lower part
                int largest=arr[i+1];
                //Find out the largest element in lower part
                for(j=i+2; j<n; j++){
                    if(arr[j]>arr[i] && arr[j]>largest){
                            largest = arr[j];
                    }
                }

                for(j=i+1; j<n; j++){
                    if(arr[j]>arr[i]){
                        cnt += 1;
                        for(k=i-1; k>=0; k--){
                            if(arr[j]>arr[k] && arr[k]>=arr[i] && arr[j]==largest)
                                cnt += 1;
                        }
                    }
                }
            }

            //Array of total infected in diff. case
            covid[i] = cnt;
        }

        cout << *min_element(covid.begin(), covid.end()) << " " << *max_element(covid.begin(), covid.end()) << "\n";
//        for(i=0; i<n; i++){
//            cout << covid[i] << " ";
//        }
    }

    return 0;
}
