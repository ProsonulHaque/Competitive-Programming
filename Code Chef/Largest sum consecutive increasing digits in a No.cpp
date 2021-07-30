#include<bits/stdc++.h>
using namespace std;

void solve(long long n){
    int l = to_string(n).length();
    int digits[l];
    int i = 1, j=0;

    while(n>0){
        digits[l-i] = n%10;
        n /= 10;
        i++;
    }

    int sum=0, largest=0, indx1=0, indx2=0;

    for(i=0; i<l-1; i++){
        sum = digits[i];
        for(j=i; j<l; j++){
            if(digits[j]+1==digits[j+1]){
                sum += digits[j+1];
            }
            else{
                break;
            }
        }
        if(sum>largest){
            largest = sum;
            indx1 = i+1;
            indx2 = j+1;
        }
    }

    cout << largest << ":" << indx1 << "-" << indx2;
}

int main(){
    long long n;
    cin >> n;
    solve(n);
    return 0;
}
