#include "middle_list.h"

void print_vector(vector <int> &mass)
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

int itc_find_str(string str1, string str2)
{
    int num = 0;
    int count_num = 0;
    int res_num = 0;
    for (int i = 0; i < itc_len(str1); i++) {
        if (str1[i] == str2[num]) {
            if (num == 0)
                res_num = i;
            num++;
            count_num++;
            if (count_num == itc_len(str2))
                return res_num;
        }
        else {
            num = 0;
            count_num = 0;
        }
    }
    return -1;
}

string itc_slice_str(string str, int start, int end)
{
    string res_str = "";
    if (start > end) {
        return str;
    }
    if (end <= itc_len(str)) {
        for (int i = start; i <= end; i++) {
            res_str += str[i];
        }
    }
    else {
        for (int i = start; i < itc_len(str); i++) {
            res_str += str[i];
        }
    }
    return res_str;
}
