#include"Shapes.h"


rectangle::rectangle(float x, float y, string c){
	width=x;
	height=y;
	color= c;
}

rectangle::~rectangle(){
	cout<<"~rectangle invoked"<<endl;
}

float rectangle::area(){
	return (height*width);
}