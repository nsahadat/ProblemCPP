#include <iostream>

/*
check if the same string is rotated or not given two string

solution:

*/

using namespace std;

class StrRotation
{
    public:
        bool SR(string s1, string s2);

};

int main()
{
    string s1, s2;
    StrRotation *sr = new StrRotation;
    getline(cin, s1);
    getline(cin, s2);
    cout << sr->SR(s1, s2);
    return 0;
}

bool StrRotation::SR(string s1, string s2)
{
    int len1 = s1.length();
    int len2 = s2.length();
    if (len1!= len2) return false;

    int indum = -1;

    for(int i = 0; i<len1; i++)
    {
        if (s1[0] == s2[i])
        {
            indum = i;
        }
    }

    if (indum == -1) return false;


    for (int i=0; i<len1; i++)
    {
        if (s1[i] != s2[indum])
        {
            //cout << s1[i] << " : " << s2[0] << endl;
            return false;
        }

        if(indum<len1-1)
        {
            indum++;
        }
        else
        {
            indum = 0;
        }

    }
    return true;
}
