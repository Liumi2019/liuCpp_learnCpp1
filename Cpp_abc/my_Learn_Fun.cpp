#include"my_Learn_Fun.h"


// �û�����ӿ�
int input_a(int a) {

	cout << "����һ������" << std::endl;

	if (std::cin >> a) {

	}
	else {
		cout << "aΪС��10����������" << std::endl;
		cout << "aȡĬ��ֵ��0" << std::endl;
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
		cout << b;
	}
	cout << std::endl;

	a = 0;
	while (a < 10) {
		/*
		a++���ȸ�ֵ, ���1
		��ӡ��0,1,2,3,4,5��...,9
		*/
		c = a++;
		cout << c;
	}
	cout << std::endl;

}

// for���������"++"�����
void learn_for_PP(int a) {

	int b = 0, c = 0;
	for (; a < 10; a++) {
		b = ++a;
		c = a++;
		cout << "a=" << a << std::endl;
		cout << "b=" << b << std::endl;
		cout << "c=" << c << std::endl;
	}

	cout << "��һ��for���" << std::endl;

	a = 0;

	for (; a < 10; a++) {
		b = ++a;
		c = a++;

		cout << "a=" << a << std::endl;
		cout << "b=" << b << std::endl;
		cout << "c=" << c << std::endl;
	}

}


// ���õ�ԭ��
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

	cout << "һ��" << book1.units_sold + book2.units_sold << "����"
		<< "�ܼ۸�Ϊ��" << book1.revenue * book1.units_sold + book2.revenue * book2.units_sold
		<< "Ԫ" << endl;

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

//�˵���ӡ
void print_mune(string mune_name, double pnt, unsigned mune_W)
{
	auto name_Len = mune_name.size();

	if (name_Len == 0) {
		string point_title((mune_W / 2 - 1), ' ');

		cout << point_title << "�˵�" << point_title << endl;

	}
	else {

		unsigned pnt_Len = 4;
		unsigned point_Len = mune_W - name_Len - pnt_Len;

		string point_s2(point_Len, '.');

		cout << mune_name << point_s2 << pnt << endl;

	}
}

// �˵�����
void mnue_great(int)
{
	string mune_name;
	string mnue_end{ "#" };
	double pnt = 0.0;
	unsigned mune_W = 40;
	vector<string> mnue_all;
	vector<double> pnt_all;


	cout << "��������ͼ۸�����#�Ž�����" << endl;

	while (cin >> mune_name) {

		if (mune_name == mnue_end) {
			cout << "�������ɲ˵�" << endl;
			break;
		}
		else {
			cin >> pnt;
			mnue_all.push_back(mune_name);
			pnt_all.push_back(pnt);
		}
	}
	string a;
	print_mune(a, 0.0, mune_W = 40);

	auto pnt_it = pnt_all.begin();
	for (auto it = mnue_all.begin(); it != mnue_all.end(); ++it) {

		print_mune(*it, *pnt_it, mune_W = 40);
		pnt_it++;
	}

}
