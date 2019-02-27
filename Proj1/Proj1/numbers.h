#include <string>

using namespace std;

string string_from_int(int number)
{
	string answer;
	switch (number)
	{
	case 0:
		answer = "null";
		break;
	case 1:
		answer = "one";
		break;
	case 2:
		answer = "two";
		break;
	case 3:
		answer = "three";
		break;
	case 4:
		answer = "four";
		break;
	case 5:
		answer = "five";
		break;
	case 6:
		answer = "six";
		break;
	case 7:
		answer = "seven";
		break;
	case 8:
		answer = "eight";
		break;
	case 9:
		answer = "nine";
		break;
	case 10:
		answer = "ten";
		break;
	case 11:
		answer = "eleven";
		break;
	case 12:
		answer = "twelve";
		break;
	case 13:
		answer = "thirteen";
		break;
	case 14:
		answer = "fourteen";
		break;
	case 15:
		answer = "fifteen";
		break;
	case 16:
		answer = "sixteen";
		break;
	case 17:
		answer = "seventeen";
		break;
	case 18:
		answer = "eighteen";
		break;
	case 19:
		answer = "nineteen";
		break;
	}
	return answer;
}

string number_less_100_to_string(int number)
{
	int rest;
	string answer;
	if(number / 10 == 0)
	{
		rest = number % 10;
		if(rest == 0)answer = "null";
		else 
			answer = string_from_int(rest);
	}
	if (number / 10 == 2)
	{
		rest = number % 10;
		if(rest == 0)answer = "twenty";
		else 
			answer = "twenty " + string_from_int(rest);
	}
	if (number / 10 == 3)
	{
		rest = number % 10;
		if(rest == 0)answer = "thirty";
		else 
			answer = "thirty " + string_from_int(rest);
	}
	if (number / 10 == 4)
	{
		rest = number % 10;
		if(rest == 0)answer = "fourty";
		else 
			answer = "fourty " + string_from_int(rest);
	}
	if (number / 10 == 5)
	{
		rest = number % 10;
		if(rest == 0)answer = "fifty";
		else 
			answer = "fifty " + string_from_int(rest);
	}
	if (number / 10 == 6)
	{
		rest = number % 10;
		if(rest == 0)answer = "sixty";
		else 
			answer = "sixty " + string_from_int(rest);
	}
	if (number / 10 == 7)
	{
		rest = number % 10;
		if(rest == 0)answer = "seventy";
		else 
			answer = "seventy " + string_from_int(rest);
	}
	if (number / 10 == 8)
	{
		rest = number % 10;
		if(rest == 0)answer = "eighty";
		else 
			answer = "eighty " + string_from_int(rest);
	}
	if (number / 10 == 9)
	{
		rest = number % 10;
		if(rest == 0)answer = "ninety";
		else 
			answer = "ninety " + string_from_int(rest);
	}
	return answer;
}

string number_less_1000_to_string(int number)
{
	int rest;
	string answer;
	if(number / 100 == 1)
	{
		rest = number % 100;
		if (rest == 0)answer = "one hundred";
		else 
		{
			answer = "one hundred " + number_less_100_to_string(rest);
		}
	}
	return answer;
}