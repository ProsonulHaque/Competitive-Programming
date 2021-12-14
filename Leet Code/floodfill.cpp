/*
    ***************************
    *    Author: rafa45       *
    *    Date: 02 Dec 2021    *
    ***************************
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
#define all(v)            (v).begin(),(v).end()
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int rows, cols, oldColor;
vector<vector<int>> copyImage;
// unordered_map<pair<int, int>, vector<pair<int, int>>> adj;

bool valid(int row, int col){
    if(row>=0 && row <rows && col>=0 && col<cols && copyImage[row][col] == oldColor)
        return true;
    return false;
}

void bfs(vector<vector<int>>& image, unordered_map<pair<int, int>, vector<pair<int, int>>>& adj, int row, int col, int newColor){
    queue<pair<int, int>> q;
    q.push({row, col});
    
    while(!q.empty()){
        pair<int, int> parentNode = q.front();
        q.pop();
        
        for(auto childNode:adj[parentNode]){
            if(image[childNode.first][childNode.second] == oldColor){
                image[childNode.first][childNode.second] = newColor;
                q.push(childNode);
            }
        }
    }
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
    copyImage = image;
    oldColor = image[sr][sc];
    
    rows = image.size();
    cols = image[0].size();
    
    map< pair<int, int>, vector<pair<int, int>> > adj;
    
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(valid(i+1, j))
                adj[{i, j}].push_back({i+1, j});
            if(valid(i-1, j))
                adj[{i, j}].push_back({i-1, j});
            if(valid(i, j+1))
                adj[{i, j}].push_back({i, j+1});
            if(valid(i, j-1))
                adj[{i, j}].push_back({i, j-1});
        }
    }
    
    bfs(image, adj, sr, sc, newColor);
    
    return image;   
}

int main()
{
    IOS


    

    return 0;
}