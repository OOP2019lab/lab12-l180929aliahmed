#include"Shapes.h"

circle::circle(float x, string c){
	radius=x;
	color=c;
}

circle::~circle(){
	cout<<"~circle() invoked"<<endl;
}

float circle::area(){
	float s=pow(radius, 2);
	return (3.141592*s); 
}