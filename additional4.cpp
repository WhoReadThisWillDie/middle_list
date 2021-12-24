#include "middle_list.h"

int max_neg(const vector <int>& lst)
{
    int res = -2147483647;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] < 0 && res < lst[i])
            res = lst[i];
    }
    return res;
}

int min_neg(const vector <int>& lst)
{
    int res = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] < 0 && res > lst[i])
            res = lst[i];
    }
    return res;
}

int sum_neg(const vector <int> lst)
{
    int res = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] < 0)
            res += lst[i];
    }
    return res;
}

int average_neg(const vector <int> lst)
{
    int res = sum_neg(lst) / count_neg(lst);
    return res;
}

int null_count(const vector <int> lst)
{
    int res = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] == 0)
            res++;
    }
    return res;
}