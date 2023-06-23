#include<iostream>
#include<iomanip>
using namespace std;

int main() {

	// Deklarieren Variablen
	int a_Zahlenkette[100000] = {}; //Index auf 0 setzen
	int c = 0;	
	int varZahler = 0;
	int const constAnzahl= 1000;

	//Nach alle nicht Primzahlen ausrechne und dann Index auf 1 setzen
	for (int i = 2; i <= 100; i++)
	{
		if (a_Zahlenkette[i] == 0)
		{
			for (int b = 2; b <= constAnzahl; b++)
			{
				c = i * b;
				a_Zahlenkette[c] = a_Zahlenkette[c] + 1;
			}
		}
	}

	//Ausgabe von Programm
	cout << "Die Primzahlen von 1 bis 1000 sind: " << endl;
	cout << "" << endl;

	for (int d = 2; d < constAnzahl; d++)
	{
		if (a_Zahlenkette[d] == 0)
		{
			cout << d << "\t"; varZahler++;
			if (varZahler % 10 == 0)
			{
				cout << endl;
			}
		}
	}

	cout << endl << endl;
	system("pause");
	return 0;
}