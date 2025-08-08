#include <iostream>

using namespace std;

int main();
{
 int array[10] = {2,3,5,7,1,4,8,6,0,9};
 int N;
 int A=sizeof(array);
 for (int I= 0, I < A, I++)
{
 for (int I= 0, I < A, I++)
   {N=array[I];
  if (N>array[(I+1)])
   {array[I]= array[(I+1)];
   array[(I+1)]= N;}
 }
 }
  return 0;
}