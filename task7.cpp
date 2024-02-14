#include <iostream>
using namespace std;

class Shape {
public:
    virtual void calculate() = 0;  
    virtual void draw() = 0;       
    virtual void disp() = 0; 
};

class Circle:public Shape {
private:
    double radius;
    double area;

public:
    Circle(double r):radius(r),area(0.0) {}

    void calculate()
	{
        area=3.14*radius*radius;
    }

    void draw() 
	{
        cout<<"Circle"<< endl;
    }

    void displayInfo() 
	{
        cout<<"Radius="<<radius<<endl;
        cout<<"Aree="<<area<<endl;
    }
};

class Rectangle:public Shape {
private:
    double length;
    double width;
    double area;

public:
    Rectangle(double l,double w):length(l),width(w){}

    void calculate() 
	{
        area=length*width;
    }

    void draw() override 
	{
        cout<<"Rectangle"<<endl;
    }

    void disp()override
	{
        cout<<"Length="<<length<<"Width="<<width<<endl;
        cout<<"Area="<<area<<endl;
    }
};

int main() {
    const int Size = 2;
    Shape* shapes[Size];

    Circle c(5.0);
    Rectangle r(4.0, 6.0);

    shapes[0]=&c;
    shapes[1]=&r;

    for (int i=0;i<Size;i++)
	{
        shapes[i]->calculate();
        shapes[i]->draw();
        shapes[i]->disp();
        cout << endl;
    }

    return 0;
}
