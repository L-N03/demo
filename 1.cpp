#include<iostream>
using namespace std;

class Point
{
	int data;
	public:
		int getdata();
		bool setdata(int data);
	
};

int Point::getdata()
{
	return this->data;
}

bool Point::setdata(int data)
{
	this->data=data;
}
