#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main(){
string myText;

ifstream MyReadFile("fajl.txt");

while (getline (MyReadFile, myText)) {
	cout << myText << "\n";
}
MyReadFile.close();

return 0;	
}