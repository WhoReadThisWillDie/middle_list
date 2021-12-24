#include "middle_list.h"

int odd_count(const vector <int>& lst)
{
    int res = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] % 2 == 1)
            res++;
    }
    return res;
}

int max_odd(const vector <int>& lst)
{
    int res = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] % 2 == 1 && res < lst[i])
            res = lst[i];
    }
    return res;
}

int min_odd(const vector <int>& lst)
{
    int res = 2147483647;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] % 2 == 1 && res > lst[i])
            res = lst[i];
    }
    return res;
}

int sum_odd(const vector <int> lst)
{
    int res = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] % 2 == 1)
            res += lst[i];
    }
    return res;
}

int count_pos(const vector <int> lst)
{
    int res = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > 0)
            res++;
    }
    return res;
}