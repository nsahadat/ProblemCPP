#include <iostream>

/*
find the string compression by adding a number to the repetition count and replace the characters

aabcccccaaa->a2b1c5a3

*/

/*
counting the characters and adding it after the when its different

*/


using namespace std;

class StringCompression
{
    public:
    string SC(string str);
};

int main()
{
    string str;
    StringCompression *sc = new StringCompression;
    getline(cin, str);

    cout << sc->SC(str);
    return 0;
}

string StringCompression::SC(string str)
{
    int len = str.length();
    int ct = 1;
    int j = 0;
    bool flag = false;
    char temp[len] = {};
    for (int i = 0; i<len; i++)
    {
        if(str[i] == str[i+1])
        {
            ct++;       // count number of repetition
            flag = true;
        }
        else
        {
            // done counting
            temp[j++] = str[i]; // insert the character
            temp[j++] = '0' + ct; // insert the repetition
            ct = 1;             // count to 1
        }
    }
    // one bug if it is not compressed then return the original string to solve it flag is used

    return flag ? temp:str;
}


