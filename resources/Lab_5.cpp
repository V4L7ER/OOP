#include "Class_5.h"

namespace lab5
{
	void rundew() {
		setlocale(LC_ALL, "RUS");
		system("chcp 1251 > NUL 2>&1");
		double a = 1.11;
		float b = 2.2;
		CMPLX c23(2, 3);
		CMPLX c54(5, 4);
		CMPLX resultF = c23.Cmul(b);
		CMPLX resultD = c54.Cmul(a);
		std::cout << "F умноженное на float:" << std::endl;
		resultF.Print();
		std::cout << "D умноженное на double:" << std::endl;
		resultD.Print();
		std::cout << "Перегрузка оператора +:" << std::endl << "1) F + 2 = ";
		resultF = resultF + 2.00;
		resultF.Print();
		std::cout << std::endl << "2) F + D = ";
		resultF = resultF + resultD;
		resultF.Print();
	}

}

int main() {
	lab5::rundew();
	return 0;
};
