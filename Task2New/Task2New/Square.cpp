//#include <vector>
//#include <random>
//#include <iostream>
//
//using namespace std;
//
//struct Point
//{
//	double x, y;
//};
//
//double generateRandom(double Min, double Max){
//	random_device rd;
//	mt19937 gen(rd());
//	uniform_real_distribution<> uid(Min, Max);
//	return uid(gen);
//}
//
//void main(){
//	setlocale(0, "");
//	int countPoint = 100;
//	double lengthSquare = 100;
//	Point *points = new Point[countPoint];
//	for(int i = 0; i < countPoint; i++){
//		points[i].x = generateRandom(0, lengthSquare);
//		points[i].y = generateRandom(0, lengthSquare);
//	}
//	cout<<"Точки внутри квадрата"<<endl;
//	for(int i = 0; i < countPoint; i++){
//		cout<<i+1<<": x - "<<points[i].x<<" | y - "<<points[i].y<<endl;
//	}
//	system("pause");
//}