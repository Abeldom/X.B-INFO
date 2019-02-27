#include <iostream>

using namespace std;

int main()
{   /// 1. FELADAT
    /// Írjunk egy programot, amely beolvas a billentyűzetről egy n számot, s kiírja az n. Fibonacci számot (tömb nélkül)!

    long long f1=1,f2=1,fib;
    int n;
    cin>>n;
    if(n==0){
        fib=0;
    }else if(n==1||n==2){
        fib=1;
    }
    for(int i=3;i<=n;i++){
        fib=f1+f2;
        f1=f2;
        f2=fib;
    }
    cout<<fib;

    ///2.  FELADAT
    ///    Írjunk egy programot, amely beolvas a billentyűzetről egy n számot, s kiírja az n. Fibonacci számot ha az prím,
    ///  különben a következő Fibonacci számot, amely prím (tömbbel oldjuk)!
/*

        int n;
    cin>>n;
    int tomb[n];
    tomb[0]=0;
    tomb[1]=1;
    tomb[2]=1;
    int i;
    for(i=3;i<=n;i++){
        tomb[i]=tomb[i-1]+tomb[i-2];
    ///    cout<<tomb[i]<<endl;
        bool prim=false;
        if(tomb[i]%2==0){
            prim=true;
        }else{
            for(int j=3;j<tomb[i]/2 && prim==false;j=j+2){
                if(tomb[i]%i==0){
                    prim=true;
                }
            }
        }
        if(prim){
            break;
        }else{
            n++;
        }
    }
    cout<<i-1<<endl;
    cout<<tomb[i-1];

*/









    return 0;
}
