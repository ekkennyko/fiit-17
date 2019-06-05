#include <vector>
#include <iostream>
#include <ctime>
#include <random> 
using namespace std;

struct Point
{
	double x,y;
};

double fRandom(double fMin, double fMax)
{
	random_device rd; 
    mt19937 gen(rd());  
    uniform_real_distribution<> uid(fMin, fMax); 
	return uid(gen);
}

bool square(int n, double a)
{
	setlocale(0, "");
	cout<<"Введите кол-во точек и длину стороны квадрата: ";
	cin>>n>>a;
	Point *points = new Point[n];
	for (int i=0; i<n; i++)
	{
		points[i].x = fRandom(0, a);
		points[i].y = fRandom(0, a);
	}
	cout<<"Точки внутри квадрата со сторонами "<<a<<" на "<<a<<":"<<endl;
	for 
}