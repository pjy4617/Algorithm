#include <iostream>

using namespace std;

void main()
{
	int data1, data2;
	int num;
	cout << "약수를 구할 정숫값을 입력하세요." << endl;
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
	cout << "최대공약수는 " << max << "이다." << endl;
	getchar();

	getchar();
	return;
}