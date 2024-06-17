#include <iostream>

using namespace std;

int main()
{

int N;
int C=0;
int O;

cout << "Add meg N-t!\n";
cin >> N;

  for(int i=0; i<=N; i++)
  {
	  O = C*N ;

	   if(C<N)
	  {
		  C++;
	  }


  }
  cout << "A végeredmény, ami N^2: " << O << endl;

return 0;
}
