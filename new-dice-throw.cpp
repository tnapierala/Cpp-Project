#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <math.h>
#include <time.h>

using namespace std;

	
	
void kostka(){
	
	int kostki[6]; //wszystkie kulki
	int iloscNr = 6;//wszystkie kulki
	int maxWyl = 6; // ile ma wylosowac
	
	//los 2
	char noweK[6]; // deklaracja czy zostaje czy nowa kostka
	int maxWyl2 = 1;//tylko jedna kostka
	
	int nowaKK[6]; // nowe kostki
	
	//int liczba1; // zmienna do wylosowanej 1, ale nie używałem
	//int liczba2; // zmienna do wylosowanej 2, ale nie używałem

	srand(static_cast <int>(time(NULL)));


	for (int i = 1; i <= maxWyl; i++)
	{	
	
		kostki[i] = rand() % iloscNr + 1; // losowania 6 kostek
		//liczba1 = rand() % iloscNr + 1; // wypisanie pokolei zmeinnej, ale udało mi się w inny sposób
		//liczba2 = rand() % iloscNr + 1;
	}

	for (int i = 1; i <= maxWyl; i++)
	{	
		// deklaracja, która kostka "graficzna" ma się wyświetlić pod daną liczbą 
	
		cout << "Wylosowana kostaka "<< i << ": " << endl<< endl;
		
		if(kostki[i] == 1) { cout << "	 *********"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[i] == 2) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[i] == 3) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl<< endl;
		}
		if(kostki[i] == 4) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl<< endl;
		}
		if(kostki[i] == 5) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl<< endl;
		}
		if(kostki[i] == 6) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl<< endl;
		}
		
	}
/*
//To jeszcze będę ogarniał ;) bo musze teraz zrobić takżeby zastępować stare elementy tablicy
//albo zmienić tablice w dodawaniu wyników, jak już się te 3 razy rzuci i zmieni kostki
 
cout << "Określ czy kostka sostaje (użyj 'y' or 'n') " << endl;
cout << "Kostka 1: ";
cin >> noweK[1]; 
cout << "Kostka 2: ";
cin >> noweK[2]; 
cout << "Kostka 3: "; 
cin >> noweK[3]; 
cout << "Kostka 4: ";
cin >> noweK[4]; 
cout << "Kostka 5: ";
cin >> noweK[5];  
cout << "Kostka 6: ";
cin >> noweK[6]; 

if(noweK[1]=='y'){
	for (int j = 1; j <= maxWyl2; j++)
	{	
	
		nowaKK[1] = rand() % iloscNr + 1; // losowania 6 kostek
	
		// deklaracja, która kostka "graficzna" ma się wyświetlić pod daną liczbą 
	
		cout << "Wylosowana kostka nr. "<< j << ": " << endl<< endl;
		
		if(nowaKK[j] == 1) { cout << "	 *********"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(nowaKK[j] == 2) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(nowaKK[j] == 3) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl<< endl;
		}
		if(nowaKK[j] == 4) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl<< endl;
		}
		if(nowaKK[j] == 5) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl<< endl;
		}
		if(nowaKK[j] == 6) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl<< endl;
		}	
	}
} if(noweK[1]=='n'){
	cout << kostki[1] << endl;
}
if(noweK[2]=='y'){
	
} if(noweK[2]=='n'){
	cout << kostki[2] << endl;
}
if(noweK[3]=='y'){
	
} if(noweK[3]=='n'){
	cout << kostki[3] << endl;
}
if(noweK[4]=='y'){
	
} if(noweK[4]=='n'){
	cout << kostki[4] << endl;
}
if(noweK[5]=='y'){
	
} if(noweK[5]=='n'){
	cout << kostki[5] << endl;
}
if(noweK[6]=='y'){
	
} if(noweK[6]=='n'){
	cout << kostki[6]<< endl ;
}
*/

//deklaracje do sumowania
int sumKostek=0;
int category;//wybór sumy kostek
int jedynki, dwojki, trojki, czworki, piatki, szostki;

cout << endl << "SUMA PUNKTOW: " << endl;
cout << "1 - Jedynki " << endl;
cout << "2 - Dwojki " << endl;
cout << "3 - Trojki " << endl;
cout << "4 - Czworki " << endl;
cout << "5 - Piatki " << endl;
cout << "6 - Szostki " << endl;
			
cout << endl << "Choice (1-14): ";
cin >> category ;

	if (category == 1) {
		for(int i = 1; i <= 6; i++)
			{
				if (kostki[i] == 1){
				sumKostek = sumKostek + 1;
				jedynki = sumKostek;
				}	
			}
		cout << "\n   1 - Jedynki: \t" << jedynki << endl;
		}
		
	if (category == 2) {
		for(int i = 1; i <= 6; i++)
			{
				if (kostki[i] == 2){
				sumKostek = sumKostek + 1;
				dwojki = sumKostek*2;
				}
			}
		cout << "\n   2 - Dwojki: \t" << dwojki << endl;
		}
		
	if (category == 3) {
		for(int i = 1; i <= 6; i++)
			{
				if (kostki[i] == 3){
				sumKostek = sumKostek + 1;
				trojki = sumKostek*3;
				}	
			}
		cout << "\n   3 - Trojki: \t" << trojki << endl;
		}
		
	if (category == 4) {
		for(int i = 1; i <= 6; i++)
			{
				if (kostki[i] == 4){
				sumKostek = sumKostek + 1;
				czworki = sumKostek*4;
				}	
			}
		cout << "\n   4 - Czworki: \t" << czworki << endl;
		}
		
	if (category == 5) {
		for(int i = 1; i <= 6; i++)
			{
				if (kostki[i] == 5){
				sumKostek = sumKostek + 1;
				piatki = sumKostek*5;
				}
			}
		cout << "\n   5 - Piatki: \t" << piatki << endl;
		}
		
	if (category == 6) {
		for(int i = 1; i <= 6; i++)
			{
				if (kostki[i] == 6){
				sumKostek = sumKostek + 1;
				szostki = sumKostek*6;
				}
			}
		cout << "\n   6 - Szostki: \t" << szostki << endl;
		}	
	}


int main()
{
    
	kostka();

	
	return 0;
}
