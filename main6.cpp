#include <iostream>
#include <math.h>

using namespace std;

int main()
{
int N;
int C;
int F;


cin >> N;
F = sqrt(N);

for (int i=2; i<=F; i++)
{
	C = N/i;
	if (C*i == N)
		{
		cout << N << " is not prime and can be divided by " << i << endl;
		return 0;
		}

}
cout << N << " is prime\n";






	return 0;
}
