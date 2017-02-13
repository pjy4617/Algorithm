#include <iostream>

using namespace std;

void main()
{
	int MaxLine = 5;
	int data;
	int MInteger;
	int LineNumber;
	cout << "지그재그 숫자 출력 프로그램" << endl;

	for (LineNumber = 1; LineNumber <= MaxLine; LineNumber++) {
		if ((LineNumber % 2) == 0) {//짝수면
			for (data = LineNumber * 5; data >= (LineNumber * 5) - 4; data--) {
				cout << data << "\t";
			}
			cout << endl;
		}
		else {//홀수면
			for (data = (5 * (LineNumber - 1)) + 1; data <= (5 * (LineNumber - 1)) + 5; data++) {
				cout << data << "\t";
			}
			cout << endl;
		}
	}
	getchar();
}