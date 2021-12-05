// inclusion of libraries
#include <iostream>
#include <string>

// namespace
using namespace std;


int main(){

	/*
	 * Aufgabe: Nach jeder vollen Stunde soll die Uhrzeit mit einem Tabulatorsprung angezeigt werden.
	 *
	 */

	/**/
	int		h,		// h,	hour,	Stunde
			m,		// m,	minute,	Minute
			s;		// s,	second,	Sekunde

	string	zeroH,	// "zero value" of hour, minute, and second
			zeroM,	// intention: output a 0 in front of single digit values
			zeroS;

	for (	h	=	0;				// Stunden
			h	<=	23;
			h++){
		switch (h){
			case 0: zeroH = "0"; break;
			case 1: zeroH = "0"; break;
			case 2: zeroH = "0"; break;
			case 3: zeroH = "0"; break;
			case 4: zeroH = "0"; break;
			case 5: zeroH = "0"; break;
			case 6: zeroH = "0"; break;
			case 7: zeroH = "0"; break;
			case 8: zeroH = "0"; break;
			case 9: zeroH = "0"; break;
			default: zeroH = "";
		}

		cout	<< "\t";
		for (	m	=	0;			// Minuten
				m	<=	59;
				m++){
			switch (m){
				case 0: zeroM = "0"; break;
				case 1: zeroM = "0"; break;
				case 2: zeroM = "0"; break;
				case 3: zeroM = "0"; break;
				case 4: zeroM = "0"; break;
				case 5: zeroM = "0"; break;
				case 6: zeroM = "0"; break;
				case 7: zeroM = "0"; break;
				case 8: zeroM = "0"; break;
				case 9: zeroM = "0"; break;
				default: zeroM = "";
			}

			for (	s	=	0;		// Sekunden
					s	<=	59;
					s++){
				switch (s){
					case 0: zeroS = "0"; break;
					case 1: zeroS = "0"; break;
					case 2: zeroS = "0"; break;
					case 3: zeroS = "0"; break;
					case 4: zeroS = "0"; break;
					case 5: zeroS = "0"; break;
					case 6: zeroS = "0"; break;
					case 7: zeroS = "0"; break;
					case 8: zeroS = "0"; break;
					case 9: zeroS = "0"; break;
					default: zeroS = "";
				}
				/**/

				cout	<< zeroH << h << "."
						<< zeroM << m << "."
						<< zeroS << s << "\n";
			}
		}
	}
	/**/

	/**
	cout	<<	"test ... \n";
	/**/

	/**/
	cin.ignore();						// use this block to pause progress in console, unpauses on pressing any button. cin.ignore(); may not always be necessary.
	cin.get();
	cout	<<	"\033[2J\033[1;1H";		// clears screen, string of special characters that will translate to a clear screen command.
	/**/

	return 0;

}

/*
	compile:
g++ cpp3.cpp -o cpp3

	run from console:
./cpp3

	clear, compile, run:
clear && g++ cpp3.cpp -o cpp3 && ./cpp3
*/
