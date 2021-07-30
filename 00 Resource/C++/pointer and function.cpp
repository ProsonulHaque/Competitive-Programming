#include<iostream>
using namespace std;

void fun(int *p){
    *p+=1;
}
int main(){
    int cnt=0;
    fun(&cnt);
    cout << cnt;
    return 0;
}
