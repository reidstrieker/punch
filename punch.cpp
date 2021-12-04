#include <iostream>
#include <fstream>
#include <string>

#include "lexer.h"

using namespace std;

int main() {

	/*
	string lineText;
	ifstream PunchFile("filename.txt");
	while (getline(PunchFile, lineText)) {


	}

	PunchFile.close();

	*/


	lexer l = lexer();

	l.addTokens("1.3+2");
}