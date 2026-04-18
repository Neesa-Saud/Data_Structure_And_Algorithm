class Solution {
public:
    int romanToInt(string s) {
        int current = 0, previous= 0,total=0;
       for (int i = s.length() - 1; i >= 0; i--)

        {
            if (s[i] == 'I') current = 1;
            else if (s[i] == 'V') current = 5;
            else if (s[i] == 'X') current = 10;
            else if (s[i] == 'L') current = 50;
            else if (s[i] == 'C') current = 100;
            else if (s[i] == 'D') current = 500;
            else current = 1000;

            if(current < previous)
            {
                total = total -current;
            }
            else{
                total = total + current;
            }
            previous= current;
        }
        return total;
    }
};