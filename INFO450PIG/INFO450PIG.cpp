#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

bool isAVowel(char);
string translateToPigLatin(string);

int main()
{
	string fromEnglish;
	cout << "Please enter a word you would like to translate:\n " << endl;
	cin >> fromEnglish;
	cout << fromEnglish << "\nThat would be: " << translateToPigLatin(fromEnglish) << " in Pig Latin.\n" << endl;

	return 0;
}

// Switch case to detect vowel inputs for the first letter of each word.
bool isAVowel(char ch)
{
	switch (ch)
	{
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		return true;
	default:
		return false;
	}
}

string rotate(string str)
{
	string::size_type len = str.length();
	string toPigLatin;
	toPigLatin = str.substr(1, len - 1) + str[0];
	return toPigLatin;
	// Brings the first letter of the word you're translating to the end
}

string translateToPigLatin(string word)
{
	// If the string is a vowel, it adds "ay" to the end of it. 
	string::size_type len;
	bool vowel;
	string::size_type counter;
	if (isAVowel(word[0]))
		word = word + "ay";
	else
	{
		word = word + "";
		word = rotate(word);
		len = word.length();
		vowel = false; 
		for (counter = 1; counter < len - 1; counter++)
			if (isAVowel(word[0]))
			{
				vowel = true;
				break;
			}
			else
				word = rotate(word);
		if (!vowel)
			word = word.substr(1, len) + "ay";
		else
			word = word + "ay";
		// Subtracts first letter of word from input, then puts it at the end of it, then adds "ay" to it. 
	}
	return word;
}