#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;

int main()
{

	int N;

	//cout << "Adja meg a zsebtolvajok szamat  és adatait:  mag szem haj bunt: ";
	cin >> N;

	string szem[N];
	string haj[N];
	int mag[N];
	int bunt[N];
	int temp;

		
	for (int i = 0; i < N; i++)
	{
		cin >> mag[i] >> szem[i] >> haj[i] >> bunt[i];
		
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = i+1; j < N; j++)
		{
			temp = 0;
			if (mag[i] == mag[j])
			{
				temp++;
			}
			if (szem[i] == szem[j])
				{
				temp++;
			}
			if (haj[i] == haj[j])
			{
				temp++;
			}
			if (bunt[i] == bunt[j])
			{
				temp++;
			}
			if (temp >= 2)
			{
				cout << "IGEN" << endl;
				// cout <<"Van két egyenlő adat:" << endl;
				// cout << mag[j] << " " << szem[j] << " " << haj[j] << " " << bunt[j] << endl;
				// cout << mag[i] << " " << szem[i] << " " << haj[i] << " " << bunt[i] << endl;
				return 0;
			}
		}
	}

	// for (int i = 0; i < N; i++)
	// {
	// 	cout << "A zsebtolvaj adatai: " << mag[i] << " " << szem[i] << " " << haj[i] << " " << bunt[i] << endl;
	// }
	cout << "NEM" << endl;
	return 0;
}

/*
6 
168 barna barna 20
170 barna barna 21
172 zold barna 22
172 barna fekete 23
176 kek fekete 24
180 zold fekete 25
*/