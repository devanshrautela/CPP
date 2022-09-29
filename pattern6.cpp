#include<iostream>
using namespace std;
int main()
{
    int size=5;
    for(int i=0; i<5; i++)
    {
        int print = 1;
        for(int j=0; j<size; j++)
        {
            cout<<print<<" ";
            print++;
        }
        cout<<endl;
        size--;
    }
}
