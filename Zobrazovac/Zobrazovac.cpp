#include <iostream>;
#include <fstream>;
#include <string>;
using namespace std;

class Zobrazovac{
public: void vypisString(string cislo){
cout<< cislo<< endl;

ofstream zapisovac;
zapisovac.open("subor.txt");
zapisovac << cislo << endl;
zapisovac.close();
}};

int main(){
Zobrazovac moj;
moj.vypisString("123456");
return 0;
}