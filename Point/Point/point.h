class Point
{
public:
	enum { MIN_X = 0, MAX_X = 100, MIN_Y = 0, MAX_Y = 100 };
	typedef int COOR_T;

	void Print() const;
	void Offset(COOR_T x_delta, COOR_T y_delta);
	void Offset(const Point& pt);

	// 생성자
	Point();
	Point(COOR_T initialX, COOR_T initalY);
	Point(const Point& pt);

	// 접근자
	void SetX(COOR_T value);
	void SetY(COOR_T value);
	COOR_T GetX() const { return x; };
	COOR_T GetY() const { return y; };

private:
	// 멤버변수
	COOR_T x, y;
};

inline void Point::SetX(COOR_T value) {
	if (value < MIN_X)
		x = MIN_X;
	else if (value > MAX_X)
		x = MAX_X;
	else
		x = value;
}

inline void Point::SetY(COOR_T value) {
	if (value < MIN_Y)
		y = MIN_Y;
	else if (value > MAX_Y)
		y = MAX_Y;
	else
		y = value;
}
