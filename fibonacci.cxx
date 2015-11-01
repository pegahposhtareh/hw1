#include <iostream>
using namespace std;
int main(){
int f1=0;
int f2=1;
int f3;
int N;
cout << "please choose N" << endl;
cin >> N;
cout <<f1 <<"," <<f2 <<"," ;
for (int i=1;i<N;i++){
  f3=f1+f2;
  cout << f3 <<",";
  f1=f2;
  f2=f3;
}
cout << endl <<"N=" <<N <<"=>" <<"f(" <<N <<")=" <<f3 <<endl;
return 0;
}
