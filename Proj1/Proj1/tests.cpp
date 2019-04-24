#ifdef TEST

#define BOOST_TEST_MODULE tests

#include <boost/test/included/unit_test.hpp>

#include "numbers.h"
#include <iostream>

using namespace std;

BOOST_AUTO_TEST_SUITE( test_suite1 )

	BOOST_AUTO_TEST_CASE( test_case1 )
{
	BOOST_TEST(string_from_int(0) == string("ноль"));
	BOOST_TEST(string_from_int(1) == string("один"));
	BOOST_TEST(string_from_int(2) == string("два"));
	BOOST_TEST(string_from_int(3) == string("три"));
	BOOST_TEST(string_from_int(4) == string("четыре"));
	BOOST_TEST(string_from_int(5) == string("пять"));
	BOOST_TEST(string_from_int(6) == string("шесть"));
	BOOST_TEST(string_from_int(7) == string("семь"));
	BOOST_TEST(string_from_int(8) == string("восемь"));
	BOOST_TEST(string_from_int(9) == string("девять"));
	BOOST_TEST(string_from_int(10) == string("десять"));
	BOOST_TEST(string_from_int(11) == string("одинадцать"));
	BOOST_TEST(string_from_int(12) == string("двенадцать"));
	BOOST_TEST(string_from_int(13) == string("тринадцать"));
	BOOST_TEST(string_from_int(14) == string("четырнадцать"));
	BOOST_TEST(string_from_int(15) == string("пятнадцать"));
	BOOST_TEST(string_from_int(16) == string("шестнадцать"));
	BOOST_TEST(string_from_int(17) == string("семнадцать"));
	BOOST_TEST(string_from_int(18) == string("восемнадцать"));
	BOOST_TEST(string_from_int(19) == string("девятнадцать"));
}

BOOST_AUTO_TEST_CASE( test_case2)
{
	BOOST_TEST(number_less_100_to_string(9) == string("девять"));
	BOOST_TEST(number_less_100_to_string(48) == string("сорок восемь"));
	BOOST_TEST(number_less_100_to_string(21) == string("двадцать один"));
	BOOST_TEST(number_less_100_to_string(35) == string("тридцать пять"));
	BOOST_TEST(number_less_100_to_string(54) == string("пятьдесят четыре"));
	BOOST_TEST(number_less_100_to_string(16) == string("шестнадцать"));
	BOOST_TEST(number_less_100_to_string(80) == string("восемьдесят"));
	BOOST_TEST(number_less_100_to_string(67) == string("шестьдесят семь"));
	BOOST_TEST(number_less_100_to_string(92) == string("девяносто два"));
	BOOST_TEST(number_less_100_to_string(73) == string("семьдесят три"));
}

BOOST_AUTO_TEST_CASE( test_case3 )
{
	BOOST_TEST(number_less_1000_to_string(53) == string("пятьдесят три"));
	BOOST_TEST(number_less_1000_to_string(897) == string("восемьсот девяносто семь"));
	BOOST_TEST(number_less_1000_to_string(100) == string("сто"));
	BOOST_TEST(number_less_1000_to_string(200) == string("двести"));
	BOOST_TEST(number_less_1000_to_string(300) == string("триста"));
	BOOST_TEST(number_less_1000_to_string(400) == string("четыреста"));
	BOOST_TEST(number_less_1000_to_string(500) == string("пятьсот"));
	BOOST_TEST(number_less_1000_to_string(600) == string("шестьсот"));
	BOOST_TEST(number_less_1000_to_string(700) == string("семьсот"));
	BOOST_TEST(number_less_1000_to_string(800) == string("восемьсот"));
	BOOST_TEST(number_less_1000_to_string(900) == string("девятьсот"));

}

BOOST_AUTO_TEST_CASE( test_case4 )
{
		BOOST_TEST(objects_less_100(56, " рубль", " рубля", " рублей") == string("пятьдесят шесть рублей"));
		BOOST_TEST(objects_less_100(93, " рубль", " рубля", " рублей") == string("девяносто три рубля"));
		BOOST_TEST(objects_less_100(31, " рубль", " рубля", " рублей") == string("тридцать один рубль"));
		BOOST_TEST(objects_less_100(78, " друг", " друга", " друзей") == string("семьдесят восемь друзей"));
		BOOST_TEST(objects_less_100(83, " друг", " друга", " друзей") == string("восемьдесят три друга"));
		BOOST_TEST(objects_less_100(21, " друг", " друга", " друзей") == string("двадцать один друг"));
		BOOST_TEST(objects_less_100(13, " рубль", " рубля", " рублей") == string("тринадцать рублей"));
		BOOST_TEST(objects_less_100(1, " стул", " стула", " стульев") == string("один стул"));
		BOOST_TEST(objects_less_100(45, " стул", " стула", " стульев") == string("сорок пять стульев"));
		BOOST_TEST(objects_less_100(62, " стул", " стула", " стульев") == string("шестьдесят два стула"));
}

BOOST_AUTO_TEST_CASE( test_case5 )
{
		BOOST_TEST(objects_w_fraction(56, " рубль", " рубля", " рублей", 23, " копейка", " копейки", " копеек") == string("пятьдесят шесть рублей, двадцать три копейки"));
		BOOST_TEST(objects_w_fraction(93, " рубль", " рубля", " рублей", 12, " копейка", " копейки", " копеек") == string("девяносто три рубля, двенадцать копеек"));
		BOOST_TEST(objects_w_fraction(21, " рубль", " рубля", " рублей", 78, " копейка", " копейки", " копеек") == string("двадцать один рубль, семьдесят восемь копеек"));
		BOOST_TEST(objects_w_fraction(13, " рубль", " рубля", " рублей", 3, " копейка", " копейки", " копеек") == string("тринадцать рублей, три копейки"));
		BOOST_TEST(objects_w_fraction(0, " рубль", " рубля", " рублей", 3, " копейка", " копейки", " копеек") == string("три копейки"));
}
BOOST_AUTO_TEST_SUITE_END()
#endif