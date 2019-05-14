#include <iostream>

using namespace std;

/*
int f(int n){
    if(n==1){
        return 0;
    }else if(n==2){
        return 3;
    }else{
        return 2*f(n-1)-f(n-2)+2;
    }
}
*/

int main()
{
    int v[100000];
    int x,y;
    int i=1;
    v[0]=0;
    v[1]=3;
    cin>>x>>y;
    while(v[i]<=y){
        i++;
        v[i]=2+2*v[i-1]-v[i-2];
    }
    for(int j=i-1;j>=0;j--){
        cout<<v[j]<<"  ";
    }
    return 0;
}
