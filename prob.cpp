// write me a program to calculate the difference between two vectors
#include <iostream>

using namespace std;

int main() 
{
	int a[] = {1, 2, 3, 4, 5};
	int b[] = {1, 2, 3, 4, 6};
	int c[] = {1, 2, 3, 4, 5};

	for (int i = 0; i < 5; i++) // make it for any size of arrays
		{
		c[i] = a[i] - b[i];
		cout << c[i] << endl;

		}
}
	

