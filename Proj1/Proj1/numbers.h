#include <string>

using namespace std;

string string_from_int(int number)
{
	string answer;
	switch (number)
	{
	case 0:
		answer = "ноль";
		break;
	case 1:
		answer = "один";
		break;
	case 2:
		answer = "два";
		break;
	case 3:
		answer = "три";
		break;
	case 4:
		answer = "четыре";
		break;
	case 5:
		answer = "пять";
		break;
	case 6:
		answer = "шесть";
		break;
	case 7:
		answer = "семь";
		break;
	case 8:
		answer = "восемь";
		break;
	case 9:
		answer = "девять";
		break;
	case 10:
		answer = "десять";
		break;
	case 11:
		answer = "одинадцать";
		break;
	case 12:
		answer = "двенадцать";
		break;
	case 13:
		answer = "тринадцать";
		break;
	case 14:
		answer = "четырнадцать";
		break;
	case 15:
		answer = "пятнадцать";
		break;
	case 16:
		answer = "шестнадцать";
		break;
	case 17:
		answer = "семнадцать";
		break;
	case 18:
		answer = "восемнадцать";
		break;
	case 19:
		answer = "девятнадцать";
		break;
	}
	return answer;
}

string number_less_100_to_string(int number)
{
	int rest;
	string answer;
	if(number / 10 == 0 || number / 10 == 1)
	{
		answer = string_from_int(number);
	}
	if (number / 10 == 2)
	{
		rest = number % 10;
		if(rest == 0)answer = "двадцать";
		else 
			answer = "двадцать " + string_from_int(rest);
	}
	if (number / 10 == 3)
	{
		rest = number % 10;
		if(rest == 0)answer = "тридцать";
		else 
			answer = "тридцать " + string_from_int(rest);
	}
	if (number / 10 == 4)
	{
		rest = number % 10;
		if(rest == 0)answer = "сорок";
		else 
			answer = "сорок " + string_from_int(rest);
	}
	if (number / 10 == 5)
	{
		rest = number % 10;
		if(rest == 0)answer = "пятьдесят";
		else 
			answer = "пятьдесят " + string_from_int(rest);
	}
	if (number / 10 == 6)
	{
		rest = number % 10;
		if(rest == 0)answer = "шестьдесят";
		else 
			answer = "шестьдесят " + string_from_int(rest);
	}
	if (number / 10 == 7)
	{
		rest = number % 10;
		if(rest == 0)answer = "семьдесят";
		else 
			answer = "семьдесят " + string_from_int(rest);
	}
	if (number / 10 == 8)
	{
		rest = number % 10;
		if(rest == 0)answer = "восемьдесят";
		else 
			answer = "восемьдесят " + string_from_int(rest);
	}
	if (number / 10 == 9)
	{
		rest = number % 10;
		if(rest == 0)answer = "девяносто";
		else 
			answer = "девяносто " + string_from_int(rest);
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
		if (rest == 0)answer = "сто";
		else 
		{
			answer = "сто " + number_less_100_to_string(rest);
		}
	}
	if(number / 100 == 2)
	{
		rest = number % 100;
		if (rest == 0)answer = "двести";
		else 
		{
			answer = "двести " + number_less_100_to_string(rest);
		}
	}
	if(number / 100 == 3)
	{
		rest = number % 100;
		if (rest == 0)answer = "триста";
		else 
		{
			answer = "триста " + number_less_100_to_string(rest);
		}
	}
	if(number / 100 == 4)
	{
		rest = number % 100;
		if (rest == 0)answer = "четыреста";
		else 
		{
			answer = "четыреста " + number_less_100_to_string(rest);
		}
	}
	if(number / 100 == 5)
	{
		rest = number % 100;
		if (rest == 0)answer = "пятьсот";
		else 
		{
			answer = "пятьсот " + number_less_100_to_string(rest);
		}
	}
	if(number / 100 == 6)
	{
		rest = number % 100;
		if (rest == 0)answer = "шестьсот";
		else 
		{
			answer = "шестьсот " + number_less_100_to_string(rest);
		}
	}
	if(number / 100 == 7)
	{
		rest = number % 100;
		if (rest == 0)answer = "семьсот";
		else 
		{
			answer = "семьсот " + number_less_100_to_string(rest);
		}
	}
	if(number / 100 == 8)
	{
		rest = number % 100;
		if (rest == 0)answer = "восемьсот";
		else 
		{
			answer = "восемьсот " + number_less_100_to_string(rest);
		}
	}
	if(number / 100 == 9)
	{
		rest = number % 100;
		if (rest == 0)answer = "девятьсот";
		else 
		{
			answer = "девятьсот " + number_less_100_to_string(rest);
		}
	}
	return answer;
}

string objects_less_100(int number, string s1, string s2, string s3)
{
	int rest; string answer;
	if(number / 10 == 0)
	{
		rest = number % 10;
		if(rest == 1)
			answer = number_less_100_to_string(rest) + s1;
		if(rest == 2 || rest == 3 || rest == 4)
			answer = number_less_100_to_string(rest) + s2;
		if(rest > 4 || rest == 0)
			answer = number_less_100_to_string(rest) + s3;
	}
	else
	{
		if(number / 10 == 1)
		{
			rest = number % 10;
			if(rest > 4 || rest == 0)
				answer = number_less_100_to_string(number) + s3;
			else
				answer = number_less_100_to_string(number) + s3;
		}
		else
		{
			rest = number % 10;
		if(rest == 1)
			answer = number_less_100_to_string(number) + s1;
		if(rest == 2 || rest == 3 || rest == 4)
			answer = number_less_100_to_string(number) + s2;
		if(rest > 4 || rest == 0)
			answer = number_less_100_to_string(number) + s3;
		}
	}
	return answer;
}

string objects_w_fraction(int integer, string i1, string i2, string i3, int fraction, string f1, string f2, string f3)
{
	string answer;
	int rest;
	if(integer / 10 == 0)
	{
		if(fraction / 10 == 0)
		{
			rest = fraction % 10;
			if(rest == 0 || rest > 4)
				answer = number_less_100_to_string(fraction) + f3;
			if(rest == 1 || rest == 2)
				answer = number_less_100_to_string(fraction) + f1;
			if(rest == 3 || rest == 4)
				answer = number_less_100_to_string(fraction) + f2;
		}
	}
	else
	{
		if(fraction / 10 == 0)

		if(fraction / 10 == 1)
			answer = objects_less_100(integer, i1, i2, i3) + ", " + number_less_100_to_string(fraction) + f3;
	}
	return answer;
}