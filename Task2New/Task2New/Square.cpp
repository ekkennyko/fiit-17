//#include <vector>
//#include <iostream>
//#include <ctime>
//#include <random> 
//using namespace std;
//
//struct Point
//{
//	double x,y;
//};
//
//double fRandom(double fMin, double fMax)
//{
//	random_device rd; 
//    mt19937 gen(rd());  
//    uniform_real_distribution<> uid(fMin, fMax); 
//	return uid(gen);
//}
//
//void main()
//{
//	setlocale(0, "");
//	int n = 100;
//	double a = 100;
//	cout<<"Введите кол-во точек и длину стороны квадрата: ";
//	cin>>n>>a;
//	Point *points = new Point[n];
//	for (int i=0; i<n; i++)
//	{
//		points[i].x = fRandom(0, a);
//		points[i].y = fRandom(0, a);
//	}
//	cout<<"Точки внутри квадрата со сторонами "<<a<<" на "<<a<<":"<<endl;
//	for (int i=0; i<n; i++)
//	{
//		cout.precision(0);
//		cout<<fixed<<i+1<<") x: "<<points[i].x<< " y: "<<points[i].y<<endl;
//	}
//	system("pause");
//}