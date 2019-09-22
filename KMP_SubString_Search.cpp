#include <iostream>
using namespace std;
string str = "ABABDABACDABABCABAB";
string patter = "ABABCABAB";
void cal_lps(int *lps, int n)
{
    int i = 1;
    int j = 0;
    lps[0] = 0;
    while(i<n)
    {
        if(patter[i]==patter[j])
        {
            lps[i]=j+1;
            j++;
            i++;
        }
        else
        {
            if(j!=0)
            {
                j = lps[j-1];
            }
            else
            {
                lps[i] =0;
                i++;
            }
            
        }
    }
    // for(int i=0;i<n;i++)
    //     cout << lps[i] << " ";
    //     cout << endl;
}
int main()
{
    
    int n = patter.size();
    int lps[n];
    cout << n << endl;
    cal_lps(lps,n);
    int i = 0;
    int j = 0;
    while(i<str.size())
    {
        if(str[i]== patter[j])
        {
            i++;
            j++;
        }
        if(j== n)
        {
            cout << "pattern found at..."<<i-j<<"\n";
            break;
        }
        else if(i<str.size() and patter[j] != str[i])
        {
            if(j != 0)
            j= lps[j-1];
            else
                i = i+1;
        }
    }
    return 0;
}
