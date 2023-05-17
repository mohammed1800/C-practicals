#include <iostream>
using namespace std;

int main()
{
    char arr1[100];
    cout<<"enter the string:"<<endl;
    cin>>arr1;
    cout<<"the address of each character"<<endl;
    for(int i=0;i<15;i++){
        cout<<(void*)(&arr1[i])<<endl;
        
    }
    char arr2[100];
    
    
    return 0;
}
