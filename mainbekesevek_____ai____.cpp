#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    vector<int> a;
    vector<int> b;

    for (int i = 0; i < K; i++)
    {
        int hab1, hab2, ev1, ev2;
        cin >> hab1 >> hab2 >> ev1 >> ev2;

        for (int year = ev1; year < ev2; ++year)
        {
            b.push_back(year);
        }
    }

    int startYear = b.front(); // First war start year
    int endYear = b.back();    // Last war end year

    for (int year = startYear; year < endYear; ++year)
    {
        a.push_back(year);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<int> cv;
    set_difference(a.begin(), a.end(), b.begin(), b.end(), back_inserter(cv));

    cout << cv.size() << endl;
    for (auto& year : cv)
    {
        cout << year << " ";
    }
    cout << endl;

    return 0;
}