/*#include<iostream>
using namespace std;
int main()
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
*/
#include <iostream>
using namespace std;
void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    pattern(n);
    return 0;
}
