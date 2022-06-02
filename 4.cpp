//to print alphabets pattern
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    int i=1,n;
    cout<<"N:\n";
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            char ch='A'+i-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}