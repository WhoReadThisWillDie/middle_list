#include "middle_list.h"

long itc_sum_even_lst(const vector <int> &lst)
{
    int res = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 2 == 0)
            res += lst[i];
    }
    return res;
}

long itc_sum_even_part_lst(const vector <int> &lst)
{
    int res = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] % 2 == 0)
            res += lst[i];
    }
    return res;
}

void itc_odd_even_separator_lst(const vector <int> &lst, vector <int> &even, vector <int> &odd)
{
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] % 2 == 0)
            even.push_back(lst[i]);
        else
            odd.push_back(lst[i]);
    }
}

void itc_pos_neg_separator_lst(const vector <int> &lst, vector <int> &negative, vector <int> &null, vector <int> &positive)
{
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] < 0)
            negative.push_back(lst[i]);
        else if (lst[i] == 0)
            null.push_back(lst[i]);
        else
            positive.push_back(lst[i]);
    }
}
