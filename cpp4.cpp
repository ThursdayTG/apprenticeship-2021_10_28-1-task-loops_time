// inclusion of libraries
#include <iostream>
#include <string>

// namespace
using namespace std;


int main(){

	/*
	 * Aufgabe:
	 * Nach jeder vollen Stunde soll die Uhrzeit mit zwei Tabulatorsprüngen angezeigt werden.
	 * Nach jeder vollen Minute soll die Uhrzeit mit einem Tabulatorsprung angezeigt werden.
	 */

	/**/
	int		h,		// h,	hour,	Stunde
			m,		// m,	minute,	Minute
			s;		// s,	second,	Sekunde

	string	zeroH,	// "zero value" of hour, minute, and second
			zeroM,	// intention: output a 0 in front of single digit values
			zeroS,
			tabM,
			tabS;

	for (	h	=	0;				// Stunden
			h	<	24;
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

		for (	m	=	0;			// Minuten
				m	<	60;
				m++){
			switch (m){
				case 0:
						tabM	= "\t";
						zeroM	= "0";
					break;
				case 1: tabM	= "";zeroM = "0"; break;
				case 2: tabM	= "";zeroM = "0"; break;
				case 3: tabM	= "";zeroM = "0"; break;
				case 4: tabM	= "";zeroM = "0"; break;
				case 5: tabM	= "";zeroM = "0"; break;
				case 6: tabM	= "";zeroM = "0"; break;
				case 7: tabM	= "";zeroM = "0"; break;
				case 8: tabM	= "";zeroM = "0"; break;
				case 9: tabM	= "";zeroM = "0"; break;
				default:
					tabM	= "";
					zeroM	= "";
			}

			for (	s	=	0;		// Sekunden
					s	<	60;
					s++){
				switch (s){
					case 0:
						tabS	= "\t";
						zeroS	= "0";
					break;
					case 1: tabS	= "";zeroS = "0"; break;
					case 2: tabS	= "";zeroS = "0"; break;
					case 3: tabS	= "";zeroS = "0"; break;
					case 4: tabS	= "";zeroS = "0"; break;
					case 5: tabS	= "";zeroS = "0"; break;
					case 6: tabS	= "";zeroS = "0"; break;
					case 7: tabS	= "";zeroS = "0"; break;
					case 8: tabS	= "";zeroS = "0"; break;
					case 9: tabS	= "";zeroS = "0"; break;
					default:
						tabS	= "";
						zeroS	= "";
				}
				/**/

				cout	<< tabM << tabS
						<< zeroH << h << "."
						<< zeroM << m << "."
						<< zeroS << s << "\n";

				tabM	= "";
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
g++ cpp4.cpp -o cpp4

	run from console:
./cpp4

	clear, compile, run:
clear && g++ cpp4.cpp -o cpp4 && ./cpp4
*/
