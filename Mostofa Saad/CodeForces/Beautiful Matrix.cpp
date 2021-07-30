#include<bits/stdc++.h>
using namespace std;

int main(){
    int i, j, m, r, c;
    int arr[5][5];

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            cin >> arr[i][j];
            if(arr[i][j]==1){
                r = i;
                c = j;
            }
        }
    }

    m = abs(r-2)+abs(c-2);

    cout << m;

    return 0;
}
