#include <iostream>
#include <string>

using namespace std;

class AdHocSquare
{
public:
	AdHocSquare(double side);
	void set_side(double side);
	double get_area();
	
private:
	double side;
	
};

AdHocSquare::AdHocSquare(double side)
{
	this->side = side;
}

void AdHocSquare::set_side(double side)
{
	this->side = side;
}

double AdHocSquare::get_area()
{
	return this->side * this->side;
}

class LazySquare
{
public:
	LazySquare(double side);
	void set_side(double side);
	double get_area();
	
private:
	double side;
	double area;
	bool side_changed;
	
};

LazySquare::LazySquare(double side)
{
	this->side = side;
	this->area = side * side;
	this->side_changed = false;
}

void LazySquare::set_side(double side)
{
	if (this->side != side)
		this->side_changed = true;
	else 
		this->side_changed = false;
	
	this->side = side;
}

double LazySquare::get_area()
{
	if (this->side_changed) {
		
		this->area = this->side * this->side;
		this->side_changed = false;
		cout << "the side was changed ";
	}
		
	return this->area;
}


int main()
{
	AdHocSquare as(5);
	cout << as.get_area() << endl;
	
	LazySquare ls(3);
	cout << ls.get_area() << endl;
	
	ls.set_side(4);
	cout << ls.get_area() << endl;
	
	return 0;
}
