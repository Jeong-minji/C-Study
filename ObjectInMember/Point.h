class Point
{
public:
	// 멤버 함수
	void Print() const;

	// 생성자들
	Point();
	Point(int initialX, int initialY);
	Point(const Point& pt);

	// 접근자
	void SetX(int value);
	void SetY(int value);
	int GetX() const { return x; }
	int GetY() const { return y; }

private:
	// 멤버 변수
	int x, y;
};
