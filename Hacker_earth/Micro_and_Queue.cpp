#include <iostream>
#include <queue>
using namespace std;

 int main()
 {
   queue <int> q;
   int t;
   cin >> t;
   while(t--){

      char c;
      cin >> c;
      if(c == 'E')
      {
        int n;
        cin >> n;
        q.push(n);
        cout << q.size() << "\n";
      }
      else
      {
        if(q.size() == 0){
          cout << -1 << " " << 0 << "\n";
        }
        else{
        cout << q.front() << " ";
        q.pop();
        cout << q.size() << "\n";
        }
      }
   }

 }
