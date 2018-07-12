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
         node *temp=new node;
         temp->data=value;
         temp->link=NULL;
    if (start->data<temp->data)
   {
       temp->link=start;
       start=temp;
   }

   else
   {
         node *temp1=start;
         node *temp2=start;
        while(temp1->link!=NULL&&temp2!=NULL)
          {
              temp1=temp1->link;

              if((temp1->data<temp->data)&&(temp2->data>=temp->data))
              {
                  temp2->link=temp;
                  temp->link=temp1;
                  return;
              }
               temp2=temp2->link;
          }

          if(temp1->data>=temp->data)
          {
              temp->link=NULL;
              temp1->link=temp;

          }


   }


}
void del()
{
    int d;
    cout<<endl<<"enter the value to delete";
    cin>>d;
    node *temp=new node;




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
    input();
    input();
    input();
    input();
    del();
    print();

}
