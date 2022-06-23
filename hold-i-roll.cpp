#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>  
#include <Windows.h>
#include <string>

using namespace std;



int main()
{
	int kosci [5];
	
	string komenda1;
	string komenda2;
	string komenda3;
	string komenda4;
	string komenda5;
	

	
	int runda;
	int proba;
	
	
	cout << "Rzucamy koscmi\n";
		
	srand(time(NULL));
kosci[0]=rand() % 30+1;
kosci[1]=rand() % 30+1;
kosci[2]=rand() % 30+1;
kosci[3]=rand() % 30+1;
kosci[4]=rand() % 30+1;	
	 
	runda=1;
	
	while (runda<=13) {
		  
	for (proba=1;proba<=3; proba++) {
		
	 cout << "\nW " << proba << " probie wylosowales nastepujace kosci: \n\n"
	 	  << kosci[0] << " -kosc nr 1\n" 
	 	  << kosci[1] << " -kosc nr 2\n" 
		  << kosci[2] << " -kosc nr 3\n" 
		  << kosci[3] << " -kosc nr 4\n" 
		  << kosci[4] << " -kosc nr 5\n"
		  << "\n\nWpisz 'hold' - aby kosc zostala lub 'roll' - aby losowac jeszcze raz\n";
	
		  
		  cin >> komenda1 
		  	  >> komenda2 
			  >> komenda3 
			  >> komenda4 
			  >> komenda5;

		if (komenda1 == "roll") {
		kosci[0]=rand() % 30+1;
		}
		else if(komenda1 == "hold") {
		kosci[0];
		}
		
			
		if (komenda2 == "roll") {
		kosci[1]=rand() % 30+1;
		}
		else if(komenda2 == "hold") {
		kosci[1];
		}
		
		
		
		if (komenda3 == "roll") {
		kosci[2]=rand() % 30+1;
		}
		else if(komenda3 == "hold") {
		kosci[2];
		}
		
		
		
		if (komenda4 == "roll") {
		kosci[3]=rand() % 30+1;
		}
		else if(komenda4 == "hold") {
		kosci[3];
		}
		
		
		
		if (komenda5 == "roll") {
		kosci[4]=rand() % 30+1;
		}
		else if(komenda5 == "hold") {
		kosci[4];	
		}
		
		
}

runda++;
}
}