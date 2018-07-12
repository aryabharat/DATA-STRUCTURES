#include <iostream>
#include <stack>
using namespace std;

int main(){
  stack <int> s;
  int q;
  cin >> q;
  while (q--)
  {

    int type, price;
    cin >> type;

    if(type == 2){
      cin >> price;
      s.push(price);
    }
    else
    {
      if(s.empty())
      cout << "No Food" << "\n";
      else
      {
        cout << s.top() << "\n";
        s.pop();
      }

    }
  }
}
