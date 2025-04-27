#include <iostream>
#include <math.h>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;


int vonal(int i, int Iv, int IIv)
{
	if (i < Iv)
		return 1;
	else if (i < IIv + Iv)
		return 2;
	else
		return 3;
}


int main()
{
 string Ind;
 string Veg;
 int Iv;
 int IIv;
 int IIIv;
vector<string> v;
int firstDuplicate[3];
int secondDuplicate[3];
bool hasDuplicates = false;
string All;
int K = 0;
int indi;
int vegi;
string irany;
int s[3];


cin >> Ind;
cin >> Veg;
cin >> Iv;
s[0] = 0;
s[1] = Iv;


	for (int i = 0; i < Iv; i++)
		 {
		 	
		 	cin >> All;
		 	v.push_back(All);
		 }
cin >> IIv;
s[2] = Iv + IIv;

	 for (int i = 0; i < IIv; i++)
		 {
		 	cin >> All;
		 	v.push_back(All);
		 }
cin >> IIIv;
	 for (int i = 0; i < IIIv; i++)
		 {
		 	cin >> All;
		 	v.push_back(All);
		 }	 

    for (size_t i = 0; i < v.size(); ++i) 
    {
        for (size_t j = i + 1; j < v.size(); ++j) 
        {
            if (v[i] == v[j]) 
            {
                firstDuplicate[K] = i;
                secondDuplicate[K] = j;
                hasDuplicates = true;
                K++;
            }
        }
    }
   if (vonal(indi, Iv, IIv) == 1)
   { 
   		for (int i = 0; i < v.size(); i++)
   		{
   			if (v[i] == Ind)
   			{
   				indi = i;
   			}
   			if (v[i] == Veg)
   			{
   				vegi = i;
   			}
   		}
   	}
   	// Amikor ugyanazon a vonalon vannak
   	if (vonal(indi, Iv, IIv) == vonal(vegi, Iv, IIv))
   	{
   		if (vegi < indi)
   		{
   			irany = v[s[vonal(vegi, Iv, IIv)-1]]; // a vonal kezdő állomása
   		}
   		else
   			irany = v[s[vonal(vegi, Iv, IIv)]-1]; // a vonal végállomása (ami a következő vonal kezdő állomása előtt van)
   		cout << vonal(vegi,Iv, IIv) << ". metrovonal " << irany << " fele " << indi-vegi << " allomas\n";
   	}

   	// Amikor egy átszállással megoldható
   	for(int i = 0; i<K; i++)
   	{
   		if (vonal(indi, Iv, IIv) == vonal(firstDuplicate[i], Iv, IIv) && vonal(vegi, Iv, IIv) == vonal(secondDuplicate[i], Iv, IIv))
   		{
   			// TODO
   		}
   	}
   	vi = vonal(indi, Iv, IIv) // s[v-1] -- s[v]-1


    for (int i = 0; i < K; i++)
    	cout << firstDuplicate[i] << " " << secondDuplicate[i] << endl;

    cout << Ind << " " << Veg << endl;
    for (size_t i = 0; i < v.size(); ++i) 
    {
		cout << v[i] << " ";
	}


	return 0;
}




/* i a megállo sorszama
