#pragma once
#include "tokens.h"
#include <vector>

using namespace std;

class lexer {
	private:
		string text;
		vector<token> tokenList;
		int currChar1 = 0, currChar2 = 0;
	public:
		lexer();
		void addTokens(string text);
		vector<token> getTokens();
};