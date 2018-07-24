#include <iostream>
#include <stack>
using namespace std;

void print_stack (stack <int> s){

  stack <int> temp = s;

  while(!temp.empty()){

    cout << temp.top() << " " ;
    temp.pop();
  }
  cout << "\n" ;
}

int main(){

  stack <int> s;

  s.push(10);
  s.push(5);
  s.push(33);
  s.pop();
  cout << "Top element is " << s.top() << "\n" ;
  print_stack(s);

}
