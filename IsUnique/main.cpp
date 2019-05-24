#include <iostream>
using namespace std;

// implement an algorithm to determine if a string has all unique characters.
//what if you can't use additional data structures

class UCharacter
{
    public:
    bool isUnique(string str);
};

int main()
{
    UCharacter *uc = new UCharacter;
    string str;

    getline(cin, str);

    //cin >> str;
    cout << uc->isUnique(str);

    //cout << "Hello world!" << endl;
    return 0;
}


bool UCharacter:: isUnique(string str)
{
    int len = str.length();
    if (len>128)
    {
        return false;       // more than 128 so there is repetition
    }

    bool ChSet[128] = {false};


    for (int i = 0; i<len; i++)
    {
        int val = (int) str[i];
        //cout << str[i] << " : " << val << endl;

        if(ChSet[val])
        {
            return false;   // that means it is repeated
        }
        else
        {
            ChSet[val] = true;  // setting up the value
        }

        //cout << "Chset[val] : " << val << " = " << ChSet[val] << endl;

    }

    return true;
}
