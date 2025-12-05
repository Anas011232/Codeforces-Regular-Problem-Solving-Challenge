#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int>v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];

    }

    int left=0;
    int right=n-1;

    long long int ssum=0;
    long long int dsum=0;

    int val;

    bool flag=true;


    

    while(left<=right)
    {
        if(v[left]>v[right])
        {
            val=v[left];

            left++;

        }
        else{
            val=v[right];
            right--;
        }

        if(flag==true) ssum+=val;
        else dsum+=val;

        flag=!flag;
    }

    cout<<ssum<<" "<<dsum;
    return 0;
}