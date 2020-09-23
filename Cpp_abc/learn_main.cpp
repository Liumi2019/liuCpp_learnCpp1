#include<iostream>

void learn_PP(int a) {
	int b = 0, c = 0;

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

}


int main() {

	int a = 0, d = 0;

	std::cout << "输入一个数：" << std::endl;

	if (!(std::cin >> a)) {
		std::cout << "数字必须为整数！" << std::endl;
		std::cin >> a;
	}

	while (a > 10 || a < 0) {
		std::cout << "a为小于10的正整数！" << std::endl;
		std::cin >> a;

		if (a < 10 && a > 0) {
			break;
		}
	}

	learn_PP(a);
	
	// 基本代码
	// system("pause");
	return 0;
}