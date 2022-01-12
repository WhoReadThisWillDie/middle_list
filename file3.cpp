#include "middle_list.h"

void itc_pos_neg_analysis_lst(const vector <int>& lst)
{
	setlocale(LC_ALL, "Russian");
	cout << "Положительные:" << "		Отрицательные:" << endl
		<< "Количество чисел: " << count_pos(lst) << "		Количество чисел: " << count_neg(lst) << endl
		<< "Максимальная цифра: " << max_pos(lst) << "		Максимальная цифра: " << max_neg(lst) << endl
		<< "Минимальная цифра: " << min_pos(lst) << "		Минимальная цифра: " << min_neg(lst) << endl
		<< "Сумма чисел: " << sum_pos(lst) << "		Сумма чисел: " << sum_neg(lst) << endl
		<< "Среднее значение: " << average_pos(lst) << "		Среднее значение: " << average_neg(lst) << endl;
	cout << endl;
	cout << "Количество нулей: " << null_count(lst);
 }