#include <iostream>

using namespace std;

void main()
{
	int data1, data2;
	int num;
	cout << "����� ���� �������� �Է��ϼ���." << endl;
	cin >> data1;
	cin >> data2; 
	if (data1 > data2)
		num = data1;
	else
		num = data2;
	int max;
	for (int i = 1; i <= num; i++) {
		if ((data1 % i) == 0 && (data2 % i) == 0)
			max = i;
	}
	cout << "�ִ������� " << max << "�̴�." << endl;
	getchar();

	getchar();
	return;
}