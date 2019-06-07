#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */

    if (s[8] == 'A' && s[0] == '1' && s[1] == '2')      //12:00 AM = 00:00
    {
        s[0]='0';
        s[1]='0';
    }

    if (s[8] == 'P')
    {
        if (s[0]=='0' && s[1]=='1')         //01:00 PM = 13:00
        {
            s[0]='1';
            s[1]='3';
        }
        else if (s[0] == '0' && s[1] == '2')    //02:00 PM = 14:00
        {
          s[0] = '1';
          s[1] = '4';
        }
        else if (s[0] == '0' && s[1] == '3')    //03:00 PM = 15:00
        {
          s[0] = '1';
          s[1] = '5';
        }
        else if (s[0] == '0' && s[1] == '4')    //04:00 PM = 16:00
        {
          s[0] = '1';
          s[1] = '6';
        }
        else if (s[0] == '0' && s[1] == '5')    //05:00 PM = 17:00
        {
          s[0] = '1';
          s[1] = '7';
        }
        else if (s[0] == '0' && s[1] == '6')    //06:00 PM = 18:00
        {
          s[0] = '1';
          s[1] = '8';
        }
        else if (s[0] == '0' && s[1] == '7')    //07:00 PM = 19:00
        {
          s[0] = '1';
          s[1] = '9';
        }
        else if (s[0] == '0' && s[1] == '8')    //08:00 PM = 20:00
        {
          s[0] = '2';
          s[1] = '0';
        }
        else if (s[0] == '0' && s[1] == '9')    //09:00 PM = 21:00
        {
          s[0] = '2';
          s[1] = '1';
        }
        else if (s[0] == '1' && s[1] == '0')    //10:00 PM = 22:00
        {
          s[0] = '2';
          s[1] = '2';
        }
        else if (s[0] == '1' && s[1] == '1')    //11:00 PM = 23:00
        {
          s[0] = '2';
          s[1] = '3';
        }
        else if (s[0] == '1' && s[1] == '2')    //12:00 PM = 12:00
        {
          //do nothing
        }
    }
    s.erase(s.end()-1);
    s.erase(s.end()-1);

    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
