#include<iostream>
using namespace std;
int main(){
int row;
cout<<"Enter the number of row:\n";
cin>>row;
for(int i=0;i<=row;i++)
{
    for(int j=0;j<i;j++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

return 0;
}