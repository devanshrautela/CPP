/*#include<iostream>
using namespace std;
int main()
{
    for(int i=0; i<5; i++)
    {
        int print=1;
        for(int j=0; j<i+1; j++)
        {
            cout<<print<<" ";
            print++;
        }
        cout<<endl;
    }
}
*/
#include<iostream>
using namespace std;
void pattern(int n)
{
    for(int i=0; i<n; i++)
    {
        int print = 1;
        for(int j=0; j<i+1; j++)
        {
            cout<<print<<" ";
            print++;
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    pattern(n);
    return 0;
}