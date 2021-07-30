#include<iostream>
using namespace std;

void merger(int arr[], int l, int r, int m, int s){
    int temp[s];
    int i=l;
    int j=m+1;
    int k=l;
    //Merge the two sub arrays
    while(i<=m && j<=r){
        if(arr[i]<=arr[j]){
            temp[k] = arr[i];
            i++;
        }
        else{
            temp[k] = arr[j];
            j++;
        }
        k++;
    }
    //Copy leftover elements from one of the two arrays
    while(i<=m){
        temp[k] = arr[i];
        i++;
        k++;
    }
    while(j<=r){
        temp[k] = arr[j];
        j++;
        k++;
    }

    for(i=l; i<=r; i++){
        arr[i] = temp[i];
    }
}

void merge_sort(int arr[], int l, int r, int s){
    if(l<r){
        int m = (l+r)/2;
        merge_sort(arr, l, m, s);
        merge_sort(arr, m+1, r, s);
        merger(arr, l, r, m, s);
    }
}

int main(){
    int n, i, T;
    cin >> T;

    while(T--){
        cin >> n;
        int arr[n];

        for(i=0; i<n; i++)  cin >> arr[i];

        merge_sort(arr, 0, (n-1), n);

        //for(i=0; i<n; i++)  cout << arr[i] << " ";

        int largest=1, c=1;

        for(i=0; i<n-1; i++){
            if(arr[i]==arr[i+1]){
                c++;
            }
            else{
                if(c>largest){
                    largest = c;
                }
                c = 1;
            }
        }
        if(c>largest){
            largest = c;
        }
        //cout << "\n" << largest << "\n";

        int smallest=largest;
        c=1;

        for(i=0; i<n-1; i++){
            if(arr[i]==arr[i+1]){
                c++;
            }
            else{
                if(c<smallest){
                    smallest = c;
                }
                c = 1;
            }
        }
        if(c<smallest){
            smallest = c;
        }
        //cout << smallest << "\n";

        if(largest-smallest==0)
            cout << 1 << "\n";
        else
            cout << largest-smallest << "\n";
    }

    return 0;
}
