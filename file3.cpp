#include "middle_list.h"

void itc_pos_neg_analysis_lst(const vector <int>& lst)
{
	setlocale(LC_ALL, "Russian");
	cout << "�������������:" << "		�������������:" << endl
		<< "���������� �����: " << count_pos(lst) << "		���������� �����: " << count_neg(lst) << endl
		<< "������������ �����: " << max_pos(lst) << "		������������ �����: " << max_neg(lst) << endl
		<< "����������� �����: " << min_pos(lst) << "		����������� �����: " << min_neg(lst) << endl
		<< "����� �����: " << sum_pos(lst) << "		����� �����: " << sum_neg(lst) << endl
		<< "������� ��������: " << average_pos(lst) << "		������� ��������: " << average_neg(lst) << endl;
	cout << endl;
	cout << "���������� �����: " << null_count(lst);
 }