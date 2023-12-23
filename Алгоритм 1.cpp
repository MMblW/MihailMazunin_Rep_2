#include <iostream>
using namespace std;
int
main ()
{
  int a;
  bool f = true;
  cin >> a;
  if (a != 0)
    f = false;
  else
    while (a == 0 && f)
      {
	cin >> a;
	if (a != 0)
	  f = false;
      }
  if (a > 0)
    cout << "Число > 0";
  else
    cout << "Число < 0";
}
