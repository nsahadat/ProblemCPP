#include <iostream>

using namespace std;

class URLify
{
    public:
    void urlfy (char *modString, string str, int len);
};

int main()
{
    URLify *ur = new URLify;
    string testString;
    getline(cin, testString);
    int len = testString.length();
    char modstr[len-1] = {};
    int actlen;
    cin >> actlen;
    ur->urlfy(modstr,testString,actlen);

    cout << modstr << endl;
    return 0;
}

void URLify :: urlfy(char *modString, string str, int actlen)
{
    int len = str.length();
    //char modString[len];
    int ct = 0;
    for (int i = 0; i<actlen; i++)
    {
        if (str[i] == ' ')
        {
            modString[ct++] = '%';
            modString[ct++] = '2';
            modString[ct++] = '0';
           // cout << "it's a space" << endl;
        }
        else
        {
            modString[ct++] = str[i];
          //  cout << "it's not a space" << endl;
        }
    }
    //cout << str << endl;
   // cout << modString << endl;
    //return modString;
}
