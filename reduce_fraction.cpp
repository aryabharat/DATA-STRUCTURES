#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long


void reduce_fraction (ull &numerator, ull &denominator)
{
  ull small = numerator >= denominator ? denominator : numerator;
  ull hcf = -1;
  for (int i = denominator * numerator; i > 1; i--)
   {
      if ((denominator % i == 0) && (numerator % i == 0)) {
               hcf = i;
               denominator /= hcf;
               numerator /= hcf;
        }

    }
}

int main()
{
  ull a = 1000, b = 15;

  reduce_fraction(a, b);

  cout << a << "/" << b;

}
