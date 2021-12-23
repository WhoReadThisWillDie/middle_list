#ifndef MIDDLE_LIST_H_INCLUDED
#define MIDDLE_LIST_H_INCLUDED

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void print_vector(vector <int> &mass);
int itc_len(string str);
int itc_find_str(string str1, string str2);
string itc_slice_str(string str, int start, int end);

vector <char> itc_strtlist(string str);
string itc_join(vector <char> lst, string sep);
string itc_rmstrspc(string str);
string itc_rmstrchar(string str, string less);
long itc_sumlst(const vector <int> &lst);

long itc_sum_even_lst(const vector <int> &lst);
long itc_sum_even_part_lst(const vector <int> &lst);
void itc_odd_even_separator_lst(const vector <int> &lst, vector <int> &even, vector <int> &odd);
void itc_pos_neg_separator_lst(const vector <int> &lst, vector <int> &negative, vector <int> &null, vector <int> &positive);

#endif // MIDDLE_LIST_H_INCLUDED
