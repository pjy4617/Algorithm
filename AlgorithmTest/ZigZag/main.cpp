#include <iostream>

using namespace std;

void main()
{
	int MaxLine = 5;
	int data;
	int MInteger;
	int LineNumber;
	cout << "������� ���� ��� ���α׷�" << endl;

	for (LineNumber = 1; LineNumber <= MaxLine; LineNumber++) {
		if ((LineNumber % 2) == 0) {//¦����
			for (data = LineNumber * 5; data >= (LineNumber * 5) - 4; data--) {
				cout << data << "\t";
			}
			cout << endl;
		}
		else {//Ȧ����
			for (data = (5 * (LineNumber - 1)) + 1; data <= (5 * (LineNumber - 1)) + 5; data++) {
				cout << data << "\t";
			}
			cout << endl;
		}
	}
	getchar();
}