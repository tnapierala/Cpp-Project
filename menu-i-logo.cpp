
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>

using namespace std;


HANDLE konsola = GetStdHandle(STD_OUTPUT_HANDLE); 
COORD pozycja;

void wspolrzedne(int x, int y)	{
	pozycja.X = x;
	pozycja.Y = y;
	SetConsoleCursorPosition(konsola,pozycja);
}
void logo_menu()	{
int y=6;
for(y=0;y<50;y++)
{

		HANDLE hOut;
		hOut = GetStdHandle (STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute( hOut, FOREGROUND_BLUE | FOREGROUND_GREEN);
		
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
if(y==49) {
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
system("pause>nul");
system("cls");
}
}
}



int main()
{
	
	int menu=0, x=12;
	bool running = true;


	wspolrzedne(40,12); cout << "->";
	logo_menu();

	while(running)
	{
		
		HANDLE hOut;
		hOut = GetStdHandle (STD_OUTPUT_HANDLE);
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
        wspolrzedne(42,12);  cout << "1) Start";
		wspolrzedne(42,13);  cout << "2) Opcje";
		wspolrzedne(42,14);  cout << "3) Tabela wynikow";
		wspolrzedne(42,15); cout << "4) Tworcy";
		wspolrzedne(42,16); cout << "5) Wyjscie";

		system("pause > nul "); // dzięki nul nie wyświetla się komunikat 

		if(GetAsyncKeyState(VK_DOWN) && x != 16) //strzalka w dół
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
					wspolrzedne(42,18);
					cout << "uruchomiles gre     ";
					break;
				}


				case 1: {
					system("cls");
					wspolrzedne(42,18);
					cout << "Opcje     ";
					break;
				}

				case 2: {
					system("cls");
					wspolrzedne(42,18);
					cout << "wyniki     ";
					break;
				}

				case 3: {
					system("cls");
					wspolrzedne(42,18);
					cout << "tworcy     ";
					break;
				}

				case 4: {
					system("cls");
					wspolrzedne(42,18);
					cout << "wylaczyles gre!!!   ";
					running = false;
				}

			}

		}

	}

	wspolrzedne(42,29);
	return 0;
}
