#include <iostream>

using namespace std;

int main()
{
    int N,N1,N2,N3,N4;
    char c;
    N = 0;
    N1 = 0;
    N2 = 0;
    N3 = 0;
    N4 = 0;
    c = 'a';
    while((N<1) || (N>999999999) || ((c != 'm') && (c !='d') && (c !='c')))
    {
        cin >> N >> c;
        if (c == 'm')
        {
            N1 = N/1000;
            N2 = (N%1000)/100;
            N3 = ((N%1000)%100)/10;
            N4 = ((N%1000)%100)%10;;
        }
        if (c == 'd')
        {
            N1 = N/10;
            N2 = N%10;
            N3 = 0;
            N4 = 0;
        }
        if (c == 'c')
        {
            N1 = N/100;
            N2 = (N%100)/10;
            N3 = (N%100)%10;
            N4 = 0;
        }
    }
    if(N1 != 0)
    {
        if (N1 > 1) cout << N1 << " metrii ";
        else cout << N1 << " metru ";
    }
    if(N2 != 0)
    {
        if (N2 > 1) cout << N2 << " decimetrii ";
        else cout << N2 << " decimetru ";
    }
    if(N3 != 0)
    {
        if (N3 > 1) cout << N3 << " centimetrii ";
        else cout << N3 << " centimetru ";
    }
    if(N4 != 0)
    {
        if (N4 > 1) cout << N4 << " milimetrii ";
        else cout << N4 << " milimetru ";
    }
}