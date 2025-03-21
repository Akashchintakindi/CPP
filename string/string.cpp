#include<iostream>
using namespace std;

int main(){

    char str[100];
    // int arr[] = {1,4,5,6};
    cout<<"Enter any character :";
    // cin.getline(str,100);
    // cout<<"Output : "<<str<<endl;

    cin.getline(str, 100, '$'); // Reads input into 'str' up to 100 characters or until '$' is encountered
    cout<<"Output :"<<str<<endl;
    

    // cout<<str<<endl; // it will club all the character array into one
    // cout<<arr<<endl;
    return 0;
}