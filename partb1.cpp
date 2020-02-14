#include<iostream>

using namespace std;

 

int Exteuc(int a, int b, int *x, int *y)

{

    if (a == 0)

    {

        *x = 0, *y = 1;

        return b;

    }

 

    int x1, y1;

    int gcd = Exteuc(b%a, a, &x1, &y1);

 

    *x = y1 - (b/a) * x1;

    *y = x1;

 

    return gcd;

}

 

int main()

{

    int a, m;

    cin>>a>>m;

   

    int x, y;

    int g = Exteuc(a, m, &x, &y);

    if (g != 1)

        cout << "\n Inverse does not exist. ";

    else

    {

        int res = (x%m + m) % m;

        cout << "\nMultiplicative inverse of( "<<a<<","<<m<<") is "<< res;

    }

    return 0;

}
