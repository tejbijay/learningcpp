#include <iostream>

using namespace std;

int main(){

    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    int sum = 0;

    for(int counter = 1;counter<=n;counter++){
        sum = sum+counter;
    }

    cout<<"The addition from 1 to " <<n <<"\nis"<<sum<<endl;
    return 0;

}