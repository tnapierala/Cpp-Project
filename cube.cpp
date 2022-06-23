if(komenda6 == "roll"){
	
	for (int j = 1; j <= maxWyl2; j++){	
		kostki[6] = rand() % iloscNr + 1; // losowania 6 kostek
	
		// deklaracja, która kostka "graficzna" ma się wyświetlić pod daną liczbą 
	
		cout << "Wylosowana kostka nr. 6: " << endl<< endl;
		
		if(kostki[j] == 1) { cout << "	 *********"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[j] == 2) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[j] == 3) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl<< endl;
		}
		if(kostki[j] == 4) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl<< endl;
		}
		if(kostki[j] == 5) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl<< endl;
		}
		if(kostki[j] == 6) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl<< endl;
		}
	}
	
} if(komenda6 == "hold"){
	
	cout << "Wylosowana kostka nr. 6 " << endl<< endl;
		if(kostki[6] == 1) { cout << "	 *********"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[6] == 2) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl << endl;
		}
		if(kostki[6] == 3) { cout << "	 *********"<< endl;
							 cout << "	 * X     *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 *     X *"<< endl;
							 cout << "	 *********"<< endl<< endl;
		}
		if(kostki[6] == 4) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *       *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl<< endl;
		}
		if(kostki[6] == 5) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *   X   *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl<< endl;
		}
		if(kostki[6] == 6) { cout << "	 *********"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 * X   X *"<< endl;
							 cout << "	 *********"<< endl<< endl;
		}
	}