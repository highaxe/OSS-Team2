#include <stdio.h>

double CalculateBMI(double weight, double height);
int IsEven(int n);   // 2026046028 허준혁 추가
int Factorial(int n);    // 2026046016 맹은재 추가

int main() {
	
	CalculateBMI(70, 1.7);
	printf("%d\n", IsEven(4));
	printf("%d\n", Factorial(5));
	return 0;
}

double CalculateBMI(double weight, double height) {    //weight는 몸무게, height는 키(미터 단위)
	return weight / (height * height);
}

int IsEven(int n) {   // n이 짝수면 1, 홀수면 0 반환
	return n % 2 == 0;
}

int Factorial(int n) {
    int result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}
