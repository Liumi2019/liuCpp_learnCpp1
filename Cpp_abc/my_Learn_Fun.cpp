#include"my_Learn_Fun.h"


// 用户输入接口
int input_a(int a) {

	std::cout << "输入一个数：" << std::endl;

	if (std::cin >> a) {

	}
	else {
		std::cout << "a为小于10的正整数！" << std::endl;
		std::cout << "a取默认值：0" << std::endl;
	}

	return a;
}


// while语句与左右"++"运算符
void learn_while_PP(int a) {
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

// for语句与左右"++"运算符
void learn_for_PP(int a) {

	int b = 0, c = 0;
	for (; a < 10; a++) {
		b = ++a;
		c = a++;
		std::cout << "a=" << a << std::endl;
		std::cout << "b=" << b << std::endl;
		std::cout << "c=" << c << std::endl;
	}

	std::cout << "另一个for语句" << std::endl;

	a = 0;

	for (; a < 10; a++) {
		b = ++a;
		c = a++;

		std::cout << "a=" << a << std::endl;
		std::cout << "b=" << b << std::endl;
		std::cout << "c=" << c << std::endl;
	}

}


// 引用的原理
void reference_yu(int a) {
	int b, & re_a = a;
	int& re_b = b;

	b = 50;

	std::cout << "re_a" << re_a << std::endl;
	std::cout << "re_b" << re_b << std::endl;


}