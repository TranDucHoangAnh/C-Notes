#include <iostream>
using namespace std;
int main() {
    
    int n,x;
          cout << "Nhap x = "; cin >> x;
    float sum, sum1;
          sum = 0;
          sum1 =0;
    long luythua;
    long giaithua;
         giaithua =1;
         luythua =1;
    do { cout << "Moi ban nhap n = ";
         cin >>n;
         if (n<=0) cout << "Day so ban nhap khong thoa man "<<endl;
        }
    while (n<=0);    
           for (int i=1; i<= n; i++ ) {
              // sum1 = sum1 + i;                           1+2+3+...+n
              // sum = sum +(i*i);                          1^2+2^+3^2+...+n^2
              // sum = sum +(1.0)/i;                        1+1/2+1/3+...+1/n
              // sum = sum + (1.0)/(2.0)*i;                 1/2+1/4+...+1/2n
              // sum = sum + (1.0)/((2.0)*i)+1);            1+1/3+1/5+...+1/(2n+1)
              // if( i==n ) { sum = 1 - 1.0/(i + 1); }      1/2*3+1/3*4+...+1/n*(n+1)
              // sum = sum + (float(i) / float(i+1));       1/2+2/3/+3/4+...+n/(n+1)
              // sum = sum + (float(2*i+1)/float(2*i+2));   1/2+3/4+...+(2n+1)/(2n+2)
              // giaithua = giaithua*i;
              // luythua = luythua * x ; 
              // sum = sum + giaithua;                      1+1*2+1*2*3+...+1*2*..*n
              // sum =sum +luythua; 
              // sum = sum + 1.0/ sum1;                        
    }
              cout << "Tong cua day la : S(n) = "<< sum << endl;
            //cout << " n giai thua = "<< giaithua;
            cout << "Luy thua = "<< luythua;
            cout << "Dung ?????";
            
       
  return 0;     
}