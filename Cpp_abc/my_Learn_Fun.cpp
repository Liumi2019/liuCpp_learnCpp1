#include"my_Learn_Fun.h"
#include"Sales_data.h"


// 用户输入接口
int input_a(int a) {

	cout << "输入一个数：" << std::endl;

	if (std::cin >> a) {

	}
	else {
		cout << "a为小于10的正整数！" << std::endl;
		cout << "a取默认值：0" << std::endl;
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
		cout << b;
	}
	cout << std::endl;

	a = 0;
	while (a < 10) {
		/*
		a++，先赋值, 后加1
		打印：0,1,2,3,4,5，...,9
		*/
		c = a++;
		cout << c;
	}
	cout << std::endl;

}

// for语句与左右"++"运算符
void learn_for_PP(int a) {

	int b = 0, c = 0;
	for (; a < 10; a++) {
		b = ++a;
		c = a++;
		cout << "a=" << a << std::endl;
		cout << "b=" << b << std::endl;
		cout << "c=" << c << std::endl;
	}

	cout << "另一个for语句" << std::endl;

	a = 0;

	for (; a < 10; a++) {
		b = ++a;
		c = a++;

		cout << "a=" << a << std::endl;
		cout << "b=" << b << std::endl;
		cout << "c=" << c << std::endl;
	}

}


// 引用的原理
void reference_yu(int a) {
	int b, & re_a = a;
	int& re_b = b;

	b = 50;

	cout << "re_a" << re_a << std::endl;
	cout << "re_b" << re_b << std::endl;


}

void Sale_data(int i) {

	if (i == 0) {
		return;
	}

	Sales_data book1, book2;

	book1.book_note = "1234";
	book1.revenue = 1.5;
	book1.units_sold = 20;

	book2.book_note = "5678";
	book2.revenue = 50;
	book2.units_sold = 10;

	cout << "一共" << book1.units_sold + book2.units_sold << "本书"
		<< "总价格为：" << book1.revenue * book1.units_sold + book2.revenue * book2.units_sold
		<< "元" << endl;

}

void string_yu(int)
{
	string s1("I Robt man!"), s2, s3;
	cout << s1 << endl;

	s2 = s1;
	s3 = s1 + "yes";
	cout << s2 << "\n" << s3 << endl;

	s1 = "";

	cout << "s1=" << s1 << "\ns2=" << s2
		<< "\ns3=" << s3 << endl;

}
