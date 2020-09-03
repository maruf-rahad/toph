#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll factorial(ll a)
{
    ll sum = 1;
    for(ll i = 1;i<=a;i++)
    {
        sum = sum*i;
    }

    return sum;

}
int main()
{   char ch[111];
    ll n,m,a,b,i,j,x,y,t,s,digit,flag;

    scanf("%lld",&t);
    while(t--)
    {
        flag = 0;
        scanf("%s %lld",&ch,&m);

        s = n;
        digit = 0;
        digit = strlen(ch);
        for(i=0;i<digit;i++)
        {
            if(ch[i]=='0')flag = 1;
        }

        if(flag==0)
        {
            printf("%lld\n",factorial(digit)/factorial(digit-m));
        }
        else
        {
            a = factorial(digit)/factorial(digit-m);
            digit--;
            m--;
            b = factorial(digit)/factorial(digit-m);
            printf("%lld\n",a-b);

        }
    }











return 0;
}
