#include <iostream>
#include <algorithm>

using namespace std;

class CheckPerm
{
public:
    bool checkPerm(string s1, string s2);
    bool CP(string s1, string s2);

};

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    CheckPerm *CP = new CheckPerm;

    //cout << CP->checkPerm(s1, s2);
    cout << CP->CP(s1, s2);

    return 0;
}

// solution 1: requires algorithm library to sort
bool CheckPerm :: checkPerm(string s1, string s2)
{
    int len1 = s1.length();
    int len2 = s2.length();

    if (len1 != len2) return false;

    sort(s1.begin(), s1.end());
    sort(s2.begin(),s2.end());

    for (int i = 0; i<len1; i++)
    {
        if(s1[i] != s2[i]) return false;
    }


    return true;
}

// solution 2 ASCII assumption
bool CheckPerm :: CP(string s1, string s2)
{
    int len1 = s1.length();
    int len2 = s2.length();

    if (len1 != len2) return false;

    int CF[128] = {0};

    for (int i = 0; i<len1; i++)
    {
        int val = (int)s1[i];
        CF[val]++;
    }

    for (int j = 0; j<len1; j++)
    {
        int val = (int)s2[j];
        CF[val]--;
        if(CF[val] < 0) return false;
    }

    return true;

}
