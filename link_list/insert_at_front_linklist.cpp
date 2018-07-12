
#include<iostream>
using namespace std;
struct node
{
    int data;
    node *link;

};
   node *start;

void input()
{   int value;
    cout<<"Enter the data   ";
    cin>>value;
   if(start==NULL)
   {
       node *temp=new node;
         temp->data=value;
         temp->link=NULL;
         start=temp;
         return;
   }
   else
   {
         node *temp=new node;
         temp->data=value;
         temp->link=start;
         start=temp;
   }

}
 void print()
{
    node *temp=start;
    while(temp!=NULL)
    {

        cout<<temp->data<<"     ";
        temp=temp->link;
    }
    return ;

}
int main()
{
    start=NULL;
    input();
    input();
    input();input();input();input();input();

    print();

}
