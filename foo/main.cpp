#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++){
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cout<<"v["<<i<<"]=";
        cout<<v[i]<<" ";
    }

    return 0;


}
