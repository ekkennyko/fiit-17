#include <vector>
#include <random>
#include <iostream>

using namespace std;

struct Point
{
	double x, y;
};

double generateRandom(double Min, double Max){
	random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<> uid(Min, Max);
	return uid(gen);
}

void main(){
	setlocale(0, "");
	int radius = 100;
	int countPoint = 100;
	double lengthSquare = 100;
	Point *points = new Point[countPoint];
	for(int i = 0; i < countPoint; i++){
		points[i].x = generateRandom(0, lengthSquare);
		points[i].y = generateRandom(0, lengthSquare);
		if(sqrt(pow((points[i].x-0),2)+pow((points[i].y-0),2)>radius)){
			if(points[i].x>radius && points[i].y>radius){
				points[i].x-=radius;
				points[i].y-=radius;
			}
			if(points[i].x<-radius && points[i].y<-radius){
				points[i].x+=radius;
				points[i].y+=radius;
			}
		}
	}
	cout<<"Точки внутри круга"<<endl;
	for(int i = 0; i < countPoint; i++){
		cout<<i+1<<": x - "<<points[i].x<<" | y - "<<points[i].y<<endl;
	}
	system("pause");
}