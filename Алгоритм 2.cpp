#include <iostream>
using namespace std;
int
main ()
{
  int a, z;
  bool f = true;
  cout << "Введите число Z" << endl;
  cin >> z;
  cout << "Вводите числа последовательности" << endl;
  cin >> a;
  if (a == 0)
    cout << "Последовательности нет";
  else
    {
      while (a != z && f)
	{
	  cin >> a;
	  if (a == 0)
	    f = false;
	    
	}
	    if (f)
	      cout << "Число Z есть";
	    else
	      cout << "Числа Z нет";
	}
}



