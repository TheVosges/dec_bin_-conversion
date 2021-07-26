#include <cstdlib>
#include <iostream>
#include <ctype.h>
#include <cstring>
#include <cmath>

using namespace std;



int z10nadow(int liczba, int system){

if (liczba==0){
    return liczba;}

int wynik=liczba%system;
liczba/=system;
z10nadow(liczba,system);

if (wynik<10){
    cout << wynik;}

else{
char y=wynik+55;
cout<<y;
}
}








void zdowna10(){
char liczba[100];
int p=1;
int wynik=0;
int system;
int x;
cout << "Wybierz system w ktorym jest twoja liczba: ";
cin >> system;
cout << "Podaj liczbe: ";
cin >> liczba;

   for (int i=strlen(liczba)-1;i>= 0;i--){
      if (liczba[i]>='0' && liczba[i]<='9'){
    x=liczba[i]-'0';}
      else{
    x=liczba[i] - 55;}
    wynik+=x*p;
    p*=system;}

cout << "Twoja liczba to " << wynik << endl;
}




void zdownadow()
{
char liczba[100];
int p=1;
int literki=0;
int system;
int system2;
int x;
cout << "Podaj system w jakim zapisana jest liczba: ";
cin >> system;
cout << "Podaj liczbe: ";
cin >> liczba;

for (int i=strlen(liczba)-1; i>=0;i--){
    if (liczba[i]>='0' && liczba[i]<='9'){
        x=liczba[i]-'0';}
    else{
        x=liczba[i] - 55;}
    literki+=x*p;
    p*=system;}

cout << "Wybierz na jaki system chcesz zamienic: ";
cin >> system2;
cout << "Twoj wynik to: ";
z10nadow(literki, system2);
}




int main()
{
int a;
int b;
int p;
int x;
cout << "[0] Wyjdz z programu" << endl << "[1] Decymalny na dowolny" << endl << "[2] Dowolny na decymalny" << endl << "[3] Dowolny na dowolny";
p:
cout << endl <<"Funkcja: ";
cin >> x;
if (x==1){
        cout << "Podaj liczbe: ";
        cin >> a;
        cout << "Wybierz system: ";
        cin >> b;
        cout << "Twoja liczba to: ";
          z10nadow(a,b);
        }
    if (x==2){
        zdowna10();
        }
    if (x==3){
        zdownadow();
        }
    if (x==0)
        return 0;
    if (x!=3 && x!=2 && x!=1) {
        cout << "BLAD" << endl;}
    goto p;
}
