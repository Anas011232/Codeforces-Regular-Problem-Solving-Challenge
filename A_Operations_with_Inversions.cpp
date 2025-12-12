#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    
    while(t--)
    {
        int n;
        cin>>n;

        int cnt=0; 
 
        vector<int> v(n);
       
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        for(int i=0; i<v.size(); i++)
        {
            for(int j=i+1; j<v.size(); j++)
                if(v[i]>v[j])
                {
                    

                    v.erase(v.begin() + j);
                    j--;
                    
                    cnt++;     
                }
                else
                {
                    cnt;
                }
            }

           
        

        cout<<cnt<<endl;



       
    }
    return 0;
}