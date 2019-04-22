#include"Shapes.h"

triangle::triangle(float x, float y, string c){
	color=c;
	base=x;
	height=y;
}

triangle::~triangle(){
	cout<<"~triangle invoked"<<endl;
}

float triangle::area(){
	return ((base*height)/2);
}