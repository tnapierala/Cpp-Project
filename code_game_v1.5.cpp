#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <math.h>
#include <time.h>

using namespace std;
	
// MENU

HANDLE konsola = GetStdHandle(STD_OUTPUT_HANDLE); 
COORD pozycja;



void wspolrzedne(int x, int y)	{
	pozycja.X = x;
	pozycja.Y = y;
	SetConsoleCursorPosition(konsola,pozycja);
}


void logo_menu(){
		int y=6;
		for(y=0; y<=50; y++)
			{

			HANDLE hOut;
			hOut = GetStdHandle (STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute( hOut, FOREGROUND_BLUE | FOREGROUND_GREEN);
			Sleep(10);
		
				wspolrzedne(y,2);	cout<<"#####################################################################";
				wspolrzedne(y,3);	cout<<"#####  ######  ###   ##  ###  ##          ####       ###       ######";
				wspolrzedne(y,4);	cout<<"######  ####  ###    ##  ###  ######  ############  ####  ###########";
				wspolrzedne(y,5);	cout<<"#######  ##  ###  #  ##  ###  ######  ###########  #####  ###########";
				wspolrzedne(y,6);	cout<<"########    ###  ##  ##  ###  ######  ##########  ######  ###########";
				wspolrzedne(y,7);	cout<<"#########  ###       ##       ######  #########  #######     ########";
				wspolrzedne(y,8);	cout<<"########  ###  ####  ##  ###  ######  ########  ########  ###########";
				wspolrzedne(y,9);	cout<<"#######  ###  #####  ##  ###  ######  #######  #########  ###########";
				wspolrzedne(y,10);	cout<<"######  ###  ######  ##  ###  ######  ######  ##########  ###########";
				wspolrzedne(y,11);	cout<<"#####  ###  #######  ##  ###  ######  #####        #####        #####";
				wspolrzedne(y,12);	cout<<"#####################################################################";
					system("cls");
					
			if(y == 49) {
				wspolrzedne(16,2);	cout<<"#####################################################################";
				wspolrzedne(16,3);	cout<<"#####  ######  ###   ##  ###  ##          ####       ###       ######";
				wspolrzedne(16,4);	cout<<"######  ####  ###    ##  ###  ######  ############  ####  ###########";
				wspolrzedne(16,5);	cout<<"#######  ##  ###  #  ##  ###  ######  ###########  #####  ###########";
				wspolrzedne(16,6);	cout<<"########    ###  ##  ##  ###  ######  ##########  ######  ###########";
				wspolrzedne(16,7);	cout<<"#########  ###       ##       ######  #########  #######     ########";
				wspolrzedne(16,8);	cout<<"########  ###  ####  ##  ###  ######  ########  ########  ###########";
				wspolrzedne(16,9);	cout<<"#######  ###  #####  ##  ###  ######  #######  #########  ###########";
				wspolrzedne(16,10);	cout<<"######  ###  ######  ##  ###  ######  ######  ##########  ###########";
				wspolrzedne(16,11);	cout<<"#####  ###  #######  ##  ###  ######  #####        #####        #####";
				wspolrzedne(16,12);	cout<<"#####################################################################";
					Sleep(2000);
					
			}
		}
}	


//GRA
int kostki[5]; //tablica scian kostki
	
void gracz1(){	
	string imie; //imie gracza					
	
	int iloscNr = 6;//wszystkie kostki
	int maxWyl = 5; // ile ma wylosowac kostek
	
		srand(static_cast <int>(time(NULL)));
		
		cout << "Podaj imie: " ;
		cin >> imie;
		cout << " \n  GRACZ 1: " << imie << endl << endl;
		
	for (int i = 1; i <= maxWyl; i++){	
		Sleep(500);
		kostki[i] = rand() % iloscNr + 1; // losowania 6 kostek
		
		// deklaracja, która kostka "graficzna" ma się wyświetlić pod daną liczbą 
	
		cout << " Wylosowana kostka "<< i << ": " << endl<< endl;
		
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

	//los 2 i 3
	// deklaracja czy zostaje czy nowa kostka
	string komenda1, komenda2, komenda3, komenda4, komenda5; 
	
	int maxWyl2 = 1;//tylko jedna kostka
	int spr = 0, spr2 = 0, spr3 = 0, spr4 = 0, spr5 = 0;
// petla, ktora losuje kostki ktore chcemy zmienic 
for ( int proba=1;proba<=2; proba++) {
	cout << "	Zmiana nr " << proba << ": "<< endl;
cout << " Okresl czy kostka zostaje czy rzucasz ponownie: " << endl;
cout << " (wpisz 'hold' - aby zatrzymac   lub   'roll' - aby losowac ponownie) " << endl << endl;
/*
cout << endl << endl;
*/

do{
	cout << " Wpisz roll or hold " << endl;
	cout << "  Kostka 1: ";
	cin >> komenda1; 
	
if(komenda1 == "roll"){
	
	for (int j = 1; j <= maxWyl2; j++){	
		Sleep(500);
		kostki[1] = rand() % iloscNr + 1; // losowania 6 kostek
	
		// deklaracja, która kostka "graficzna" ma się wyświetlić pod daną liczbą 
	
		cout << "Wylosowana kostka nr. 1: " << endl<< endl;
		
		if(kostki[1] == 1) { cout << "	 *********"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[1] == 2) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[1] == 3) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[1] == 4) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[1] == 5) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[1] == 6) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}	
	}
	spr += 1;
}
if(komenda1 == "hold"){
	Sleep(500);
	cout << "Wylosowana kostka nr. 1 " << endl<< endl;			
		if(kostki[1] == 1) { cout << "	 *********"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[1] == 2) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[1] == 3) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[1] == 4) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[1] == 5) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[1] == 6) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
	
	spr += 1;
	}

}while(spr < 1);
spr -=1;
do{
	cout << " Wpisz roll or hold " << endl;
	cout << "  Kostka 2: ";
	cin >> komenda2;	
	cout << endl;
	
if(komenda2 == "roll"){
	Sleep(500);
	for (int j = 1; j <= maxWyl2; j++){	
		kostki[2] = rand() % iloscNr + 1; // losowania 6 kostek
	
		// deklaracja, która kostka "graficzna" ma się wyświetlić pod daną liczbą 
	
		cout << "Wylosowana kostka nr. 2: " << endl<< endl;
		
		if(kostki[2] == 1) { cout << "	 *********"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[2] == 2) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[2] == 3) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[2] == 4) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[2] == 5) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[2] == 6) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
	}
	spr2 += 1;	
}
if(komenda2 == "hold"){
	Sleep(500);
	cout << "Wylosowana kostka nr. 2 " << endl<< endl;
		if(kostki[2] == 1) { cout << "	 *********"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[2] == 2) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[2] == 3) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[2] == 4) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[2] == 5) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[2] == 6) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
	spr2 += 1;
  }
}while (spr2 < 1);
spr2 -= 1;
do{
	cout << " Wpisz roll or hold " << endl;
	cout << "  Kostka 3: "; 
	cin >> komenda3; 
	cout << endl;

if(komenda3 == "roll"){
	Sleep(500);
	for (int j = 1; j <= maxWyl2; j++){	
		kostki[3] = rand() % iloscNr + 1; // losowania 6 kostek
	
		// deklaracja, która kostka "graficzna" ma się wyświetlić pod daną liczbą 
	
		cout << "Wylosowana kostka nr. 3: " << endl<< endl;
		
		if(kostki[3] == 1) { cout << "	 *********"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[3] == 2) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[3] == 3) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[3] == 4) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[3] == 5) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[3] == 6) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
	}
	spr3 += 1;
}
if(komenda3 == "hold"){
	Sleep(500);
	cout << "Wylosowana kostka nr. 3 " << endl<< endl;
		if(kostki[3] == 1) { cout << "	 *********"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[3] == 2) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[3] == 3) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[3] == 4) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[3] == 5) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[3] == 6) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		spr3 += 1;
   }  

}while (spr3 < 1);
spr3 -= 1;
do{
	cout << " Wpisz roll or hold " << endl;
	cout << "  Kostka 4: ";
	cin >> komenda4; 
	cout << endl;
	
if(komenda4 == "roll"){
	Sleep(500);
	for (int j = 1; j <= maxWyl2; j++){	
		kostki[4] = rand() % iloscNr + 1; // losowania 6 kostek
	
		// deklaracja, która kostka "graficzna" ma się wyświetlić pod daną liczbą 
	
		cout << "Wylosowana kostka nr. 4: " << endl<< endl;
		
		if(kostki[4] == 1) { cout << "	 *********"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[4] == 2) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[4] == 3) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[4] == 4) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[4] == 5) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[4] == 6) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
	}
	spr4 += 1;
}
if(komenda4 == "hold"){
	Sleep(500);
	cout << "Wylosowana kostka nr. 4 " << endl<< endl;
		if(kostki[4] == 1) { cout << "	 *********"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[4] == 2) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[4] == 3) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[4] == 4) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[4] == 5) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[4] == 6) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
	spr4 += 1;
  }
}while(spr4 < 1);
spr4 -= 1;
do{ 
	cout << " Wpisz roll or hold " << endl;
	cout << "  Kostka 5: ";
	cin >> komenda5; 
	cout << endl;
	
if(komenda5 == "roll"){
Sleep(500);
	for (int j = 1; j <= maxWyl2; j++){	
		kostki[5] = rand() % iloscNr + 1; // losowania 6 kostek
	
		// deklaracja, która kostka "graficzna" ma się wyświetlić pod daną liczbą 
	
		cout << "Wylosowana kostka nr. 5: " << endl<< endl;
		
		if(kostki[5] == 1) { cout << "	 *********"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[5] == 2) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[5] == 3) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[5] == 4) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[5] == 5) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[5] == 6) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
	}
	spr5 += 1;
}
if(komenda5 == "hold"){
	Sleep(500);
	cout << "Wylosowana kostka nr. 5 " << endl<< endl;
		if(kostki[5] == 1) { cout << "	 *********"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[5] == 2) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[5] == 3) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[5] == 4) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[5] == 5) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[5] == 6) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
	spr5 += 1;
	}
	
 } while(spr5 < 1);
spr5 -= 1;
 }
 	
 	getch();
	
}

void gracz2(){
	
	string imie; //imie gracza
	
	int iloscNr = 6;//wszystkie kostki
	int maxWyl = 5; // ile ma wylosowac kostek
	
		srand(static_cast <int>(time(NULL)));
		
		cout << endl;
						cout << "			######################################################\n";
						cout << "			#####        ######        ############    ###########\n";
						cout << "			####   #####  ####   #####  #########   ##   #########\n";
						cout << "			####   #####  ####   #####  ########   ####   ########\n";
						cout << "			####   ###########         ########   ######   #######\n";
						cout << "			####   ###    ####   ###   #######              ######\n";
						cout << "			####   #####  ####   ####   #####   ##########   #####\n";
						cout << "			#####         ####   #####   ###   ############   ####\n";
						cout << "			######################################################\n\n";
		
		cout << endl << endl << "Podaj imie: " ;
		cin >> imie;
		cout << " \n  GRACZ 2: " << imie << endl << endl;

	for (int i = 1; i <= maxWyl; i++){	
	
		kostki[i] = rand() % iloscNr + 1; // losowania 6 kostek
			Sleep(500);
		// deklaracja, która kostka "graficzna" ma się wyświetlić pod daną liczbą 
	
		cout << " Wylosowana kostka "<< i << ": " << endl<< endl;
		
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

	//los 2 i 3
	// deklaracja czy zostaje czy nowa kostka
	string komenda1, komenda2, komenda3, komenda4, komenda5; 
	
	int maxWyl2 = 1;//tylko jedna kostka
	int spr = 0, spr2 = 0, spr3 = 0, spr4 = 0, spr5 = 0;
// petla, ktora losuje kostki ktore chcemy zmienic 
for ( int proba=1;proba<=2; proba++) {
	cout << "	Zmiana nr " << proba << ": "<< endl;
cout << " Okresl czy kostka zostaje czy rzucasz ponownie: " << endl;
cout << " (wpisz 'hold' - aby zatrzymac   lub   'roll' - aby losowac ponownie) " << endl << endl;
/*
cout << endl << endl;
*/

do{
	cout << " Wpisz roll or hold " << endl;
	cout << "  Kostka 1: ";
	cin >> komenda1; 
	
if(komenda1 == "roll"){
	
	for (int j = 1; j <= maxWyl2; j++){	
		Sleep(500);
		kostki[1] = rand() % iloscNr + 1; // losowania 6 kostek
	
		// deklaracja, która kostka "graficzna" ma się wyświetlić pod daną liczbą 
	
		cout << "Wylosowana kostka nr. 1: " << endl<< endl;
		
		if(kostki[1] == 1) { cout << "	 *********"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[1] == 2) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[1] == 3) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[1] == 4) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[1] == 5) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[1] == 6) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}	
	}
	spr += 1;
}
if(komenda1 == "hold"){
	Sleep(500);
	cout << "Wylosowana kostka nr. 1 " << endl<< endl;			
		if(kostki[1] == 1) { cout << "	 *********"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[1] == 2) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[1] == 3) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[1] == 4) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[1] == 5) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[1] == 6) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
	
	spr += 1;
	}
	

}while(spr < 1);
spr -= 1;
do{
	cout << " Wpisz roll or hold " << endl;
	cout << "  Kostka 2: ";
	cin >> komenda2;	
	cout << endl;
	
if(komenda2 == "roll"){
	Sleep(500);
	for (int j = 1; j <= maxWyl2; j++){	
		kostki[2] = rand() % iloscNr + 1; // losowania 6 kostek
	
		// deklaracja, która kostka "graficzna" ma się wyświetlić pod daną liczbą 
	
		cout << "Wylosowana kostka nr. 2: " << endl<< endl;
		
		if(kostki[2] == 1) { cout << "	 *********"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[2] == 2) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[2] == 3) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[2] == 4) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[2] == 5) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[2] == 6) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
	}
	spr2 += 1;	
}
if(komenda2 == "hold"){
	Sleep(500);
	cout << "Wylosowana kostka nr. 2 " << endl<< endl;
		if(kostki[2] == 1) { cout << "	 *********"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[2] == 2) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[2] == 3) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[2] == 4) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[2] == 5) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[2] == 6) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
	spr2 += 1;
  }
}while (spr2 < 1);
spr2 -= 1;
do{
	cout << " Wpisz roll or hold " << endl;
	cout << "  Kostka 3: "; 
	cin >> komenda3; 
	cout << endl;

if(komenda3 == "roll"){
	Sleep(500);
	for (int j = 1; j <= maxWyl2; j++){	
		kostki[3] = rand() % iloscNr + 1; // losowania 6 kostek
	
		// deklaracja, która kostka "graficzna" ma się wyświetlić pod daną liczbą 
	
		cout << "Wylosowana kostka nr. 3: " << endl<< endl;
		
		if(kostki[3] == 1) { cout << "	 *********"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[3] == 2) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[3] == 3) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[3] == 4) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[3] == 5) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[3] == 6) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
	}
	spr3 += 1;
}
if(komenda3 == "hold"){
	Sleep(500);
	cout << "Wylosowana kostka nr. 3 " << endl<< endl;
		if(kostki[3] == 1) { cout << "	 *********"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[3] == 2) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[3] == 3) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[3] == 4) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[3] == 5) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[3] == 6) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		spr3 += 1;
   }  

}while (spr3 < 1);
spr3 -= 1;
do{
	cout << " Wpisz roll or hold " << endl;
	cout << "  Kostka 4: ";
	cin >> komenda4; 
	cout << endl;
	
if(komenda4 == "roll"){
	Sleep(500);
	for (int j = 1; j <= maxWyl2; j++){	
		kostki[4] = rand() % iloscNr + 1; // losowania 6 kostek
	
		// deklaracja, która kostka "graficzna" ma się wyświetlić pod daną liczbą 
	
		cout << "Wylosowana kostka nr. 4: " << endl<< endl;
		
		if(kostki[4] == 1) { cout << "	 *********"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[4] == 2) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[4] == 3) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[4] == 4) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[4] == 5) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[4] == 6) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
	}
	spr4 += 1;
}
if(komenda4 == "hold"){
	Sleep(500);
	cout << "Wylosowana kostka nr. 4 " << endl<< endl;
		if(kostki[4] == 1) { cout << "	 *********"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[4] == 2) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[4] == 3) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[4] == 4) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[4] == 5) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[4] == 6) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
	spr4 += 1;
  }
}while(spr4 < 1);
spr4 -= 1;
do{ 
	cout << " Wpisz roll or hold " << endl;
	cout << "  Kostka 5: ";
	cin >> komenda5; 
	cout << endl;
	
if(komenda5 == "roll"){
Sleep(500);
	for (int j = 1; j <= maxWyl2; j++){	
		kostki[5] = rand() % iloscNr + 1; // losowania 6 kostek
	
		// deklaracja, która kostka "graficzna" ma się wyświetlić pod daną liczbą 
	
		cout << "Wylosowana kostka nr. 5: " << endl<< endl;
		
		if(kostki[5] == 1) { cout << "	 *********"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[5] == 2) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[5] == 3) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[5] == 4) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[5] == 5) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[5] == 6) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
	}
	spr5 += 1;
}
if(komenda5 == "hold"){
	Sleep(500);
	cout << "Wylosowana kostka nr. 5 " << endl<< endl;
		if(kostki[5] == 1) { cout << "	 *********"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[5] == 2) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[5] == 3) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[5] == 4) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[5] == 5) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[5] == 6) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
	spr5 += 1;
	}
  }while(spr5 < 1);
spr5 -= 1; 
 }
	getch();
	
}

//Punktacja
void pkt(){
//deklaracje do liczenia zdobytych pkt
int sumKostek=0;
int category;//wybór sumy kostek
int jedynki=0, dwojki=0, trojki=0, czworki=0, piatki=0, szostki=0;
int trzyj=0, czteryj=0, full=0, Mstrit=0, Dstrit=0, yahtzee=0, allscore=0;

cout << endl << "SUMA PUNKTOW: " << endl;
cout << "1 - Jedynki " << endl;
cout << "2 - Dwojki " << endl;
cout << "3 - Trojki " << endl;
cout << "4 - Czworki " << endl;
cout << "5 - Piatki " << endl;
cout << "6 - Szostki " << endl;
cout << "7 - 3 jednakowe: " << endl;
cout << "8 - 4 jednakowe: " << endl;
cout << "9 - Full(3 i 2): " << endl;
cout << "10 - Maly strit: " << endl;
cout << "11 - Duzy strit: " << endl;
cout << "12 - Yahtzee(5 jednakowych): " << endl;
 			
cout << endl << "Wybierz (1-12): ";
cin >> category ;

//wybór punktacji
	if (category == 1) {
		for(int i = 1; i <= 6; i++) {
				if (kostki[i] == 1){
				sumKostek = sumKostek + 1;
				jedynki = sumKostek;
				}	
			}
		cout << "\n   1 - Jedynki: \t " << jedynki << endl << endl;
	}
	if (category == 2) {
		for(int i = 1; i <= 6; i++) {
				if (kostki[i] == 2){
				sumKostek = sumKostek + 1;
				dwojki = sumKostek*2;
				}
			}
		cout << "\n   2 - Dwojki: \t " << dwojki << endl << endl;
	
	}
	if (category == 3) {
		for(int i = 1; i <= 6; i++) {
				if (kostki[i] == 3){
				sumKostek = sumKostek + 1;
				trojki = sumKostek*3;
				}	
			}
		cout << "\n   3 - Trojki: \t " << trojki << endl << endl;
	}
	if (category == 4) {
		for(int i = 1; i <= 6; i++) {
				if (kostki[i] == 4){
				sumKostek = sumKostek + 1;
				czworki = sumKostek*4;
				}	
			}
		cout << "\n   4 - Czworki: \t " << czworki << endl << endl;
	}
	if (category == 5) {
		for(int i = 1; i <= 6; i++) {
				if (kostki[i] == 5){
				sumKostek = sumKostek + 1;
				piatki = sumKostek*5;
				}
			}
		cout << "\n   5 - Piatki: \t " << piatki << endl << endl;
	}
	if (category == 6) {
		for(int i = 1; i <= 6; i++) {
				if (kostki[i] == 6){
				sumKostek = sumKostek + 1;
				szostki = sumKostek*6;
				}
			}
		cout << "\n   6 - Szostki: \t " << szostki << endl << endl;
	}
	if (category == 7) {
			if (//1 i 2 
				kostki[1] >= 1 && kostki[2] >= 1 && kostki[3] == 1 && kostki[4] == 1 && kostki[5] == 1 ||
				kostki[1] >= 1 && kostki[2] >= 1 && kostki[3] == 2 && kostki[4] == 2 && kostki[5] == 2 ||
				kostki[1] >= 1 && kostki[2] >= 1 && kostki[3] == 3 && kostki[4] == 3 && kostki[5] == 3 ||
				kostki[1] >= 1 && kostki[2] >= 1 && kostki[3] == 4 && kostki[4] == 4 && kostki[5] == 4 ||
				kostki[1] >= 1 && kostki[2] >= 1 && kostki[3] == 5 && kostki[4] == 5 && kostki[5] == 5 ||
				kostki[1] >= 1 && kostki[2] >= 1 && kostki[3] == 6 && kostki[4] == 6 && kostki[5] == 6 ||
				//2 i 3
				kostki[1] == 1 && kostki[2] >= 1 && kostki[3] >= 1 && kostki[4] == 1 && kostki[5] == 1 ||
				kostki[1] == 2 && kostki[2] >= 1 && kostki[3] >= 1 && kostki[4] == 2 && kostki[5] == 2 ||
				kostki[1] == 3 && kostki[2] >= 1 && kostki[3] >= 1 && kostki[4] == 3 && kostki[5] == 3 ||
				kostki[1] == 4 && kostki[2] >= 1 && kostki[3] >= 1 && kostki[4] == 4 && kostki[5] == 4 ||
				kostki[1] == 5 && kostki[2] >= 1 && kostki[3] >= 1 && kostki[4] == 5 && kostki[5] == 5 ||
				kostki[1] == 6 && kostki[2] >= 1 && kostki[3] >= 1 && kostki[4] == 6 && kostki[5] == 6 ||
				//3 i 4 
				kostki[1] == 1 && kostki[2] == 1 && kostki[3] >= 1 && kostki[4] >= 1 && kostki[5] == 1 ||
				kostki[1] == 2 && kostki[2] == 2 && kostki[3] >= 1 && kostki[4] >= 1 && kostki[5] == 2 ||
				kostki[1] == 3 && kostki[2] == 3 && kostki[3] >= 1 && kostki[4] >= 1 && kostki[5] == 3 ||
				kostki[1] == 4 && kostki[2] == 4 && kostki[3] >= 1 && kostki[4] >= 1 && kostki[5] == 4 ||
				kostki[1] == 5 && kostki[2] == 5 && kostki[3] >= 1 && kostki[4] >= 1 && kostki[5] == 5 ||
				kostki[1] == 6 && kostki[2] == 6 && kostki[3] >= 1 && kostki[4] >= 1 && kostki[5] == 6 ||
				//4 i 5
				kostki[1] == 1 && kostki[2] == 1 && kostki[3] == 1 && kostki[4] >= 1 && kostki[5] >= 1 ||
				kostki[1] == 2 && kostki[2] == 2 && kostki[3] == 2 && kostki[4] >= 1 && kostki[5] >= 1 ||
				kostki[1] == 3 && kostki[2] == 3 && kostki[3] == 3 && kostki[4] >= 1 && kostki[5] >= 1 ||
				kostki[1] == 4 && kostki[2] == 4 && kostki[3] == 4 && kostki[4] >= 1 && kostki[5] >= 1 ||
				kostki[1] == 5 && kostki[2] == 5 && kostki[3] == 5 && kostki[4] >= 1 && kostki[5] >= 1 ||
				kostki[1] == 6 && kostki[2] == 6 && kostki[3] == 6 && kostki[4] >= 1 && kostki[5] >= 1 ||
				//1 i 3 
				kostki[1] >= 1 && kostki[2] == 1 && kostki[3] >= 1 && kostki[4] == 1 && kostki[5] == 1 ||
				kostki[1] >= 1 && kostki[2] == 2 && kostki[3] >= 1 && kostki[4] == 2 && kostki[5] == 2 ||
				kostki[1] >= 1 && kostki[2] == 3 && kostki[3] >= 1 && kostki[4] == 3 && kostki[5] == 3 ||
				kostki[1] >= 1 && kostki[2] == 4 && kostki[3] >= 1 && kostki[4] == 4 && kostki[5] == 4 ||
				kostki[1] >= 1 && kostki[2] == 5 && kostki[3] >= 1 && kostki[4] == 5 && kostki[5] == 5 ||
				kostki[1] >= 1 && kostki[2] == 6 && kostki[3] >= 1 && kostki[4] == 6 && kostki[5] == 6 ||
				//1 i 4
				kostki[1] >= 1 && kostki[2] == 1 && kostki[3] == 1 && kostki[4] >= 1 && kostki[5] == 1 ||
				kostki[1] >= 1 && kostki[2] == 2 && kostki[3] == 2 && kostki[4] >= 1 && kostki[5] == 2 ||
				kostki[1] >= 1 && kostki[2] == 3 && kostki[3] == 3 && kostki[4] >= 1 && kostki[5] == 3 ||
				kostki[1] >= 1 && kostki[2] == 4 && kostki[3] == 4 && kostki[4] >= 1 && kostki[5] == 4 ||
				kostki[1] >= 1 && kostki[2] == 5 && kostki[3] == 5 && kostki[4] >= 1 && kostki[5] == 5 ||
				kostki[1] >= 1 && kostki[2] == 6 && kostki[3] == 6 && kostki[4] >= 1 && kostki[5] == 6 ||
				//1 i 5
				kostki[1] >= 1 && kostki[2] == 1 && kostki[3] == 1 && kostki[4] == 1 && kostki[5] >= 1 ||
				kostki[1] >= 1 && kostki[2] == 2 && kostki[3] == 2 && kostki[4] == 2 && kostki[5] >= 1 ||
				kostki[1] >= 1 && kostki[2] == 3 && kostki[3] == 3 && kostki[4] == 3 && kostki[5] >= 1 ||
				kostki[1] >= 1 && kostki[2] == 4 && kostki[3] == 4 && kostki[4] == 4 && kostki[5] >= 1 ||
				kostki[1] >= 1 && kostki[2] == 5 && kostki[3] == 5 && kostki[4] == 5 && kostki[5] >= 1 ||
				kostki[1] >= 1 && kostki[2] == 6 && kostki[3] == 6 && kostki[4] == 6 && kostki[5] >= 1 ||
				//2 i 4
				kostki[1] == 1 && kostki[2] >= 1 && kostki[3] == 1 && kostki[4] >= 1 && kostki[5] == 1 ||
				kostki[1] == 2 && kostki[2] >= 1 && kostki[3] == 2 && kostki[4] >= 1 && kostki[5] == 2 ||
				kostki[1] == 3 && kostki[2] >= 1 && kostki[3] == 3 && kostki[4] >= 1 && kostki[5] == 3 ||
				kostki[1] == 4 && kostki[2] >= 1 && kostki[3] == 4 && kostki[4] >= 1 && kostki[5] == 4 ||
				kostki[1] == 5 && kostki[2] >= 1 && kostki[3] == 5 && kostki[4] >= 1 && kostki[5] == 5 ||
				kostki[1] == 6 && kostki[2] >= 1 && kostki[3] == 6 && kostki[4] >= 1 && kostki[5] == 6 ||
				//2 i 5
				kostki[1] == 1 && kostki[2] >= 1 && kostki[3] == 1 && kostki[4] == 1 && kostki[5] >= 1 ||
				kostki[1] == 2 && kostki[2] >= 1 && kostki[3] == 2 && kostki[4] == 2 && kostki[5] >= 1 ||
				kostki[1] == 3 && kostki[2] >= 1 && kostki[3] == 3 && kostki[4] == 3 && kostki[5] >= 1 ||
				kostki[1] == 4 && kostki[2] >= 1 && kostki[3] == 4 && kostki[4] == 4 && kostki[5] >= 1 ||
				kostki[1] == 5 && kostki[2] >= 1 && kostki[3] == 5 && kostki[4] == 5 && kostki[5] >= 1 ||
				kostki[1] == 6 && kostki[2] >= 1 && kostki[3] == 6 && kostki[4] == 6 && kostki[5] >= 1 ||
				//3 i 5
				kostki[1] == 1 && kostki[2] == 1 && kostki[3] >= 1 && kostki[4] == 1 && kostki[5] >= 1 ||
				kostki[1] == 2 && kostki[2] == 2 && kostki[3] >= 1 && kostki[4] == 2 && kostki[5] >= 1 ||
				kostki[1] == 3 && kostki[2] == 3 && kostki[3] >= 1 && kostki[4] == 3 && kostki[5] >= 1 ||
				kostki[1] == 4 && kostki[2] == 4 && kostki[3] >= 1 && kostki[4] == 4 && kostki[5] >= 1 ||
				kostki[1] == 5 && kostki[2] == 5 && kostki[3] >= 1 && kostki[4] == 5 && kostki[5] >= 1 ||
				kostki[1] == 6 && kostki[2] == 6 && kostki[3] >= 1 && kostki[4] == 6 && kostki[5] >= 1 ){
					trzyj = 17;
				}					
			cout << "\n   7 - 3 jednakowe: \t " << trzyj << endl << endl;
	}
	if (category == 8) {
			if (//1
				kostki[1] >= 1 && kostki[2] == 1 && kostki[3] == 1 && kostki[4] == 1 && kostki[5] == 1 ||
				kostki[1] >= 1 && kostki[2] == 2 && kostki[3] == 2 && kostki[4] == 2 && kostki[5] == 2 ||
				kostki[1] >= 1 && kostki[2] == 3 && kostki[3] == 3 && kostki[4] == 3 && kostki[5] == 3 ||
				kostki[1] >= 1 && kostki[2] == 4 && kostki[3] == 4 && kostki[4] == 4 && kostki[5] == 4 ||
				kostki[1] >= 1 && kostki[2] == 5 && kostki[3] == 5 && kostki[4] == 5 && kostki[5] == 5 ||
				kostki[1] >= 1 && kostki[2] == 6 && kostki[3] == 6 && kostki[4] == 6 && kostki[5] == 6 ||
				
				//2
				kostki[1] == 1 && kostki[2] >= 1 && kostki[3] == 1 && kostki[4] == 1 && kostki[5] == 1 ||
				kostki[1] == 2 && kostki[2] >= 1 && kostki[3] == 2 && kostki[4] == 2 && kostki[5] == 2 ||
				kostki[1] == 3 && kostki[2] >= 1 && kostki[3] == 3 && kostki[4] == 3 && kostki[5] == 3 ||
				kostki[1] == 4 && kostki[2] >= 1 && kostki[3] == 4 && kostki[4] == 4 && kostki[5] == 4 ||
				kostki[1] == 5 && kostki[2] >= 1 && kostki[3] == 5 && kostki[4] == 5 && kostki[5] == 5 ||
				kostki[1] == 6 && kostki[2] >= 1 && kostki[3] == 6 && kostki[4] == 6 && kostki[5] == 6 ||
				//3
				kostki[1] == 1 && kostki[2] == 1 && kostki[3] >= 1 && kostki[4] == 1 && kostki[5] == 1 ||
				kostki[1] == 2 && kostki[2] == 2 && kostki[3] >= 1 && kostki[4] == 2 && kostki[5] == 2 ||
				kostki[1] == 3 && kostki[2] == 3 && kostki[3] >= 1 && kostki[4] == 3 && kostki[5] == 3 ||
				kostki[1] == 4 && kostki[2] == 4 && kostki[3] >= 1 && kostki[4] == 4 && kostki[5] == 4 ||
				kostki[1] == 5 && kostki[2] == 5 && kostki[3] >= 1 && kostki[4] == 5 && kostki[5] == 5 ||
				kostki[1] == 6 && kostki[2] == 6 && kostki[3] >= 1 && kostki[4] == 6 && kostki[5] == 6 ||
				//4
				kostki[1] == 1 && kostki[2] == 1 && kostki[3] == 1 && kostki[4] >= 1 && kostki[5] == 1 ||
				kostki[1] == 2 && kostki[2] == 2 && kostki[3] == 2 && kostki[4] >= 1 && kostki[5] == 2 ||
				kostki[1] == 3 && kostki[2] == 3 && kostki[3] == 3 && kostki[4] >= 1 && kostki[5] == 3 ||
				kostki[1] == 4 && kostki[2] == 4 && kostki[3] == 4 && kostki[4] >= 1 && kostki[5] == 4 ||
				kostki[1] == 5 && kostki[2] == 5 && kostki[3] == 5 && kostki[4] >= 1 && kostki[5] == 5 ||
				kostki[1] == 6 && kostki[2] == 6 && kostki[3] == 6 && kostki[4] >= 1 && kostki[5] == 6 ||
				//5
				kostki[1] == 1 && kostki[2] == 1 && kostki[3] == 1 && kostki[4] == 1 && kostki[5] >= 1 ||
				kostki[1] == 2 && kostki[2] == 2 && kostki[3] == 2 && kostki[4] == 2 && kostki[5] >= 1 ||
				kostki[1] == 3 && kostki[2] == 3 && kostki[3] == 3 && kostki[4] == 3 && kostki[5] >= 1 ||
				kostki[1] == 4 && kostki[2] == 4 && kostki[3] == 4 && kostki[4] == 4 && kostki[5] >= 1 ||
				kostki[1] == 5 && kostki[2] == 5 && kostki[3] == 5 && kostki[4] == 5 && kostki[5] >= 1 ||  
				kostki[1] == 6 && kostki[2] == 6 && kostki[3] == 6 && kostki[4] == 6 && kostki[5] >= 1 ){
					czteryj = 24;
					}
			cout << "\n   8 - 4 jednakowe: \t " << czteryj << endl << endl;
	}
	if (category == 9) {
	// muszę ogarnąć jak zrobić tego fulla
			//if ( ){
					full = 25;
				//}
			cout << "9 - Full(3 i 2): \t " << full << endl << endl;
	}
	if (category == 10) {
			if (kostki[1] == 1 && kostki[2] == 2 && kostki[3] == 3 && kostki[4] == 4 ||
				kostki[1] == 2 && kostki[2] == 3 && kostki[3] == 4 && kostki[4] == 5 ||
				kostki[1] == 3 && kostki[2] == 4 && kostki[3] == 5 && kostki[4] == 6 ||
					//lub
				kostki[2] == 1 && kostki[3] == 2 && kostki[4] == 3 && kostki[5] == 4 ||
				kostki[2] == 2 && kostki[3] == 3 && kostki[4] == 4 && kostki[5] == 5 ||
				kostki[2] == 3 && kostki[3] == 4 && kostki[4] == 5 && kostki[5] == 6 ){
					Mstrit = 30;
				}			
		cout << "\n   10 - Maly strit: \t\n" << Mstrit << endl;
	}
	if (category == 11) {
			if (kostki[1] == 1 && kostki[2] == 2 && kostki[3] == 3 && kostki[4] == 4 && kostki[5] == 5||
				kostki[1] == 2 && kostki[2] == 3 && kostki[3] == 4 && kostki[4] == 5 && kostki[5] == 6){
					Dstrit = 40;
				}
		cout << "\n   11 - Duzy strit: \t " << Dstrit << endl << endl;
	}
	if (category == 12) {
		if (kostki[1] == 1 && kostki[2] == 1 && kostki[3] == 1 && kostki[4] == 1 && kostki[5] == 1 ||
			kostki[1] == 2 && kostki[2] == 2 && kostki[3] == 2 && kostki[4] == 2 && kostki[5] == 2 ||
			kostki[1] == 3 && kostki[2] == 3 && kostki[3] == 3 && kostki[4] == 3 && kostki[5] == 3 ||
			kostki[1] == 4 && kostki[2] == 4 && kostki[3] == 4 && kostki[4] == 4 && kostki[5] == 4 ||
			kostki[1] == 5 && kostki[2] == 5 && kostki[3] == 5 && kostki[4] == 5 && kostki[5] == 5 ){
				yahtzee = 50;
			}
		cout << "\n   Yahtzee(5 jednakowych): \t " << yahtzee << endl << endl;
	}
	
	for (int k = 0; k<=3; k++){
	
		if (k == 3 ) {
			allscore = jedynki+(dwojki*2)+(trojki*3)+(czworki*4)+(piatki*5)+(szostki*6)+trzyj+czteryj+full+Mstrit+Dstrit+yahtzee;
		
			cout << "\n   Suma wszystkich punktow: \t " << allscore << endl;
			} 
	}
	getch();
	system("cls");
}

//GŁÓWNA
int main()
{
	
	int menu=0, x=12;
	bool running = true;


	logo_menu();
	HANDLE hOut;
	hOut = GetStdHandle (STD_OUTPUT_HANDLE);
	
	SetConsoleTextAttribute( hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED );
	wspolrzedne(40,12); cout << "->";
	
	while(running) {
		
		
		SetConsoleTextAttribute( hOut, FOREGROUND_RED | FOREGROUND_GREEN);
		
	wspolrzedne(6,2);	cout << "		###################################################################\n";
	wspolrzedne(6,3);	cout << "		###################################################################\n";
	wspolrzedne(6,4);	cout << "		##      ######        ####        ###        ###   ###    ####   ##\n";
	wspolrzedne(6,5);	cout << "		##   ##   ####   ##   ####   ########   ##   ###   ###    ####   ##\n";
	wspolrzedne(6,6);	cout << "		##   ###   ##   ###   ####      #####   ###   ##   ###    ####   ##\n";
	wspolrzedne(6,7);	cout << "		##   ####  ##  ####   ####   ########   ####   #   ###    ####   ##\n";
	wspolrzedne(6,8);	cout << "		##   #####    #####   ####        ###   #####      ###           ##\n";
	wspolrzedne(6,9);	cout << "		###################################################################\n";
	wspolrzedne(6,10);	cout << "		###################################################################\n";

	SetConsoleTextAttribute( hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED );
        wspolrzedne(42,12);  cout << "1) Start ";
		wspolrzedne(42,13);  cout << "2) Zasady gry ";
		wspolrzedne(42,14);  cout << "3) Tworcy ";
		wspolrzedne(42,15);  cout << "4) Wyjscie ";
		

		system("pause > nul "); // dzięki nul nie wyświetla się komunikat 

		if(GetAsyncKeyState(VK_DOWN) && x != 15) //strzalka w dół
			{
				wspolrzedne(40,x); cout << "  ";
				x++;
				wspolrzedne(40,x); cout << "->";
				menu++;
				continue;

			}

		if(GetAsyncKeyState(VK_UP) && x != 12) //strzałka w górę
			{
				wspolrzedne(40,x); cout << "  ";
				x--;
				wspolrzedne(40,x); cout << "->";
				menu--;
				continue;
			}

		if(GetAsyncKeyState(VK_RETURN)){ // Enter

			switch(menu){

				case 0: {
					system("cls");
					//wspolrzedne(42,18);
					
						cout << endl;
						cout << "			######################################################\n";
						cout << "			#####        ######        ############    ###########\n";
						cout << "			####   #####  ####   #####  #########   ##   #########\n";
						cout << "			####   #####  ####   #####  ########   ####   ########\n";
						cout << "			####   ###########         ########   ######   #######\n";
						cout << "			####   ###    ####   ###   #######              ######\n";
						cout << "			####   #####  ####   ####   #####   ##########   #####\n";
						cout << "			#####         ####   #####   ###   ############   ####\n";
						cout << "			######################################################\n\n";
					
							int rundy=0;	
					while (rundy<=3){
						
							rundy++;
						cout << "    Runda " << rundy << ": " << endl << endl;
							
							int exit = getch();
						if(exit == 27)
					  		{
								return main();
							}
						
								gracz1();
					  			pkt();
					  			
					    if(exit == 27)
							{
								return main();
							}
								gracz2();
								pkt();
		  
								break;
							}
						}

				case 1: {
					system("cls");
					wspolrzedne(42,18);
					cout << "Zasady gry     "  << endl << endl;
						
						cout << " Rzucamy 5 koscmi, kazdy gracz ma 3 rundy" << endl;
						cout << " Pierwszy rzut wszystkimi koscmi, nastepne dwa wybranymi" << endl;
						cout << " Po kazdym rzucie zapisujemy wynik, ktory wybierzemy z listy " << endl << endl;
						
						cout << " PUNKTY " << endl;
						cout << " 1. Punkty za pojedyncze uzyskujemy za ilosc kostek razy ilosc oczek " << endl;
						cout << " 2. Full'a uzyskamy wyrzucając: Pare i trzy jednakowe kosci " << endl;
						cout << " 3. Maly strit uzyskamy, kiedy mamy cztery kosci po kolei " << endl;
						cout << " 4. Duzy strit uzyskamy, kiedy mamy piec kosci po kolei " << endl;
						cout << " 5. Yahtzee uzyskamy, kiedy mamy piec jednakowych kosci " << endl;
												
					break;
				}

				case 2: {
					system("cls");
					wspolrzedne(42,18);
					cout << " Tworcy " << endl << endl;
					cout << "\t\t\t  Tomasz i Bartosz   OR   Bartosz i Tomasz" << endl;
					
					
					break;
				}

				case 3: {
					system("cls");
					wspolrzedne(42,18);
					cout << "Wylaczyles gre!!!   ";
					running = false;
				}			

			}

		}

	}

	wspolrzedne(42,29);
	return 0;
}
