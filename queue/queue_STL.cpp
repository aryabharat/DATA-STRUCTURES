#include <iostream>
#include <queue>
using namespace std;

/*
The functions supported by queue are :
empty() – Returns whether the queue is empty
size() – Returns the size of the queue
front() – Returns a reference to the first element of the queue
back() – Returns a reference to the last element of the queue
push(g) – Adds the element ‘g’ at the end of the queue
pop() – Deletes the first element of the queue
*/

void print_q(queue <int> q)
{
  while(!q.empty())
  {
    cout << q.front() << " ";
    q.pop();
  }
}

 int main()
 {
   queue <int> q;

   q.push(5);
   q.push(10);
   q.push(100);
   print_q(q);
 }
