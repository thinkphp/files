/*
Fisierul searchOneBin.in contine un sir format din maximum 1.000.000 de valori
de 0 si 1. Scrieti un program care afiseaza pe ecran pozitia de inceput,lungimea
celui mai lung subsir doar din 1 si subsequence propriu-zisa.

Input: 100111001
Output:
Start Pozition: 4
Length: 3
Subsequence: 111

*/
#include <iostream>
#include <string>
#include <cstring>
#define FIN "searchOneBin.in"
#define FOUT "searchOneBin.out"
#define MAXSIZE 1000001

using namespace std;

typedef char Binary[ MAXSIZE ];

int main(int argc, char const *argv[]) {

  Binary s;

  freopen(FIN, "r", stdin);

  freopen(FOUT, "w", stdout);

  cin>>s;

  int n = strlen(s);

  int i, iCurr, iMax, lMax;

  i = iCurr = iMax =  0;

  lMax = 1;

   while( i < n ) {

          if(i - iCurr > lMax) {

            lMax = i - iCurr;

            iMax = iCurr;

          }

          iCurr = i;

          while(s[i] == '1' && s[i+1] == '1' && i < n - 1) i++;

        i++;
   }

   cout<<"Start position: "<<iMax<<"\n";

   cout<<"Max Length: "<<lMax<<"\n";

   cout<<"Length: "<<lMax<<"\n";

   cout<<"Subsequence: "<<"";

   for(int i = iMax; i < iMax + lMax; ++i) {

     cout<<s[i]<<"";
   }

   cout<<"\n";

  return 0;
}
