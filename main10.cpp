#include <iostream>
#include <math.h>

using namespace std;

int main()
{
int N;
int arr[]={1, 2, 3, 4, 5};
int K;
int sizearr = sizeof(arr) / sizeof(int);

cin >> K;

	for (int i = 0; i < K; i++)
	{
		cout << arr[sizearr-K+i] << " ";
	}

	for (int i = K; i < sizearr; i++)
	{
		cout << arr[i-K] << " ";
	}
	
cout << "\n";

return 0;
}
