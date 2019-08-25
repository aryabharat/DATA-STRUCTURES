#include <bits/stdc++.h>
using namespace std;
void insertAtBottom(stack <int> &st,int x)
{
    if(st.empty())
    {
        st.push(x);
        return ;
    }
    else
    {
        int temp = st.top();
        st.pop();
        insertAtBottom(st,x);
        st.push(temp);
        return;
    }
    
}
void reverseStack(stack <int>&st)
{
    if(st.empty())
        return;

    int x = st.top();  
    st.pop();  
    reverseStack(st);
    insertAtBottom(st,x);
    return ;
}
void printStack(stack <int>&st)
{
    while(!st.empty())
    {
        cout << st.top()<<"\n ";
        st.pop();
    }
}
int main()
{
    stack <int> st;
    for(int i=1;i<=10;i++)
        st.push(i);
    cout << "Before reversing the stack\n ";
    printStack(st);
    cout << endl;
    for(int i=1;i<=10;i++)
        st.push(i);
    reverseStack(st);
    cout << endl;
    cout << "After reversing the stack\n ";
    printStack(st);
}