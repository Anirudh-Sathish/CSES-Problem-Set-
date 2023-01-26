// @ Author : Anirudh Sathish 

// Problem Link  : https://cses.fi/problemset/task/1192

#include<bits/stdc++.h>
using namespace std; 

int n, m , solution = 0 ; 

bool visited[1010][1010];
char hotelMap[1010][1010];

// To make movements on map 
int neighbourX[4] = {0,0,1,-1};
int neighbourY[4] = {1,-1,0,0};

// Defining a func to check if the coordinates satisfies bounds 
bool boundCheck(int y, int x)
{
    if(y < 0)
    {
        return false; 
    }
    if( x < 0)
    {
        return false; 
    }
    if( y >= n)
    {
        return false; 
    }
    if( x >= m)
    {
        return false;
    }
    if( hotelMap[y][x] == '#')
    {
        return false; 
    }
    return true;
}

// Defining a function for the depth first search 
void dfs(int y, int x)
{
    visited[y][x] = true ;
    for(int i = 0 ; i < 4 ; i++)
    {
        int X_ = x+neighbourX[i];
        int Y_ = y+neighbourY[i];
        if(boundCheck(Y_,X_) == true && visited[Y_][X_] == false)
        {
            dfs(Y_,X_);
        }
    }

}

// Main 
int main()
{
    // Taking input n 
    cin>>n;

    // Taking input m 
    cin>>m;

    // Taking input 
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            cin>>hotelMap[i][j];
            visited[i][j] = false;
        }
    }

    // Finding the rooms 
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(hotelMap[i][j] == '.' && visited[i][j] == false)
            {
                dfs(i,j);
                solution+=1;
            }
        }
    }

    cout<<solution<<endl;
    
}