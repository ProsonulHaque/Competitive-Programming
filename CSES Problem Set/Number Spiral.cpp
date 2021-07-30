#include<bits/stdc++.h>
using namespace std;

long long solve(){
    long long row=0, col=0;
    long long num=0;

    cin >> row >> col;

    if(row==1 && col==1){
        return 1;
    }

    long long dim = max(row, col);
    long long dim2 = dim*dim;


    if(dim%2==0){
        num = dim2 - (col - 1);
        if(dim != row){
            num = num - (dim-row);
        }
    }
    else{
        num = dim2 - (row - 1);
        if(dim != col){
            num = num - (dim-col);
        }
    }

    return num;
}

int main(){
    int T=0;
    cin >> T;
    while(T--){
        cout << solve() <<"\n";
    }
    return 0;
}
