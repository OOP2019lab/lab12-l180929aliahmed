#include "shape.h"

class circle:public shape{
private:
	float radius;
public:
	~circle();
	circle(float, string);
	float area();
};

class rectangle:public shape{
public:
	~rectangle();
	float area();
	rectangle(float, float, string);
private:
	float height;
	float width;
};

class triangle: public shape{
private:
	float base;
	float height;
public:
	~triangle();
	triangle(float ,float, string);
	float area();
};
