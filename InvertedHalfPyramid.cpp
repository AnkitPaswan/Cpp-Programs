#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:-\n"
    cin>>n;
    for(int i=1;i<=n;i++)
    // (int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<"\n";
    }
    return 0;
}