#include <iostream>
using namespace std;
int
main ()
{
  int a, b;
  bool f = true;
  cin >> b;
  if (b == 0)
    cout << "Последовательности нет";
  else
    {
      while (a < b && f)
	{
	  a = b;
	  cin >> b;
	  if (b == 0)
	    f = false;
	    
	}
	    if (f)
	      cout << "Последовательность не упорядочена";
	    else
	      cout << "Последовательность упорядочена по возрастанию";
	}
}


