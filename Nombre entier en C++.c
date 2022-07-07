#include <iostream>
using namespace std;

int main(){

int i, N, S = 0;
cout<<"Donner un entier :";
cin>>N;

for(i=1; i<=N; i++){
  if(i%2 !=0)
    S = S + 1;
  }
cout<<"La somme est égal à "<<S;
return 0;
}
