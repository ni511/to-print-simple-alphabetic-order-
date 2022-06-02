/*to print alphabets pattern
n=3
AAA
BBB
CCC*/
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
/*TOO PRINT OUTPUT LIKE
N:
3
ABC
ABC
ABC
*/
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
        while(j<n)
        {
            char ch='A'+j-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}
/*TOO PRINT PATTERN LIKE
N:
3
ABC
DEF
GHI
*/
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    int i=1,n,count=1;
    cout<<"N:\n";
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            char ch='A'+count-1;
            cout<<ch;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
/*TOO GET OUTPUT LIKE
N:
3
ABC
BCD
CDE
*/
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
        int count=0;
        while(j<=n)
        {
            
            char ch='A'+i-1+count;
            cout<<ch;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
