/*
Author: rafa45
Date: 13 Jul 2021
*/


#include<bits/stdc++.h>
using namespace std;


const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
const int N=5000;


#define endl              '\n'
#define PRIME             M
#define mod               M
#define ll                long long
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

class SimilarDNA
{
public:
    string areSimilar(string A, string B){
        unordered_map<char, int> map_a;
        unordered_map<char, int> map_b;

        for(char ch : A) map_a[ch]++;
        for(char ch : B) map_b[ch]++;

        int c = abs(map_a['C'] - map_b['C']);
        int g = abs(map_a['G'] - map_b['G']);
        int a = abs(map_a['A'] - map_b['A']);
        int t = abs(map_a['T'] - map_b['T']);

        int total = c+g+a+t;

        if(c>2 || g>2 || a>2 || t>2 || total>2) return "distinct";
        else return "similar";
    }
};

int main()
{
    IOS




    return 0;
}