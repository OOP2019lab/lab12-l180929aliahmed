#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class shape{
protected:
	string type;
public:
	shape();
	shape(string);
	virtual ~shape();
	virtual float area();
	string color;
};