#include<iostream>
using namespace std;

void merger(int arr[], int l, int r, int m, int s, long long* c){
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
            *c+=(m-i+1);
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

void merge_sort(int arr[], int l, int r, int s, long long* p){
    if(l<r){
        int m = (l+r)/2;
        merge_sort(arr, l, m, s, p);
        merge_sort(arr, m+1, r, s, p);
        merger(arr, l, r, m, s, p);
    }
}

int main(){
    long long cnt=0LL;

    int n, i;
    cin >> n;
    int arr[n];

    for(i=0; i<n; i++)  cin >> arr[i];

    merge_sort(arr, 0, (n-1), n, &cnt);

    cout << "After merge sort:" << "\n";
    for(i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << "\n" << cnt << "\n";

    return 0;
}
