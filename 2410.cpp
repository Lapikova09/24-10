#include <iostream>
using namespace std;
int main() {
	/* 6 Дано целое число N и набор из N положительных вещественных
	чисел.Вывести в том же порядке дробные части всех чисел из данного набора(как вещественные числа с нулевой целой частью), а также
		произведение всех дробных частей.
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
	/*Series7 Дано целое число N и набор из N вещественных чисел. Вывести в
	том же порядке округленные значения всех чисел из данного набора(как
	целые числа), а также сумму всех округленных значений.*/
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
	/*Series8. Дано целое число N и набор из N целых чисел. Вывести в том же
	порядке все четные числа из данного набора и количество K таких чисел.*/	/*int x;
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
	/*Series9. Дано целое число N и набор из N целых чисел. Вывести в том же
    порядке номера всех нечетных чисел из данного набора и количество K
    таких чисел.*/
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


	/*Series10. Дано целое число N и набор из N целых чисел. Если в наборе
    имеются положительные числа, то вывести TRUE; в противном случае
    вывести FALSE.    */
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



	/*Series11. Даны целые числа K, N и набор из N целых чисел. Если в наборе
    имеются числа, меньшие K, то вывести TRUE; в противном случае вывести
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