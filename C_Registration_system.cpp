#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    map<string,int>mp;

    string l;

     while(n--)
     {
        string s;
        cin>>s;

        if(mp[s]==0)
        {
            
            cout<<"OK"<<endl;
            mp[s]=1;      

        }
        else
        {
            string extra=s+ to_string(mp[s]);
            cout<<extra<<endl;
            mp[s]++;
        }
        
        

       

       


     }



    return 0;
}