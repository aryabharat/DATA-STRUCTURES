
/*
  The stock span problem is a financial problem where we have a series of n daily price quotes for a stock and we need to calculate span of stock’s price for all n days.
The span Si of the stock’s price on a given day i is defined as the maximum number of consecutive days just before the given day, for which the price of the stock on the current day is less than or equal to its price on the given day.
For example, if an array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6}
  Link: https://www.geeksforgeeks.org/the-stock-span-problem/
*/


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int stock[] = {100, 80, 60, 70, 60, 75, 85};
    stack <int> s;
    s.push(0);
    int span[7];
    span[0] = 1;
    for(int i=1;i<7;++i)
    {
        // cout << s.top();
        // cout << stock[s.top()];
        
        while(!s.empty() && stock[i] > stock[s.top()] )
            {
                s.pop();
            }


        if(s.empty())
         span[i] = i+1;
        else
        {
            span[i] = i - s.top();
        }
        s.push(i);
    }
   for(int i=0;i<7;i++)
   cout<< span[i] << " ";
 }
