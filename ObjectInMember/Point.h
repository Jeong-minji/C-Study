class Point
{
public:
	// ��� �Լ�
	void Print() const;

	// �����ڵ�
	Point();
	Point(int initialX, int initialY);
	Point(const Point& pt);

	// ������
	void SetX(int value);
	void SetY(int value);
	int GetX() const { return x; }
	int GetY() const { return y; }

private:
	// ��� ����
	int x, y;
};
