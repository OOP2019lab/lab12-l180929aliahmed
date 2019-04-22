#include"shape.h"

shape::~shape(){
	cout<<"~shape invoked"<<endl;
}

float shape::area(){
	cout<<"Base class area invoked";
	return 0;
}

shape::shape(){
	color="Black";
}

shape::shape(string c){
	color=c;
}