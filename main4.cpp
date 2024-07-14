#include <iostream>

using namespace std;


int main()
{
    int mA[2][4] = {{1, 2, 3, 4} , {200, 100, 150, 200}};
    float C=0, M=0;
    int sizemA = sizeof(mA) / sizeof(int)/2;

   // cout << sizemA  << endl;

    for(int i=0; i< sizemA; i++)
        {
          C += mA[0][i]*(mA[1][i]/100);
          M += mA[1][i]/100; 
        }
    C /= M;
    cout << "Súlyozott átlag: " << C << endl;

    return 0;
}
