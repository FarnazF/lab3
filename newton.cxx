#include <iostream>
#include <complex>
using namespace std;

int main(){
  complex<double> z0;
  complex<double> z1;
  for(double re=-2; re<=2; re+=0.01){
    for(double im=-2; im<=2; im+=0.01){
       complex<double> z0= complex<double>(re,im);
   int i;
      for(i=0; i<=40; i++){
      z1=z0;
      z0=z0-((z0*z0*z0-1.0)/(3.0*z0*z0));
      if (abs(z1-z0)< 1e-8) break;
      
      }
   
   cout << re <<"\t"<< im<< "\t"<< i << endl;
      
    }
    
  }
   
      
  return 0;
}
