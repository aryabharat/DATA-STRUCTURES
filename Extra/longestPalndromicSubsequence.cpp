#include<bits/stdc++.h>
using namespace std;
int lps(string s)
{
    int n= s.size();
    int arr[n][n] = {0};
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(i==j)
                arr[i][j] = 1;
    for(int l=2;l<=n;l++)
    {
        for(int i=0;i<n-l+1;i++)
        {
            int j = i+l-1;
            if(s[i] == s[j])
            {
                arr[i][j]= arr[i+1][j-1]+2;
            }
            else
                arr[i][j] = max(arr[i+1][j],arr[i][j-1]);
        }
    }
    // for(int i=0;i<n;i++)
    // {for(int j=0;j<n;j++)
    //     cout << arr[i][j] << " ";
    //     cout << endl;
    // }
    return arr[0][n-1];
}
int main()
 {
	int t;
	cin >> t;
	while(t--)
	{
	    string s;
	    cin >> s;
	    cout <<s.size()-lps(s)<<endl;
	}
	return 0;
}


/*

For Input:
2
hbjeausdwetcoigruoczwvlfxjvygtpnuatvulatsuxie
btblaiwvtopwcqolwjgsdizwjodrtabuveivmeqhuhdwy
Your Output is:
30
34

*/
