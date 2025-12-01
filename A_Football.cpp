#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
 
    int T1=0,T2=0;
    string team1="",team2="";
 
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
 
        if(i==0)
        {
            team1=s;
            T1++;
        }
        else if(team1==s)
        {
            T1++;
        }
        else
        {
            team2=s;
            T2++;
        }
 
        
    }
 
    priority_queue< pair<int,string> >pq;
    pq.push({T1,team1});
    pq.push({T2,team2});
 
    pair<int,string> is=pq.top();
    cout<<is.second;
    return 0;
}