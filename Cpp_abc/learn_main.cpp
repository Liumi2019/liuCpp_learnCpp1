#include<iostream>

void learn_PP(int a) {
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


int main() {

	int a = 0, d = 0;

	std::cout << "����һ������" << std::endl;

	if (!(std::cin >> a)) {
		std::cout << "���ֱ���Ϊ������" << std::endl;
		std::cin >> a;
	}

	while (a > 10 || a < 0) {
		std::cout << "aΪС��10����������" << std::endl;
		std::cin >> a;

		if (a < 10 && a > 0) {
			break;
		}
	}

	learn_PP(a);
	
	// ��������
	// system("pause");
	return 0;
}