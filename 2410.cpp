#include <iostream>
using namespace std;
int main() {
	/* 6 ���� ����� ����� N � ����� �� N ������������� ������������
	�����.������� � ��� �� ������� ������� ����� ���� ����� �� ������� ������(��� ������������ ����� � ������� ����� ������), � �����
		������������ ���� ������� ������.
	double p = 1;
	double x;
	int n;
	cin >> n;
	int i = 1;
	while (i <= n) {
		cin >> x;
		cout << x - (int)x << endl;
		p = p * (x - (int)x);
		i++;
	}
	cout << p << endl;*/
	/*Series7 ���� ����� ����� N � ����� �� N ������������ �����. ������� �
	��� �� ������� ����������� �������� ���� ����� �� ������� ������(���
	����� �����), � ����� ����� ���� ����������� ��������.*/
	/*double s = 0;
	double x;
	int n;
	cin >> n;
	int i = 1;
	while (i <= n) {
		cin >> x;
		cout << round(x) << endl;
		s = s + round(x);
		i++;
	}
	cout << s << endl;*/
	/*Series8. ���� ����� ����� N � ����� �� N ����� �����. ������� � ��� ��
	������� ��� ������ ����� �� ������� ������ � ���������� K ����� �����.*/	/*int x;
	int n;
	int k = 0;
	cin >> n;
	int i = 1;
	while (i <= n) {
		cin >> x;
		if (x % 2 == 0) { cout << x << endl; k++; }
		i++;
	}
	cout << k << endl;*/
	/*Series9. ���� ����� ����� N � ����� �� N ����� �����. ������� � ��� ��
    ������� ������ ���� �������� ����� �� ������� ������ � ���������� K
    ����� �����.*/
	/*int n;
	cin >> n;
	int x;
	int k = 0;
	int i = 1;
	while (i <= n) { 
		cin >> x;
		if (x % 2 != 0) { cout << i << endl; k++; }
		i++;
	}
	cout << k << endl;*/


	/*Series10. ���� ����� ����� N � ����� �� N ����� �����. ���� � ������
    ������� ������������� �����, �� ������� TRUE; � ��������� ������
    ������� FALSE.    */
	/*int n;
	cin >> n;
	int x;
	int i = 1;
	int p = 0;
	while (i <= n) {
		cin >> x;
		if (x > 0) { p++; }
		i++;
	}
	if (p > 0) { cout << "TRUE" << endl; }
	else { cout << "FALSE" << endl; }*/



	/*Series11. ���� ����� ����� K, N � ����� �� N ����� �����. ���� � ������
    ������� �����, ������� K, �� ������� TRUE; � ��������� ������ �������
    FALSE*/
	/*int n;
	cin >> n;
	int x;
	int k;
	cin >> k;
	int i = 1;
	int t = 0;
	while (i <= n) {
		cin >> x;
		if (x < k ) { t++; }
		i++;
	}
	if(t>0) { cout << "TRUE" << endl; }
	else { cout << "FALSE" << endl; }*/


}