#include<iostream>

int main() {
	int a = 0, b = 0, c = 0;

	while (a < 10) {
		/*
		++a，先加1赋值
		打印：1,2,3,4,5，..., 10
		*/
		b = ++a;
		std::cout << b;
	}
	std::cout << std::endl;

	a = 0;
	while (a < 10) {
		/*
		a++，先赋值, 后加1
		打印：0,1,2,3,4,5，...,9
		*/
		c = a++;
		std::cout << c;
	}
	std::cout << std::endl;

	system("pause");
	return 0;
}