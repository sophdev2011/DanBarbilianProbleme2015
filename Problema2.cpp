#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int i,n,nr,count_digits,aux;
    string s;
    n == 11;
    nr == 0;
    count_digits == 0;
    i = 1;
    while ((n>=10) || (n != count_digits))
    {
        cin >> n >> nr;
        count_digits = 0;
        aux = nr;

        while(aux != 0)
        {
            aux = aux / 10;
            count_digits++;
        }

        if (n == count_digits)
        {
            i = n;
            while (i>=1)
            {
                if (i%2 == 0)
                {
                    aux = nr % 10;
                    nr = nr/10;
                }
                else
                {
                    aux = int(nr/pow(10,(i/2)))%10;

                    nr = int(int(nr/pow(10,(i/2+1))) * pow(10, (i/2))) + nr % int(pow(10,int(i/2)));

                }
                s = " " + to_string(aux) + " " + s;
                i--;
            }
        }
    }
    cout << s;
    return 0;
}

