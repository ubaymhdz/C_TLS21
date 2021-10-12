#include <iostream>

using namespace std;
// membuat kalkulator sederhana dengan menggunakan switch case 
int main() {

	float a, b, result;
	char arithmetic;

	cout << " Kalkulator Sederhana  \n \n";

	cout << "Nilai pertama  : ";
	cin >> a;
	cout << "Pilih Operasi ( + , - , * , / ) : ";
	cin >> arithmetic;
	cout << "Nilai kedua  : ";
	cin >> b;

	switch (arithmetic) {
	case '+':
		result = a + b;
		cout << "Hasil : ";
		cout << a << arithmetic << b << " = " << result << endl;
		break;
	case '-':
		result = a - b;
		cout << "Hasil : ";
		cout << a << arithmetic << b << " = " << result << endl;
		break;
	case '*':
		result = a * b;
		cout << "Hasil : ";
		cout << a << arithmetic << b << " = " << result << endl;
		break;
	case '/':
		result = a / b;
		cout << "Hasil : ";
		cout << a << arithmetic << b << " = " << result << endl;
		break;
	default:
		cout << "The operator you entered is incorrect\n";
	}

	return 0;
}
