#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &v)
{
    cout<<"Element in vector are :\n";
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" "; //will not print the last input element 
    }
    cout<<endl;
}
//ways to create vectors
int main()
{
    char input;
    int size;
    vector<int> vect1; //zero length integer vector
    display(vect1);
    cout<<"Enter the total number of elements :";
    cin>>size;
    cout<<"Enter the elements :\n";
    vector<char> vect2(4, 1); //4-element character vector
    /* 
    vect2 will already have four elements stored and will further adds element is pushed
    here "4" represent number of elements and "1" represent the character of value 1 on a ascii chart
    so, it will print charater of value 1 in ascii chart four times
    */
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