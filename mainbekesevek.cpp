#include <iostream>
#include <math.h>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
int N;
int K;
int hab1;
int hab2;
int ev1;
int ev2;
int M = 100000;
int C = 0;
vector<int> b;
vector<int> cv;
vector<int> a;

cin >> N;
cin >> K;

for (int i = 1; i <= K; i++)
{
	
	cin >> hab1 >> hab2 >> ev1 >> ev2;

		if (ev1 < M) 
		{
		   M = ev1;
		}
		if (ev2 > C) 
		{
		   C = ev2;
		}

		for (int i = ev1; i <= ev2; i++)
		{
			b.push_back(i);	

		}
}

for (int i = M; i <= C; i++)
{
	a.push_back(i);	

}

sort(begin(a), end(a));
sort(begin(b), end(b));

set_difference(std::begin(a), std::end(a), begin(b), std::end(b), back_inserter(cv));


cout << cv.size() << "\n" << endl;
for (auto& s : cv)
         cout << s;	

	return 0;
}
