#include <conio.h>
#include <string>
#include"Shapes.h"

float sumArea(shape& s1, shape& s2){
	return (s1.area() + s2.area());
}

int main(){
	triangle t1(1.0, 9.0, "Red");
	circle c1(2,"Blue");
	rectangle r1(6,2,"Orange");
	cout<<t1.area()<<endl;
	cout<<t1.color<<endl;
	cout<<c1.area()<<endl;
	cout<<r1.area()<<endl;

	cout<<"----------"<<endl;
	shape* sptr=&t1;
	shape &sref=r1;
	
	cout<<sptr->area()<<endl;
	cout<<sptr->color<<endl;
	cout<<sref.color<<endl;
	cout<<sref.area()<<endl;

	cout<<"--------------------------"<<endl<<"Exercise 3a"<<endl;
	shape s1("Purple");
	cout<<sumArea(t1,c1)<<endl;
	cout<<sumArea(s1,r1)<<endl;
	cout<<sumArea(s1,t1)<<endl;


	//Exercise 3b:
	/*cout<<endl<<"--------------------------"<<endl<<"Exercise 3b"<<endl;
	string c;
	int x, y;
	const int count=5;
	shape** shapesArray= new shape*[count];
	for(int i=0; i<count; ){
		cout<<"Press 1 for a triangle, 2 for a rectangle and 3 for a circle."<<endl;
		switch(getch()){
			case '1':
				cout<<"Base: ";
				cin>>x;
				cout<<"Height: ";
				cin>>y;
				cout<<"Color: ";
				getline(cin, c);
				shapesArray[i]=new triangle(x,y,c);
				i++;
				break;
				
			case '2':
				cout<<"Length: ";
				cin>>x;
				cout<<"Width: ";
				cin>>y;
				cout<<"Color: ";
				getline(cin, c);
				shapesArray[i]=new rectangle(x,y,c);
				i++;
				break;

			case'3':
				cout<<"Radius: ";
				cin>>x;
				cout<<"Color: ";
				getline(cin, c);
				shapesArray[i]=new circle(x, c);
				i++;
				break;

			default:
				cout<<"Invalid input. Enter again."<<endl;
				break;
		}
	}

	for(int i=0; i<count; i++){
		cout<<i<<"	"<<shapesArray[i]->area()<<endl;
	}

	for(int i=0; i<count; i++)
		delete shapesArray[i];
	delete shapesArray;*/

	//Exercise 4:
	cout<<endl<<"----------------------------------"<<endl<<"Exercise 4"<<endl;
	shape* S1=new triangle(1.0,9.0,"Red");
	delete S1;


	system("pause");
}