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
	// �������� �޸� �Ҵ�
	arr = new int[arraySize];
}

DynamicArray::~DynamicArray()
{
	cout << "�Ҹ��� �ҷ���\n";

	// �޸� ����
	delete[] arr;
	arr = NULL;
}

int main()
{
	int size;
	cout << "�Է��� ������ ����: ";
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