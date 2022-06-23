#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;



int main()
{
	int kosci [5];
	char reroll [5];
	int runda;
	int proba;
	
	
	cout << "Rzucamy koscmi\n";
		
	srand(time(NULL));
kosci[0]=rand() % 6+1;
kosci[1]=rand() % 6+1;
kosci[2]=rand() % 6+1;
kosci[3]=rand() % 6+1;
kosci[4]=rand() % 6+1;	
	 
	runda=1;
	
	while (runda<=13) {
		  
	for (proba=1;proba<=3; proba++) {
		
	 cout << "\nW " << proba << " probie wylosowales nastepujace kosci: \n\n"
	 	  << kosci[0] << " -kosc nr 1\n" 
	 	  << kosci[1] << " -kosc nr 2\n" 
		  << kosci[2] << " -kosc nr 3\n" 
		  << kosci[3] << " -kosc nr 4\n" 
		  << kosci[4] << " -kosc nr 5\n"
		  << "\n\nWpisz 'n' - aby kosc zostala lub 'y' - aby losowac jeszcze raz\n";
	
		  
	cin >> reroll[0] >> reroll[1] >> reroll[2] >> reroll[3] >> reroll[4];
		  
		if (reroll[0]=='y'){
		kosci[0]=rand() % 6+1;
		}
		if(reroll[0]=='n'){
		kosci[0];
		}
		
		if (reroll[1]=='y'){
		kosci[1]=rand() % 6+1;
		}
		if(reroll[1]=='n'){
		kosci[1];
		}
		
		if (reroll[2]=='y'){
		kosci[2]=rand() % 6+1;
		}
		if(reroll[2]=='n'){
		kosci[2];
		}
		if (reroll[3]=='y'){
		kosci[3]=rand() % 6+1;
		}
		if(reroll[3]=='n'){
		kosci[3];
		}
		if (reroll[4]=='y'){
		kosci[4]=rand() % 6+1;
		}
		if(reroll[4]=='n'){
		kosci[4];	
		}
}
runda++;
}
}