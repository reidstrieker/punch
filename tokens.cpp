#include "tokens.h"

numInt::numInt(string numData, int numLine) {
	subType = "INT";
	line = numLine;
	data = stoi(numData);

	cout << "numInt created with " << data << endl;
}

numFloat::numFloat(string numData, int numLine) {
	subType = "INT";
	line = numLine;
	data = stof(numData);

	cout << "numFloat created with " << data << endl;
}

leftPar::leftPar(int numLine) {
	subType = "LEFT_PAR";
	line = numLine;

	cout << "leftPar created" << endl;
}

rightPar::rightPar(int numLine) {
	subType = "RIGHT_PAR";
	line = numLine;

	cout << "rightPar created" << endl;
}

arithPlus::arithPlus(int numLine) {
	subType = "PLUS";
	line = numLine;

	cout << "arithPlus created" << endl;
}

arithMinus::arithMinus(int numLine) {
	subType = "MINUS";
	line = numLine;

	cout << "arithMinus created" << endl;
}

arithMult::arithMult(int numLine) {
	subType = "MULT";
	line = numLine;

	cout << "arithMult created" << endl;
}

arithDiv::arithDiv(int numLine) {
	subType = "DIV";
	line = numLine;

	cout << "arithDiv created" << endl;
}

