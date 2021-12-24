#include "middle_list.h"

void print_vector(vector <int>& mass)
{
    if (mass.size() > 0) {
        for (int i = 0; i < mass.size(); i++) {
            cout << mass[i] << " ";
        }
    }
}

int itc_len(string str)
{
    int res = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        res++;
    }
    return res;
}

int even_count(const vector <int>& lst)
{
    int res = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] % 2 == 0)
            res++;
    }
    return res;
}

int max_even(const vector <int>& lst)
{
    int res = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] % 2 == 0 && res < lst[i])
            res = lst[i];
    }
    return res;
}

int min_even(const vector <int>& lst)
{
    int res = 2147483647;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] % 2 == 0 && res > lst[i])
            res = lst[i];
    }
    return res;
}