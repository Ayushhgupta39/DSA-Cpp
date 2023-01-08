#include<bits/stdc++.h>
using namespace std;

//Tiling problem - Count the number of ways to tile the given board using given tiles
int tilingWays(int n)
{
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }

    return tilingWays(n-1) + tilingWays(n-2); // Just like the fibonacci series
}

//Friends pairing problem - Number of ways in which n friends can remain single or can be paired up
int friendspairing(int n)
{
    if(n == 0 || n == 1 || n == 2)
    {
        return n;
    }

    return friendspairing(n-1) + friendspairing(n-2) * (n-1);
}

//Knapsack Problem - Maximum value, Minimum Weight
int knapsack(int value[], int wt[], int n, int w)
{
    if(n == 0 || w == 0)
    {
        return 0;
    }

    if(wt[n-1] > w)
    {
        return knapsack(value,wt, n-1, w);
    }
    return max(knapsack(value, wt, n-1, w-wt[n-1]) + value[n-1],knapsack(value, wt, n-1, w));
}


int main()
{
    // cout << tilingWays(4); 
    // cout << friendspairing(4);
    int wt[] = {10,20,30};
    int value[] = {100,50,150};
    int w = 50;
    cout << knapsack(value, wt, 3,w);
    return 0;
}