#include<bits/stdc++.h>
using namespace std;
map<string,int>mp[110];
map<string,int>mp2;
map<string,int> :: iterator it;
vector<string> v1[110];
int main()
{
    int a,b,i,j,x,y,flag,k=0,t,flag2,z=0;
    string s,s2,ah;

    scanf("%d",&t);
    x = 0;

    while(t--)
    {#include<bits/stdc++.h>
using namespace std;
map<string,int>mp[110];
map<string,int>mp2;
map<string,int> :: iterator it;
vector<string> v1[110];
int main()
{
    int a,b,i,j,x,y,flag,k=0,t,flag2,z=0;
    string s,s2,ah;

    scanf("%d",&t);
    x = 0;

    while(t--)
    {
        flag = 0;
        cin>>s>>a;
        if(a==0)
        {
            mp[x][s] = 1;
            x++;
            mp2[s] = 1;
            printf("Request %d: OK\n",++z);

            for(it=mp2.begin();it!=mp2.end();it++)
            {
                ah = it->first;
                cout<<ah<<endl;
            }
            continue;
        }
        flag  = 0;
        flag2 = 0;

        for(k = 1; k<=a; k++)
        {

            cin>>s2;

            if(flag2==0)
            {
                for(i=0; i<x; i++)
                {
                    if(mp[i].find(s2)!=mp[i].end())
                    {
                        b = i;
                        flag2 = 1;
                        break;
                    }
                }
                if(flag2==0)
                {
                    flag = 1;
                }


            }
            if(k>1)
            {
                    if(mp[b].find(s2)==mp[b].end())
                    {
                        flag = 1;
                    }

            }

        }
        if(flag==1)
        {
            printf("Request %d: ERROR\n",++z);
        }
        else{
                mp[b][s] = 1;
                mp2[s] = 1;
            printf("Request %d: OK\n",++z);
            for(it = mp2.begin();it!=mp2.end();it++)
            {
                ah = it->first;
                cout<<ah<<endl;
            }

        }

    }










    return 0;
}
        flag = 0;
        cin>>s>>a;
        if(a==0)
        {
            mp[x][s] = 1;
            x++;
            mp2[s] = 1;
            printf("Request %d: OK\n",++z);

            for(it=mp2.begin();it!=mp2.end();it++)
            {
                ah = it->first;
                cout<<ah<<endl;
            }
            continue;
        }
        flag  = 0;
        flag2 = 0;

        for(k = 1; k<=a; k++)
        {

            cin>>s2;

            if(flag2==0)
            {
                for(i=0; i<x; i++)
                {
                    if(mp[i].find(s2)!=mp[i].end())
                    {
                        b = i;
                        flag2 = 1;
                        break;
                    }
                }
                if(flag2==0)
                {
                    flag = 1;
                }


            }
            if(k>1)
            {
                    if(mp[b].find(s2)==mp[b].end())
                    {
                        flag = 1;
                    }

            }

        }
        if(flag==1)
        {
            printf("Request %d: ERROR\n",++z);
        }
        else{
                mp[b][s] = 1;
                mp2[s] = 1;
            printf("Request %d: OK\n",++z);
            for(it = mp2.begin();it!=mp2.end();it++)
            {
                ah = it->first;
                cout<<ah<<endl;
            }

        }

    }










    return 0;
}
