#include <iostream>
using namespace std;
//
//class Shape
//{
//public:
//	void Move(double x, double y);
//	void Draw() const;
//
//	Shape();
//	Shape(double x, double y);
//
//protected:
//	double _x, _y;
//};
//
//void Shape::Draw() const
//{
//	cout << "[Shape] Position = (" << _x << ", " << _y << ")\n";
//}
//
//class Rectangle : public Shape				// 상속
//{
//public:
//	void Draw() const;
//	void Resize(double width, double height);
//
//	Rectangle();
//	Rectangle(double x, double y, double width, double height);
//
//protected:
//	double _width;
//	double _height;
//};
//
//void Rectangle::Draw() const
//{
//	cout << "[Rectangle] Position = (" << _x << ", " << _y << ")		Size = (" << _width << ", " << _height << ")\n";
//}
//
//class Circle : public Shape				// 상속
//{
//public:
//	void Draw() const;
//	void SetRadius(double radius);
//
//	Circle();
//	Circle(double x, double y, double radius);
//
//protected:
//	double _radius;
//};
//
//void Circle::Draw() const
//{
//	cout << "[Circle] Position = (" << _x << ", " << _y << ")		Radius = (" << _radius << "\n";
//}
//
//class Shape 
//{
//public:
//	void Move(double x, double y);
//	virtual void Draw() const;
//
//	Shape();
//	Shape(double x, double y);
//
//protected:
//	double _x, _y;
//};
//
//int main()
//{
//	Shape s;
//	s.Move(100, 100);
//	s.Draw();
//
//	Rectangle r;
//	r.Move(200, 100);
//	r.Resize(50, 50);
//	r.Draw();
//
//	Circle c;
//	c.Move(300, 100);
//	c.SetRadius(30);
//	c.Draw();
//
//	Shape* shapes[5] = { NULL };
//
//	shapes[0] = new Circle(100, 100, 50);
//	shapes[1] = new Rectangle(300, 300, 100,100);
//	shapes[2] = new Rectangle(200, 100, 50, 150);
//	shapes[3] = new Circle(100, 300, 150);
//	shapes[4] = new Rectangle(200, 200, 200,200);
//
//	for (int i = 0; i < 5; i++)
//	{
//		shapes[i]->Draw();
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		delete shapes[i];
//		shapes[i] = NULL;
//	}
//
//	return 0;
//}

class A {
public:
	virtual void func() { cout << "A's func" << endl; }
};

class B : public A {
public:
	virtual void func() { cout << "B's func" << endl; }
};

int main(void) {
	A *aaa = new A();
	B * bbb = new B();

	aaa->func();
	bbb->func();

	aaa = bbb;
	aaa->func();
	
	return 0;
}