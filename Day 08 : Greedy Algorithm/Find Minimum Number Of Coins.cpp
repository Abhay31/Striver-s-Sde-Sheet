#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    // Write your code here
    vector<int> d = {1,2,5,10,20,50,100,500,1000};
    int c = 0;
    for(int i = d.size()-1;i>=0;i--)
    {
        if(d[i] <= amount)
        {
            c += (amount/d[i]);
            amount = amount%d[i];
        }
        if(amount == 0)
        {
            break;
        }
        else {
            continue;
        }
    }
    return c;
}
