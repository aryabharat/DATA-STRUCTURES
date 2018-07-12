#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long


int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    ull n, m;
    cin >> n;
    ull num, def;
    if(n == 1)
    {
        cout << "1 1";
        //continue;
    }

    else if(n % 2 == 0)
    {
    cout<<"1 ";
    cout<<"1";
    for(int i =0;i<n/2;i++)
      cout<<"0";
    }

    else
    {
      cout<<"1 ";
      cout<<"1";
      for(int i = 0;i<((n-1)/2); i++){
        cout<<"0";
      }
    }
    cout<<"\n";
  }

}
