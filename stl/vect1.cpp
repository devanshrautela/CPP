#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v){
    cout<<"Your inputs are\n";
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" "; //will not print the last input element 
        cout<<v.at(i)<<" "; //will print element at index i
    }
}
int main()
{
    vector<int> vect; //Dynamically grow and can manage size automatically
    int elements, size;
    cout<<"Enter the total number of elements ";
    cin>>size;
    cout<<"Enter the elements\n";
    for(int i=0; i<size; i++)
    {
        cin>>elements;
        vect.push_back(elements); //Adds a new element at the end of the vector
    }
    vect.pop_back(); //Removes the last element in the vector
    display(vect);
    vector<int> :: iterator iter= vect.begin();
    vect.insert(iter,5,10);
    display(vect);
    return 0;
}