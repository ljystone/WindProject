// ParseCharStringToInt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
void ParseCharArray(char *str, char start, char end)
{
	int i = 0;
	int	j = 0;
	int index = 0;
	char res[10];
	while (str[i++] != start);
	while (str[j++] != end);
	while (i < j - 1)
	{
		res[index++] = str[i++];
	}
	while (index < 10)
	{
		res[index++] = 0;
	}
	cout << res << endl;
}

static c
{
		 holdTimeMin = ParseCharToInt(ParseCharArray(buffer,'!','@'));

	 UartSendStr("\r\n");
			 UartSendStr(ParseCharArray(buffer,'!','@')); delay(200);
	startPressure = ParseCharToInt(ParseCharArray(buffer,'@','#'));

	 UartSendStr("\r\n");
			 UartSendStr(ParseCharArray(buffer,'@','#')); delay(200);
	  pressureMin = ParseCharToInt(ParseCharArray(buffer,'#','$'));

	 UartSendStr("\r\n");
			 UartSendStr(ParseCharArray(buffer,'#','$')); delay(200);
	  pressureMax = ParseCharToInt(ParseCharArray(buffer,'$','?'));

	 UartSendStr("\r\n");
			 UartSendStr(ParseCharArray(buffer,'$','?')); delay(200);
 temperatureMin = ParseCharToInt(ParseCharArray(buffer,'?',';'));

	 UartSendStr("\r\n");
			 UartSendStr(ParseCharArray(buffer,'?',';')); delay(200);
 temperatureMax = ParseCharToInt(ParseCharArray(buffer,';','x'));

	  UartSendStr("\r\n");
			 UartSendStr(ParseCharArray(buffer,';','x')); delay(200);
		spluseMin = ParseCharToInt(ParseCharArray(buffer,'x','*'));

	  UartSendStr("\r\n");
			 UartSendStr(ParseCharArray(buffer,'x','*')); delay(200);
		spluseMax = ParseCharToInt(ParseCharArray(buffer,'*','('));

	  UartSendStr("\r\n"); delay(200);
	  UartSendStr(ParseCharArray(buffer, '*', '('));
}

int main()
{

	char str[] = "!11@22#33$44?55;66455x77*88(";

	ParseCharArray(str, '@', '%');

}
