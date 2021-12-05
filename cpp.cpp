// inclusion of libraries
#include <iostream>
#include <string>

// namespace
using namespace std;


int main(){

	/**/
	int h, m, s;
	for (	h = 0;			// Stunden
			h <= 23;
			h++){

		for (	m = 0;		// Minuten
				m <= 59;
				m++){

			for (	s = 0;	// Sekunden
					s <= 59;
					s++){
				cout	<< h << "."
						<< m << "."
						<< s << "\n";
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
g++ cpp.cpp -o cpp

	run from console:
./cpp

	clear, compile, run:
clear && g++ cpp.cpp -o cpp && ./cpp &&
*/
