#include<bits/stdc++.h>
using namespace std;
#define F            first
#define S            second
#define PB           push_back
#define MP           make_pair
#define Fin          freopen("input.txt","r",stdin)
#define Fout         freopen("output.txt","w",stdout)
#define Precision(a) cout << fixed << setprecision(a)
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define INF9 2147483647
#define INF18 9223372036854775806
#define ll long long
#define ull unsigned long long
#define yes printf("YES\n")
#define no printf("NO\n")
#define pp pair<int,int>
#define ppp pair<int,pp >
#define mapii map<int,int>
#define mapll map<ll,ll>
#define mapsi map<string,int>
#define mapss map<string,string>

char Uplowch(char ch)
{
    if(ch >= 'A' &&  ch <= 'Z')
        ch += 32;
    return ch;
}
char Lowupch(char ch)
{
    if(ch >= 'a' &&  ch <= 'z')
        ch -= 32;
    return ch;
}



int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0;
    string s;
    int ara[30];
    int ara2[8] = {13,9,3,18,19,6,20,15};

    while(cin>>s)
    {
        n = s.size();
        memset(ara,0,sizeof(ara));
        for(i=0;i<n;i++)
        {
            ara[s[i]-'a']++;
        }
        sum = 0;
        for(i=0;i<8;i++)
        {
            if(ara[ara2[i]-1]>=1)sum++;
        }


        if(sum==8)
        {
            printf("We both love Microsoft!\n");
        }
        else
        {
            printf("Only I love Microsoft!\n");
        }
    }

    return 0;
}
