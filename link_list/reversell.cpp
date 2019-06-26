#include<iostream>
using namespace std;

struct node
{
    int data;
    node *link;

};

node *start;

void input()
{   
    int value;
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
         temp->link=NULL;
         node *temp1=start;
        while(temp1->link!=NULL)
          {
           temp1=temp1->link;
          }
          temp1->link=temp;
          return ;

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
    cout << endl;
    return ;

}
node* reverse(node* head)
{
    node* temp,*prev,*current;
    temp  = head;
    prev =  head->link;
    current= head->link;
    head->link = NULL;
    while(current != NULL)
    {
        current = current->link;
        prev->link = temp;
        temp = prev;
        prev = current;
    }
    head =  temp;
    return head;
}
int main()
{
    start=NULL;
    input();
    input();
    input();
    input();
    input();
    input();
    input();
start =  reverse(start);
    print();
    return 0;
}