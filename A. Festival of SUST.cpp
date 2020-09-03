#include<bits/stdc++.h>
using namespace std;
int l;
 string s;
int  check(int a)
{
    int flag = 0;

    if(a<0||a>l||s[a]==','||s[a]=='.'||s[a]==' ')
    {
        flag = 1;
    }

    return flag;





}
int main()
{
    int n,m,i,j,x,y,a,b,t,CSE,EEE,SWE,ONNO,k = 0;

    scanf("%d",&t);
    getchar();
    while(t--)
    {

        getline(cin,s);

        l = s.size()-1;
        CSE = 0;
        EEE = 0;
        SWE = 0;
        ONNO = 0;
        printf("Case %d: ",++k);
        for(i=0;i<=l-2;i++)
        {
            if(s[i]=='C'&&s[i+1]=='S'&&s[i+2]=='E'&& check(i-1)==1&&check(i+3)==1)
            {
                CSE = 1;

            }
            else if(s[i]=='E'&&s[i+1]=='E'&&s[i+2]=='E'&& check(i-1)==1&&check(i+3)==1)
            {
                EEE = 1;
                ONNO = 1;
            }
            else if(s[i]=='S'&&s[i+1]=='W'&&s[i+2]=='E'&& check(i-1)==1&&check(i+3)==1)
            {
                SWE = 1;
                ONNO = 1;
            }
            else if((s[i]>='A'&&s[i]<='Z')&&(s[i+1]>='A'&&s[i+1]<='Z')&&(s[i+2]>='A'&&s[i+2]<='Z')&&check(i-1)&&check(i+3))
            {
                ONNO  = 1;
            }

        }

        if(CSE==1&&EEE==1&&SWE==1)
        {
            printf("SUST Tech Fest\n");
        }
        else if((CSE==1&&ONNO==1)||ONNO==1)
        {
            printf("Festival of SUST\n");
        }
        else if(CSE==1){
            printf("SUST CSE Carnival\n");
        }



    }



return 0;
}
