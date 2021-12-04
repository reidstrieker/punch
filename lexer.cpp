#include "lexer.h"
#include "tokens.h"

lexer::lexer() { cout << "lexer created" << endl; }

void lexer::addTokens(string text) {

	while (currChar1 < text.length()) {

		// number handling for ints and floats
		if (isdigit(text[currChar1])) {
			string num = "";
			currChar2++;
			int dotCount = 0;
			while (isdigit(text[currChar2]) || text[currChar2] == '.') {
				if (text[currChar2] == '.') dotCount = 1;
				currChar2++;
			}
			while (currChar1 < currChar2) {
				num.push_back(text[currChar1]);
				currChar1++;
			}
			int finNum = stoi(num);
			if (dotCount == 0) {
				tokenList.push_back(numInt(num, 0));
			}
			else {
				tokenList.push_back(numFloat(num, 0));
			}
		}

		switch (text[currChar1]) {
			// ignore whitespace
			case ' ': 
				currChar1++;
				currChar2++;
				break;
			// addition
			case '+':
				tokenList.push_back(arithPlus(0));
				currChar1++;
				currChar2++;
				break;
			// subtraction
			case '-':
				tokenList.push_back(arithMinus(0));
				currChar1++;
				currChar2++;
				break;
			// multiplication
			case '*':
				tokenList.push_back(arithMult(0));
				currChar1++;
				currChar2++;
				break;
			// division
			case '/':
				tokenList.push_back(arithDiv(0));
				currChar1++;
				currChar2++;
				break;
			// left parenthesis
			case '(':
				tokenList.push_back(leftPar(0));
				currChar1++;
				currChar2++;
				break;
			// right parenthesis
			case ')':
				tokenList.push_back(rightPar(0));
				currChar1++;
				currChar2++;
				break;
		}
	}
}

vector<token> lexer::getTokens() {
	return tokenList;
}

