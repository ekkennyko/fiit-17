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
//double fRand(double fMin, double fMax)
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
//	cout<<"Введите кол-во точек и радиус окружности: ";
//	cin>>n>>a;
//	Point *points = new Point[n];
//	for (int i=0; i<n; i++)
//	{
//		points[i].x = fRand(0, a);
//		points[i].y = fRand(0, a);
//		if (sqrt(pow(points[i].x,2)+pow(points[i].y,2)>a))
//		{
//			if(points[i].x>0 && points[i].y>0)
//			{
//			points[i].x-=a;
//			points[i].y-=a;
//			}
//			if(points[i].x<0 && points[i].y>0)
//			{
//			points[i].x-=a;
//			points[i].y+=a;
//			}
//			if(points[i].x<0 && points[i].y<0)
//			{
//			points[i].x+=a;
//			points[i].y+=a;
//			}
//			if(points[i].x>0 && points[i].y<0)
//			{
//			points[i].x+=a;
//			points[i].y-=a;
//			}
//		}
//	}
//	cout<<"Точки внутри окружности с радиусом "<<a<<":"<<endl;
//	for (int i=0; i<n; i++)
//	{
//		cout.precision(2);
//		cout<<fixed<<i+1<<") x: "<<points[i].x<< " y: "<<points[i].y<<endl;
//	}
//	// Проверка на повторы точек
//	for (int i=0; i<n; i++)
//	{
//		for(int j=0; j<n; j++)
//		{
//			if(i!=j)
//			{
//			if ((points[i].x==points[j].x)&&(points[i].y==points[j].y))
//			cout<<"POVTORENIE "<<i<<" "<<j<<endl;
//			}
//		}
//	}
//}