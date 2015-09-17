#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
  int a, b, s=0;
  cout<<"De el rango"<<endl;
  cout<<"Primer numero:"<<endl;
  cin>>a;
  cout<<"Segundo numero"<<endl;
  cin>>b;
  while (a<=b){
    s=s+a;
  a++;}
  cout<<"La suma es:"<<s<<endl;
}
