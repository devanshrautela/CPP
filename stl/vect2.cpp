#include<iostream>
#include<vector>
using namespace std;
int display(vector<int> &v)
{
    cout<<"Element in vector are :\n";
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" "; //will not print the last input element 
    }
}
//ways to create vectors
int main()
{
    int input, size;
    vector<int> vect1; //zero length integer vector
    display(vect1);
    cout<<"Enter the total number of elements ";
    cin>>size;
    cout<<"Enter the elements\n";
    vector<char> vect2(4); //4-element character vector
    for(int i=0; i<size; i++)
    {
        cin>>input;
        vect2.push_back(input);
    }
    display(vect2);
    vector<char> vect3(vect2); //same size as vect2
    display(vect3);
    vector<int> v(6,3); //6-element vector of 3s
    display(v);
}