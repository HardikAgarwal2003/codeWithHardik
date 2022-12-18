#include<iostream>
using namespace std;
class change{
public:
    int value(char a)
    {
        if(a == 'I')
            return 1;
        else if(a == 'V')
            return 5;
        else if(a == 'X')
            return 10;
        else if(a == 'L')
            return 50;
        else if(a == 'C')
            return 100;
        else if(a == 'D')
            return 500;
        else if(a == 'M')
            return 1000;
        else 
            return 0;
    }
    int romanToInt(string s) {
        int ans = 0;
        for(int i =0; i < s.length()-1; i++)
        {
            int s1 = value(s[i]);
            int s2 = value(s[i+1]);
            if(i + 1 < s.length())
            {
                if(s1 >= s2)
                {
                    ans += s1;
                }
                else
                {
                    ans -= s1;
                }
            }
        }
        return ans + value(s[s.length() - 1]);
    }
};
int main()
{
	change c1;
	string s = "MCMXCIV";
	cout << "Roman No. (MCMXCIV) to Integer is : " << c1.romanToInt(s);
	return 0;
}
