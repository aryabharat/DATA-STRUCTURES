#include <iostream>
#include <deque>
using namespace std;
/*
pop_back() : Deletes elemet from back
pop_front() : Deletes elemet from front
front()  : Returns front element
back()    : Returns back element
at(x)   : Returns elemet at position x
*/

void print_dq(deque <int> q)
{
  deque <int> :: iterator it;

  for(it = q.begin(); it < q.end(); it++)
  {
    cout << *it << " ";
  }
  cout << "\n";

}

 int main()
 {
   deque <int> q;

   q.push_back(5);
   print_dq(q);
   q.push_front(10);
   print_dq(q);
   q.push_back(100);
   print_dq(q);
   q.push_front(500);
   print_dq(q);
 }
