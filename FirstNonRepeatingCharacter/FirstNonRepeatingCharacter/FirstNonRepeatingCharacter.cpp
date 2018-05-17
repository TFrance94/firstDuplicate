// FirstNonRepeatingCharacter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
using namespace std;

char firstNotRepeatingCharacter(std::string s) {
	int duplicateArray[256] = {};

	for (int x = 0; x < s.size(); x++)
	{
		//finds character value in array and increments by one
		duplicateArray[s[x]] += 1;
	}

	for (int x = 0; x < s.size(); x++)
	{
		//if there's only one of a character, then we will return that character
		if (duplicateArray[s[x]] == 1)
		{
			return s[x];
		}
	}
	//return _ if there are no single characters in array.
	return '_';
}


int main()
{
	//input any string in order to check which character does not repeat
	firstNotRepeatingCharacter("abacabad");
	system("pause");
	return 0;
}

