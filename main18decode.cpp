#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <math.h>
#include <unordered_map>
#include <map>

using namespace std;

int main()
{
// char tablazat[3][9] = {
//         { 'i', 'o', 'q', 'h', 'b', 'f', 'y', 'l', 'w'},
//         { 'n', 'r', 'a', 'g', 's', 'k', 't', 'e', 'z'},
//         { 'd', 'u', 'p', 'x', 'c', 'j', 'v', 'm', ' '}
//     };
// char betu[9] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};
map<string, string> betuk = { {"aa", "i"}, {"ba", "n"}, {"ca", "d"}, 
							  {"ab", "o"}, {"bb", "r"}, {"cb", "u"}, 
							  {"ac", "q"}, {"bc", "a"}, {"cc", "p"},  
							  {"ad", "h"}, {"bd", "g"}, {"cd", "x"}, 
							  {"ae", "b"}, {"be", "s"}, {"ce", "c"}, 
							  {"af", "f"}, {"bf", "k"}, {"cf", "j"}, 
							  {"ag", "y"}, {"bg", "t"}, {"cg", "v"}, 
							  {"ah", "l"}, {"bh", "e"}, {"ch", "m"}, 
							  {"ai", "w"}, {"bi", "z"}, {"ci", " "} };
string szo;

getline (cin, szo);

int sizeszo=size(szo);

for(int k=0;k<sizeszo;k+=2)
{
	string ketto = szo.substr(k,2);
//	cout << ketto << " ";
	cout << betuk[ketto];
}

return 0;	
}