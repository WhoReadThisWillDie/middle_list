#include "middle_list.h"

vector <char> itc_strtlist(string str)
{
    vector <char> mass;
    for (int i = 0; str[i] != '\0'; i++) {
        mass.push_back(str[i]);
    }
    return mass;
}

string itc_join(vector <char> lst, string sep)
{
    string res = "";
    for (int i = 0; i < lst.size() - 1; i++) {
        res += lst[i];
        res += sep;
    }
    res += lst[lst.size() - 1];
    return res;
}

string itc_rmstrspc(string str)
{
    string res = "";
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ')
            res += str[i];
    }
    return res;
}

string itc_rmstrchar(string str, string less) // dont works
{
    string res;
    while (itc_find_str(str, less) != -1) {
        cout << itc_find_str(str, less) << endl;
        res += itc_slice_str(str, itc_find_str(str, less), itc_len(less) + itc_find_str(str, less));
        str = res;
    }
    return res;
}

long itc_sumlst(const vector <int> &lst)
{
    int res = 0;
    for (int i = 0; i < lst.size(); i++) {
        res += lst[i];
    }
    return res;
}
