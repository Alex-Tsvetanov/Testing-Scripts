#include "stdafx.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

short Char_To_Num(char ch)
{
	short num = 0;

	if (ch == '0')
		num = 0;
	if (ch == '1')
		num = 1;
	if (ch == '2')
		num = 2;
	if (ch == '3')
		num = 3;
	if (ch == '4')
		num = 4;
	if (ch == '5')
		num = 5;
	if (ch == '6')
		num = 6;
	if (ch == '7')
		num = 7;
	if (ch == '8')
		num = 8;
	if (ch == '9')
		num = 9;

	return num;
}

long long String_To_Long_Long(string str)
{
	long long num = 0;

	short power10 = 1;

	for (short i = str.size() - 1; i >= 0; i--)
	{
		num += (Char_To_Num(str[i]))*power10;
		power10 *= 10;
	}

	return num;
}

int main()
{
	string strCommand;

	cin >> strCommand;

	vector<long long> nNums;
	vector<char> chRot;

	for (long long i = 0; i < strCommand.size(); i++)
	{
		string strAdd;

		if (strCommand[i] == '+')
			chRot.push_back('+');
		else if (strCommand[i] == '-')
			chRot.push_back('-');
		else
		{
			long long j = i;

			while (strCommand[j] != '+' && strCommand[j] != '-' && j < strCommand.size())
			{
				strAdd.push_back(strCommand[j]);
				j++;
			}

			i = j - 1;

			nNums.push_back(String_To_Long_Long(strAdd));
		}
	}

	for each (long long n in nNums)
		cout << endl << n;

	for each (char ch in chRot)
		cout << endl << ch;

	return 420;
}

