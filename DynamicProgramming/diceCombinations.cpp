// @ author : Anirudh Sathish 
// @ CSES Problem Link : https://cses.fi/problemset/task/1633

#include<bits/stdc++.h>
using namespace std ;

#define SIZE 1000001 
#define MOD 1000000007 

int number , dp[SIZE];

int diceCombination(int number)
{
    if(dp[number]!=0)
    {
        return dp[number];
    }
    for(int i = 1 ; i <=6 ; i++)
    {
        if(number -i >= 0)
        {
            dp[number]+= diceCombination(number-i);
            dp[number] %= MOD;
        }
    }
    return dp[number];
}
int main()
{
    cin>>number;
    memset(dp,0,sizeof(dp));
    dp[0] = 1;
    cout<<diceCombination(number)<<endl;
}

