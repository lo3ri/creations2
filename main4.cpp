#include <iostream>

using namespace std;


int main()
{
int mA[]{1, 2, 3, 4};
int C=0;

for(int i; i=0; i<sizeof(mA[]); i++)
  {
  C=C+mA[i];
}
C=C/sizeof(mA[]);
cout << C;




return 0;
}
