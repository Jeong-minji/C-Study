#include <iostream>
using namespace std;

class DynamicArray
{
public:
	int* arr;

	DynamicArray(int arraySize);
	~DynamicArray();
};

DynamicArray::DynamicArray(int arraySize)
{
	// 동적으로 메모리 할당
	arr = new int[arraySize];
}

DynamicArray::~DynamicArray()
{
	cout << "소멸자 불려짐\n";

	// 메모리 해제
	delete[] arr;
	arr = NULL;
}

int main()
{
	int size;
	cout << "입력할 정수의 개수: ";
	cin >> size;

	DynamicArray da(size);

	for (int i = 0; i < size; i++)
	{
		cin >> da.arr[i];
	}

	for (int i = 0; i < size; i++)
	{
		cout << da.arr[i] << " ";
	}

	cout << "\n";

	return 0;
}