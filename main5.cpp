#include <iostream>

using namespace std;

int main()
{
	
	int ev,ho,nap; //születési év
	int Mev,Mho, Mnap; //idei év
	int kor; //kor

	printf("Add meg a szül.dátumodat ev.ho.nap formátumban\n");
	scanf("%d.%d.%d",&ev,&ho,&nap);
	printf("Add meg a jelenlegi dátumot ev.ho.nap formátumban\n");
	scanf("%d.%d.%d",&Mev,&Mho,&Mnap);
	kor = Mev - ev;
	if (ho- Mho < 0)
		cout << kor << endl;
	else if (ho - Mho == 0 && nap -Mnap < 0)
		cout << kor << endl;
	else
		cout << kor-1 << endl;



return 0;




}