#include "middle_list.h"

vector <char> ft_strtlist(string str)
{
    vector <char> mass;
    for (int i = 0; str[i] != '\0'; i++) {
        mass.push_back(str[i]);
    }
    return mass;
}

string ft_join(vector <char> lst, string sep) //не робит
{
    string res = "";
    for (int i = 0; i < lst.size() - 1; i++) {
        res += lst[i];
        res += sep;
    }
    res += lst[lst.size() - 1];
    return res;
}
