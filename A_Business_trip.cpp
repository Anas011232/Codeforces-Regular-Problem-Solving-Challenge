#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;

    vector<int>p(12);

    priority_queue<int,vector<int>>pq;

    int top=0;
    int cnt=0;

    int flag=0;

    if(k==0)
    {
        cout<<0;
        return 0;
     
    }

    for(int i=0; i<12; i++)
    {
        cin>>p[i];
        pq.push(p[i]);

    }
    
        while(!pq.empty())
        {
            int tp=pq.top();
            pq.pop();
            cnt++;

            top+=tp;

            if(top>=k)
            {
                break;
                
            }
            
        }

    
    if(top<k)
    {
        cout<<"-1";
    }
    else
    {
        cout<<cnt;
    }

    

    

    return 0;
}