// @author : Anirudh Sathish 

// CSES Problem link : https://cses.fi/problemset/task/1621/

/*You are given a list of n integers, and your task is 
to calculate the number of distinct values in the list.*/

// header files
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , distinctValues = 0 ;
    cin>>n;
    vector <int> numbers(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin>>numbers[i];
    }

    // Sort this -> O(n*log(n))
    sort(numbers.begin(),numbers.end());

    distinctValues = 1;
    for(int i = 1 ; i<n ; i++)
    {
        if(numbers[i] != numbers[i-1])
        {
            distinctValues+=1;
        }
    }
    cout<<distinctValues<<endl;
}