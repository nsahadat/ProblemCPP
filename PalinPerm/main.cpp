#include <iostream>


// palindrome Permutation
/*
properties of palindrome:
can be even or odd length: for even length each character should repeat twice
for odd length each character should repeat twice except one character
Not case sensitive means: need to convert to lower case character.

Hash map for ASCII should be the best choice.

*/
using namespace std;

class Palinperm
{
    public:
            bool PP (string str);

};

int main()
{
    Palinperm *pp = new Palinperm;
    string inpstring;

    getline(cin, inpstring);

    cout << pp->PP(inpstring) << endl;
    return 0;
}

bool Palinperm :: PP(string str)
{
    int len = str.length();
    int ChB[26] = {0};

    for (int i=0; i<len; i++)
    {
        int val = (int)str[i];
        if ((val >= 65) && (val <= 90))
        {
            ChB[val-65]++;
        }
        else if ((val >=97) && (val <= 122))
        {
            ChB[val-97]++;
        }

    }

    int oddcount = 0;
    for (int j = 0; j<26; j++)
    {
        if(ChB[j]%2)
        {
            oddcount++;
        }

        //cout << ChB[j] << endl;
    }
    if (oddcount>1 || (len%2 && oddcount!=1))
    {
        return false;
    }


    return true;
}
