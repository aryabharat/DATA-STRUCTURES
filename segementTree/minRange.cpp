#include <bits/stdc++.h>
using namespace std;
#define IM INT_MAX;

void cST(vector<long> v,vector<long>ST,int low,int high,int pos)
{
    if(low == high)
    {
        ST[pos] = v[pos];
        return;
    }
    int mid = (low+high)/2;
    cST(v,ST,low,mid,2*pos+1);
    cST(v,ST,mid+1,high,2*pos+2);
    ST[pos] = min(ST[2*pos+1],ST[2*pos+2]);
    return;
}
long  Range(vector<long> ST,int qlow,int qhigh,int low,int high,int pos)
{
    if(qlow <= low && qhigh >= high)//total overlap
        return ST[pos];
    if(qlow > high && qhigh < low)
        return IM;
    int mid = (low+high)/2;
    return min(Range(ST,qlow,qhigh,low,mid,2*pos+1),Range(ST,qlow,qhigh,mid+1,high,2*pos+2));  
}
int main()
{
    int n;
    vector <long> v(n);
    for(int i=0;i<n;++i)
    cin >> v[i];
    int x = (int)(ceil(log2(n)));  
    int max_size = 2*(int)pow(2, x) - 1;
    vector<long> ST (max_size,100000000000000);
    cout << "hello";
    //cST(v,ST,0,n-1,0); 
    int qlow = 1;int qhigh = 4;
    
   //cout <<  Range(ST,qlow,qhigh,0,n,0);
}
