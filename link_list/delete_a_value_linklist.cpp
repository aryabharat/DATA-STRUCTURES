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
          node *temp = new node;
          temp->data = value;
          temp->link = NULL;
          start = temp;
          return;
      }

   else
      {
         node *temp = new node;
         temp->data = value;
         temp->link = NULL;
         node *temp1 = start;

        while(temp1->link != NULL)
          {
           temp1 = temp1->link;
          }
          temp1->link = temp;
          return ;
   }

}
void del()
{
    int d;
    cout << endl << "enter the value to delete";
    cin >> d;
    node *temp1, *temp2;
    temp1 = temp2 = start;

    while(temp1->link != NULL && temp2->link != NULL)
    {
        temp1 = temp1->link;
        if(temp->data == d)
        {


        }

    }




}
 void print()
{
    node *temp = start;
    while(temp != NULL)
    {
        cout << temp->data << "     ";
        temp = temp->link;
    }
    return ;

}

int main()
{
    start = NULL;
    input();
    input();
    input();
    input();
    input();
    input();
    del();
    print();

}
