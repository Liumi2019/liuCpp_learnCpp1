#include<iostream>

void learn_while_PP(int);
void learn_for_PP(int);


int main() {

	int a = 0, d = 0;

	std::cout << "����һ������" << std::endl;

	
	if (std::cin >> a) {
	
	}
	else {
		std::cout << "aΪС��10����������" << std::endl;
		std::cout << "aȡĬ��ֵ��0" << std::endl;
	}



	// learn_for_PP(a);
	// learn_while_PP(a);
	
	// ��������
	// system("pause");
	return 0;
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

	for (; a < 10; ++a) {
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