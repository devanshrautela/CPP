/*#include<iostream>
using namespace std;
int main()
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<6; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
*/
/*#include<iostream>
using namespace std;
void pattern(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<"* ";
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
}*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; 
    int arr[n];
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int j=0; j<n; j++)
    {
        cout << arr[n-j-1]<<" ";
    }
    return 0;
}

