/*
Author: rafa45
Date: 13 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;
const int MXN=600;

bool valid(int r, int c){
    if(r>=0 && r<=4 && c>=0 && c<=9) return true;
    else return false;
}

bool maze_search(int r, int c, string maze[], bool visited[5][10]){
    if(!valid(r,c) || maze[r][c]=='x') return false;

    if(maze[r][c]=='e') return true;

    if(visited[r][c]) return false;

    visited[r][c]=true;

    if(maze_search[r-1][c]) return true;  //up
    if(maze_search[r+1][c]) return true;  //down
    if(maze_search[r][c-1]) return true;  //left
    if(maze_search[r][c+1]) return true;  //right

    return false;
}

int main()
{
    cout << "Enter # of test case: ";
    int t; cin >> t;

    while(t--)
    {
        string maze[]={ "...x.x.x..",
                        ".x.xx....x",
                        "x..xxxx...",
                        ".x...xxx..",
                        "xxxx...e.x" };

        bool visited[5][10];

        for(int i=0; i<5; i++){
            for(int j=0; j<10; j++){
                visited[i][j]=false;
            }
        }

        int r, c;

        cout << "Starting position: ";
        cin >> r >> c;

        maze_search(r,c, maze, visited)? cout << "Possible\n" : cout << "Impossible\n";
    }

    return 0;
}
