#pragma once
#include <iostream>
#include <string>
using namespace std;

class token {
	public:
		string subType;
		int line;
};

// tokens for numbers (ints, floats, etc.)

class numToken : public token { string tokenType = "NUM"; };

class numInt : public numToken {
	private:
		int data;
	public:
		numInt(string numData, int numLine);
};

class numFloat : public numToken {
	private:
		float data;
	public:
		numFloat(string numData, int numLine);
};

// tokens for parentheses

class parenthToken : public token { string tokenType = "PARENTHESES"; };

class leftPar : public token {
	public:
		leftPar(int numLine);
};

class rightPar : public token {
	public:
		rightPar(int numLine);
};

// tokens for arithmetic operators (+, -, etc.)

class arithToken : public token { string tokenType = "ARITHMETIC"; };

class arithPlus : public arithToken {
	public:
		arithPlus(int numLine);
};

class arithMinus : public arithToken {
	public:
		arithMinus(int numLine);
};

class arithMult : public arithToken {
	public:
		arithMult(int numLine);
};

class arithDiv : public arithToken {
	public:
		arithDiv(int numLine);
};