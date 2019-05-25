#include <iostream>


/*
given two string return whether they are one edit away or not
if so return true

input: pale->ple output: true
pales->pale, true
pale->bake, false
blakes->flake, false
*/

/*
two possible scenario 1. same length: replace/ no modification 2. different length delete

1. check character by character count changes if >1 return false
2. find the character distances if > 1 return false
*/

using namespace std;

class OneAway
{
    public:
    bool OA(string s1, string s2);
};

int main()
{
    OneAway *oa = new OneAway;
    string s1, s2;

    getline(cin, s1);
    getline(cin, s2);

    cout << oa->OA(s1, s2);
    return 0;
}

bool OneAway::OA(string s1, string s2)
{
    int len1 = s1.length();   // original string
    int len2 = s2.length();    // modified string

    int ct = 0;

    if (len1 == len2)
    {
        for (int i = 0; i<len1; i++)
        {
            if(s1[i] != s2[i]) ct++;

            if(ct > 1) return false;
        }
    }
    else if((len1-len2) == 1)
    {
        int strind;
        for (int j = 0; j<len2; j++)
        {
            strind = s1.find(s2[j]);

            if (strind == -1) return false;
            if ((strind - j) > 1) return false;
        }

    }
    else if((len2-len1) == 1)
    {
        int strind;
        for (int j = 0; j<len1; j++)
        {
            strind = s2.find(s1[j]);

            if (strind == -1) return false;
            if ((strind - j) > 1) return false;
        }

    }
    else
    {
        return false;
    }


    return true;
}
