#include "rect.h"
#include <iostream>
using namespace std;

Rect::Rect()
{

}

void Rect::SetTopLeft(const Point& topLeft)
{
	_topLeft = topLeft;
}

void Rect::SetBottomRight(const Point& bottomRight)
{
	_bottomRight = bottomRight;
}

void Rect::SetRect(int left, int top, int right, int bottom)
{
	_topLeft.SetX(left);
	_topLeft.SetY(top);
	_bottomRight.SetX(right);
	_bottomRight.SetY(bottom);
}

Point Rect::GetTopLeft() const
{
	return _topLeft;
}
