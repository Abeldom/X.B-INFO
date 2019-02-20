#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream in("input");

    string szoveg;
    in>>szoveg;
    bool helyzet=true;
    char matrix[szoveg.size()][szoveg.size()];
    int k=0;
    int lepesek[szoveg.size()];
    lepesek[0]=0;
    if(szoveg[0]=='-'|| szoveg[0]=='-'){
        matrix[0][0]=szoveg[0];
        lepesek[0]=1;
    }


    for(unsigned int i=1;i<szoveg.size();i++){
        if(szoveg[i]=='='){
            helyzet=false;
        }else if(szoveg[i]=='+' || szoveg[i]=='-'){
            k++;
            lepesek[k]=0;
            if(helyzet){
                 matrix[k][0]=szoveg[i];
            }else{
                if(szoveg[i]=='-'){
                    matrix[k][0]='+';
                }else{
                    matrix[k][0]='-';
                }
            }
        }else if(szoveg[i]>=48 && szoveg[i]<=57){
            matrix[k][0]=szoveg[i];
            lepesek[k]++;
        }
    }

    int xtag;
    int szabadtag=0;
    for(int j=0;j<=k;j++){
            bool van=false;
        int elojel=1;
        int szam=0;
        if(matrix[k][0]=='x'){
            xtag=1;
            van=true;
        }else{
            int n=0;
            if(matrix[k][0]=='-' ){
                elojel=-1;
            }
            if(matrix[k][0]<47){
                n=1;
            }

            for(int m=n;m<lepesek[k];m++){
                if(matrix[k][m]>=57){
                    szam=szam*10+szam;
                }else{
                    van=true;
                }
            }


            if(van){
                xtag+=szam;
                if(elojel==-1){
                    xtag+=-szam;
                }
            }else{
                szabadtag+=szam;
            }
        }
        k++;


    }

    if(xtag==0 && szabadtag==0){
        cout<<"vegtelen megoldas";
    }else if(xtag==0 && szabadtag!=0){
        cout<<"nincs megoldas";
    }else{
        cout<<"megoldas"<<szabadtag/xtag;
    }


    return 0;
}
