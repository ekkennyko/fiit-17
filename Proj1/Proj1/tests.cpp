#ifdef TEST

#define BOOST_TEST_MODULE tests

#include <boost/test/included/unit_test.hpp>

#include "numbers.h"
#include <iostream>

using namespace std;

BOOST_AUTO_TEST_SUITE( test_suite1 )

	BOOST_AUTO_TEST_CASE( test_case1 )
{
	BOOST_TEST(string_from_int(0) == string("����"));
	BOOST_TEST(string_from_int(1) == string("����"));
	BOOST_TEST(string_from_int(2) == string("���"));
	BOOST_TEST(string_from_int(3) == string("���"));
	BOOST_TEST(string_from_int(4) == string("������"));
	BOOST_TEST(string_from_int(5) == string("����"));
	BOOST_TEST(string_from_int(6) == string("�����"));
	BOOST_TEST(string_from_int(7) == string("����"));
	BOOST_TEST(string_from_int(8) == string("������"));
	BOOST_TEST(string_from_int(9) == string("������"));
	BOOST_TEST(string_from_int(10) == string("������"));
	BOOST_TEST(string_from_int(11) == string("����������"));
	BOOST_TEST(string_from_int(12) == string("����������"));
	BOOST_TEST(string_from_int(13) == string("����������"));
	BOOST_TEST(string_from_int(14) == string("������������"));
	BOOST_TEST(string_from_int(15) == string("����������"));
	BOOST_TEST(string_from_int(16) == string("�����������"));
	BOOST_TEST(string_from_int(17) == string("����������"));
	BOOST_TEST(string_from_int(18) == string("������������"));
	BOOST_TEST(string_from_int(19) == string("������������"));
}

BOOST_AUTO_TEST_CASE( test_case2)
{
	for(int i = 0; i < 3; i++){
	BOOST_TEST(number_less_100_to_string(21) == string("�������� ����"));
	BOOST_TEST(number_less_100_to_string(36) == string("�������� �����"));
	BOOST_TEST(number_less_100_to_string(44) == string("����� ������"));
	}
}

BOOST_AUTO_TEST_CASE( test_case3 )
{
	for(int i = 0; i < 3; i++){
	BOOST_TEST(number_less_1000_to_string(897) == string("��������� ��������� ����"));
	}
}

BOOST_AUTO_TEST_CASE( test_case4 )
{
		BOOST_TEST(objects_less_100(56, " �����", " �����", " ������") == string("��������� ����� ������"));
		BOOST_TEST(objects_less_100(93, " �����", " �����", " ������") == string("��������� ��� �����"));
		BOOST_TEST(objects_less_100(21, " �����", " �����", " ������") == string("�������� ���� �����"));
		BOOST_TEST(objects_less_100(13, " �����", " �����", " ������") == string("���������� ������"));
}

BOOST_AUTO_TEST_CASE( test_case5 )
{
		BOOST_TEST(objects_w_fraction(56, " �����", " �����", " ������", 23, " �������", " �������", " ������") == string("��������� ����� ������, �������� ��� �������"));
		BOOST_TEST(objects_w_fraction(93, " �����", " �����", " ������", 12, " �������", " �������", " ������") == string("��������� ��� �����, ���������� ������"));
		BOOST_TEST(objects_w_fraction(21, " �����", " �����", " ������", 78, " �������", " �������", " ������") == string("�������� ���� �����, ��������� ������ ������"));
		BOOST_TEST(objects_w_fraction(13, " �����", " �����", " ������", 3, " �������", " �������", " ������") == string("���������� ������, ��� �������"));
		BOOST_TEST(objects_w_fraction(0, " �����", " �����", " ������", 3, " �������", " �������", " ������") == string("��� �������"));
}
BOOST_AUTO_TEST_SUITE_END()
#endif