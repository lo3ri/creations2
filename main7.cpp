#include <iostream>
#include <math.h>

using namespace std;

int main()
{
int arr[] = {10, 13, 9, 18, 29};
int min= arr[0];
int max= arr[0];
int size = sizeof(arr)/ sizeof(int);

	for (int i=1; i < size; i++ )
		{
			
			if (arr[i] > max)
			{
				max = arr[i];
			}
			else if (arr[i]< min)
			{
				min = arr[i];

			}

			
		}
cout << min << endl;
cout << max << endl;
	return 0;
}

