#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int arr[2][4] = {{1, 2, 3, 4},{5, 6, 7, 8}};
	int K=2;
	int N = 4;

	if (K < 4)
	{
		// 1st line
		for (int i = 0; i < K; i++)
		{
			cout << arr[1][K-1-i] << " ";
		}
		for (int i = K; i < N; i++)
		{
			cout << arr[0][i-K] << " ";
		}
		cout << endl;
		// 2nd line
		for (int i = 0; i < N-K; i++)
		{
			cout << arr[1][N-1-i] << " ";
		}
/*		for (int i = N-K; i < N; i++)
		{
			cout << arr[0][i] << " ";
		}
*/
		
	}


	return 0;
}

//  1 2 3 4
//  5 6 7 8


//  6 5 1 2
//  7 8 4 3