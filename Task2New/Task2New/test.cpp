#ifdef _TEST
#define BOOST_TEST_MODULE tests
#include <boost/test/included/unit_test.hpp>
#include "circle.h"
bool check(Point *points, int n)
{
	bool p=false;
		for (int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(i!=j)
			{
			if ((points[i].x==points[j].x)&&(points[i].y==points[j].y))
			p=true;
			}
		}
	}
	return p;
}

BOOST_AUTO_TEST_SUITE( test_suite1 )

BOOST_AUTO_TEST_CASE( test_square )
{
	
	BOOST_TEST( check(square(100,5),100) == false );
	BOOST_TEST( check(square(100,10),100) == false );
	BOOST_TEST( check(square(500,10),500) == false );
	BOOST_TEST( check(square(1000,10), 1000) == false );
	BOOST_TEST( check(square(300,1),300) == false );
	BOOST_TEST( check(square(120,100),120) == false );
}
BOOST_AUTO_TEST_CASE( test_circle )
{
	BOOST_TEST( check(circle(100,5),100) == false );
	BOOST_TEST( check(circle(10,10),10) == false );
	BOOST_TEST( check(circle(500,10),500) == false );
	BOOST_TEST( check(circle(1000,10),1000) == false );
	BOOST_TEST( check(circle(3,1),3) == false );
	BOOST_TEST( check(circle(120,100),120) == false );
}
BOOST_AUTO_TEST_CASE(test_triangle)
{
	BOOST_TEST( check(triangle(100,5,4),100) == false );
	BOOST_TEST( check(triangle(10,10,20),10) == false );
	BOOST_TEST( check(triangle(500,10,2),500) == false );
	BOOST_TEST( check(triangle(1000,10,10),1000) == false );
	BOOST_TEST( check(triangle(3,1,1),3) == false );
	BOOST_TEST( check(triangle(120,100,1),100) == false );
}


BOOST_AUTO_TEST_SUITE_END()
#endif