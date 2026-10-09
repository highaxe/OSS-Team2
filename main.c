#include <stdio.h>

double CalculateBMI(double weight, double height); // 2026046012 오민식 추가
int IsEven(int n);   // 2026046028 허준혁 추가
int Factorial(int n);    // 2026046016 맹은재 추가
double ToFahrenheit(double c); // 2026046021 심민규 추가

int main() {
	
	pritnf("%,1f\n", CalculateBMI(70, 1.7)); 
	printf("%d\n", IsEven(4));
	printf("%d\n", Factorial(5));
	printf("%.1f\n", ToFahrenheit(18));
	return 0;
}

double CalculateBMI(double weight, double height) {    //weight는 몸무게, height는 키(미터 단위)
	return weight / (height * height);
}

int IsEven(int n) {   // n이 짝수면 1, 홀수면 0 반환
	return n % 2 == 0;
}

int Factorial(int n) {		// n 이하의 자연수를 모두 곱하는 함수
    int result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

double ToFahrenheit(double c) { // Celcius를 Fahrenheit로 변환
	return c * 9 / 5 + 32;
}
