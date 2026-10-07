#include <stdio.h>

double CalculateBMI(double weight, double height);

int main() {
	
	CalculateBMI(70, 1.7);
	return 0;
}

double CalculateBMI(double weight, double height) {    //weight는 몸무게, height는 키(미터 단위)
	return weight / (height * height);
}
