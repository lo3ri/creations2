#include <iostream>
using namespace std;
int main()
{
	// Create matrix X with random numbers
  float X[10][10];
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      X[i][j] = rand() % 100;
    }
  }
  // Print out all elements of matrix X
  for (int i = 0; i < 10; i++) {
	for (int j = 0; j < 10; j++) {  
		cout << X[i][j] << " ";	
	}
	cout << endl;
  }






	return 0;
}