// INFO450PIG.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

char enWord;
char firstLetter;
char words[50];
char translate[50];


int main()

{
	cout << "This is an English to Pig Latin translator." << endl;
	cout << "Please enter the word you would like to translate here: " << endl;
	gets_s(words);
	cout << "You entered " << words << endl; 
	
	bool vowel;

	if (firstLetter == 'a' || firstLetter == 'e' || firstLetter == 'i' || firstLetter == 'o' || firstLetter == 'u')
	{
		cout << "That would be " << enWord << "ay!" << endl; 
	}
	else
	{

	}
    return 0;
}

