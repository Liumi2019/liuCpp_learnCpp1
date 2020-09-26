#include"my_Learn_Fun.h"


// �û�����ӿ�
int input_a(int a) {

	std::cout << "����һ������" << std::endl;

	if (std::cin >> a) {

	}
	else {
		std::cout << "aΪС��10����������" << std::endl;
		std::cout << "aȡĬ��ֵ��0" << std::endl;
	}

	return a;
}


// while���������"++"�����
void learn_while_PP(int a) {
	int b = 0, c = 0;

	while (a < 10) {
		/*
		++a���ȼ�1��ֵ
		��ӡ��1,2,3,4,5��..., 10
		*/
		b = ++a;
		std::cout << b;
	}
	std::cout << std::endl;

	a = 0;
	while (a < 10) {
		/*
		a++���ȸ�ֵ, ���1
		��ӡ��0,1,2,3,4,5��...,9
		*/
		c = a++;
		std::cout << c;
	}
	std::cout << std::endl;

}

// for���������"++"�����
void learn_for_PP(int a) {

	int b = 0, c = 0;
	for (; a < 10; a++) {
		b = ++a;
		c = a++;
		std::cout << "a=" << a << std::endl;
		std::cout << "b=" << b << std::endl;
		std::cout << "c=" << c << std::endl;
	}

	std::cout << "��һ��for���" << std::endl;

	a = 0;

	for (; a < 10; a++) {
		b = ++a;
		c = a++;

		std::cout << "a=" << a << std::endl;
		std::cout << "b=" << b << std::endl;
		std::cout << "c=" << c << std::endl;
	}

}


// ���õ�ԭ��
void reference_yu(int a) {
	int b, & re_a = a;
	int& re_b = b;

	b = 50;

	std::cout << "re_a" << re_a << std::endl;
	std::cout << "re_b" << re_b << std::endl;


}