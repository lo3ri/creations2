#include <iostream>

using namespace std;


int main()
{
    int mA[4] = {1, 2, 3, 4};
    float C=0;
    int sizemA = sizeof(mA) / sizeof(int);

    cout << sizemA << endl << mA[0] << endl;

    for(int i=0; i< sizemA; i++)
        {
          C=C+mA[i];
        }
    C=C/sizemA;
    cout << "Átlag: " << C << endl;

    return 0;
}
