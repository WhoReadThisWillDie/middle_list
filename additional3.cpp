#include "middle_list.h"

int max_pos(const vector <int>& lst)
{
    int res = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > 0 && res < lst[i])
            res = lst[i];
    }
    return res;
}

int min_pos(const vector <int>& lst)
{
    int res = 2147483647;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > 0 && res > lst[i])
            res = lst[i];
    }
    return res;
}

int sum_pos(const vector <int> lst)
{
    int res = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > 0)
            res += lst[i];
    }
    return res;
}

int average_pos(const vector <int> lst)
{
    int res = sum_pos(lst) / count_pos(lst);
    return res;
}

int count_neg(const vector <int> lst)
{
    int res = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] < 0)
            res++;
    }
    return res;
}