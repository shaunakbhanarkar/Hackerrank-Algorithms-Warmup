#include<bits/stdc++.h>
using namespace std;

int main()
{
    long a[5];
    long sum=0;
    for (int i=0;i<5;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }

    // cout<<"sum="<<sum<<endl;
    long res[5];
    for (int i=0;i<5;i++)
    {
        res[i]=sum-a[i];
        // cout<<"res"<<i<<"="<<res[i]<<endl;
    }

    long min=res[0];
    long max=res[0];

    for (int i=0;i<5;i++)
    {
        if (min>res[i])
        {
            min = res[i];
        }

        if (max<res[i])
        {
            max = res[i];
        }
    }

    cout<<min<<" ";
    cout<<max<<endl;


    return 0;
}
