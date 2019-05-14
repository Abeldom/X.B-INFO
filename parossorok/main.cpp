///   Egy sorozat esetében páros sor egy olyan egymás utáni helyértékű elemek sorozata, amelyek párosak.
///  Minden ilyen sornak van legalább két eleme és maximális a fent említett tulajdonságra (ha hozzáadunk még egy elemet, akkor elveszíti a megadott tulajdonságot). A sor hossza egyenlő az őt alkotó elemek számával.
///  A bac.txt állomány legtöbb 106 elemű természetes számsort tartalmaz a [0,109]intervallumból. A sorozatban a számok egy-egy szóközzel vannak elválasztva. A követelmény, írassa ki a képernyőre a maximális hosszúságú páros sorok számát. Tervezzen a felhasznált memória és a futási idő szempontjából egy hatékony algoritmust.
///  Például: ha a bac.txt állományban található értékek
///  1 2 3 4 6 10 2 8 5 7 9 4 6 10 121 20 4 11 10 2 5 2 6 8 10 16
///  akkor a képernyőn megjelenő érték a 2.
///  Forrás: 2017, érettségi, III/4

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ifstream in("bac.txt");
   int maxsor=0;
   int maxsormost=0;
   int maxsordb=0;
   int a;
   while(in>>a){

        if(a%2==0){
            maxsormost++;

            if(maxsor<maxsormost){
                maxsor=maxsormost;
                maxsordb=1;
            }else if(maxsor==maxsormost){
                maxsordb++;
            }
        }else {
            maxsormost=0;
        }

   }
   cout<<maxsordb;
    return 0;
}
