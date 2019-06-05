#include <string>

using namespace std;

string string_from_int(int number)
{
	string answer;
	switch (number)
	{
	case 0:
		answer = "����";
		break;
	case 1:
		answer = "����";
		break;
	case 2:
		answer = "���";
		break;
	case 3:
		answer = "���";
		break;
	case 4:
		answer = "������";
		break;
	case 5:
		answer = "����";
		break;
	case 6:
		answer = "�����";
		break;
	case 7:
		answer = "����";
		break;
	case 8:
		answer = "������";
		break;
	case 9:
		answer = "������";
		break;
	case 10:
		answer = "������";
		break;
	case 11:
		answer = "�����������";
		break;
	case 12:
		answer = "����������";
		break;
	case 13:
		answer = "����������";
		break;
	case 14:
		answer = "������������";
		break;
	case 15:
		answer = "����������";
		break;
	case 16:
		answer = "�����������";
		break;
	case 17:
		answer = "����������";
		break;
	case 18:
		answer = "������������";
		break;
	case 19:
		answer = "������������";
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
		if(rest == 0)answer = "��������";
		else 
			answer = "�������� " + string_from_int(rest);
	}
	if (number / 10 == 3)
	{
		rest = number % 10;
		if(rest == 0)answer = "��������";
		else 
			answer = "�������� " + string_from_int(rest);
	}
	if (number / 10 == 4)
	{
		rest = number % 10;
		if(rest == 0)answer = "�����";
		else 
			answer = "����� " + string_from_int(rest);
	}
	if (number / 10 == 5)
	{
		rest = number % 10;
		if(rest == 0)answer = "���������";
		else 
			answer = "��������� " + string_from_int(rest);
	}
	if (number / 10 == 6)
	{
		rest = number % 10;
		if(rest == 0)answer = "����������";
		else 
			answer = "���������� " + string_from_int(rest);
	}
	if (number / 10 == 7)
	{
		rest = number % 10;
		if(rest == 0)answer = "���������";
		else 
			answer = "��������� " + string_from_int(rest);
	}
	if (number / 10 == 8)
	{
		rest = number % 10;
		if(rest == 0)answer = "�����������";
		else 
			answer = "����������� " + string_from_int(rest);
	}
	if (number / 10 == 9)
	{
		rest = number % 10;
		if(rest == 0)answer = "���������";
		else 
			answer = "��������� " + string_from_int(rest);
	}
	return answer;
}

string number_less_1000_to_string(int number)
{
	int rest;
	string answer;
	if(number < 100)
	{
		answer = number_less_100_to_string(number);
	}
	else
	{
		if(number / 100 == 1)
		{
			rest = number % 100;
			if (rest == 0)answer = "���";
			else 
			{
				answer = "��� " + number_less_100_to_string(rest);
			}
		}
		if(number / 100 == 2)
		{
			rest = number % 100;
			if (rest == 0)answer = "������";
			else 
			{
				answer = "������ " + number_less_100_to_string(rest);
			}
		}
		if(number / 100 == 3)
		{
			rest = number % 100;
			if (rest == 0)answer = "������";
			else 
			{
				answer = "������ " + number_less_100_to_string(rest);
			}
		}
		if(number / 100 == 4)
		{
			rest = number % 100;
			if (rest == 0)answer = "���������";
			else 
			{
				answer = "��������� " + number_less_100_to_string(rest);
			}
		}
		if(number / 100 == 5)
		{
			rest = number % 100;
			if (rest == 0)answer = "�������";
			else 
			{
				answer = "������� " + number_less_100_to_string(rest);
			}
		}
		if(number / 100 == 6)
		{
			rest = number % 100;
			if (rest == 0)answer = "��������";
			else 
			{
				answer = "�������� " + number_less_100_to_string(rest);
			}
		}
		if(number / 100 == 7)
		{
			rest = number % 100;
			if (rest == 0)answer = "�������";
			else 
			{
				answer = "������� " + number_less_100_to_string(rest);
			}
		}
		if(number / 100 == 8)
		{
			rest = number % 100;
			if (rest == 0)answer = "���������";
			else 
			{
				answer = "��������� " + number_less_100_to_string(rest);
			}
		}
		if(number / 100 == 9)
		{
			rest = number % 100;
			if (rest == 0)answer = "���������";
			else 
			{
				answer = "��������� " + number_less_100_to_string(rest);
			}
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
	if(integer < 10){
		answer=string_from_int(integer);
		if(integer == 0 ||integer > 4)answer+=i3 + ", ";
		if(integer == 1)answer+=i1 + ", ";
		if(integer == 3 ||integer == 4)answer+=i2 + ", ";
	}
	else{
		answer = objects_less_100(integer, i1, i2, i3) + ", ";
	}
	if(fraction < 10)
	{
		if (fraction == 0 || fraction > 4)
			answer += string_from_int(fraction) + f2;
		else
			if (fraction == 1 || fraction == 2)
				answer +=  string_from_int(fraction) + f1;
			else
				if (fraction == 3 || fraction == 4)
					answer +=  string_from_int(fraction) + f2;
	}
	else
	{
		if (fraction / 10 == 1)
		{
			answer += number_less_100_to_string(fraction) + f3;
		}
		else
		{
			rest = fraction % 10;
			if (rest == 0 || rest > 4)
				answer += number_less_100_to_string(fraction) + f3;
			if (rest == 1 || rest == 2)
				answer += number_less_100_to_string(fraction) + f1;
			if (rest == 3 || rest == 4)
				answer += number_less_100_to_string(fraction) + f2;
		}
	}
	return answer;
}