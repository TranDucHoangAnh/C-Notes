#include <iostream>
using namespace std;
int main() {
    cout << " Tinh diem trung binh ki 20211"<< endl;
    cout << " Cac mon hoc trong ky la : Giai tich 1, Dai so, Nhap mon CNTT, Tu tuong HCM "<<endl;
    
    float gtqt, gtck, dsqt, dsck, cnttqt, cnttck, hcmqt, hcmck,
          gttb, dstb, cntttb, hcmtb,
          cpa;


    cout << " Nhap diem qua trinh Giai tich "; cin >> gtqt;
    cout << " Nhap diem cuoi ki Giai tich "; cin >> gtck;
    gttb = gtqt*0.3 + gtck*0.7;
    cout << "Diem trung binh Giai tich cua ban la : " << gttb << endl;

    cout << " Nhap diem qua trinh Dai so  "; cin >> dsqt;
    cout << " Nhap diem cuoi ki Dai so "; cin >> dsck;
    dstb = dsqt*0.3 + dsck*0.7;
    cout << "Diem trung binh Dai so cua ban la : " << dstb << endl;

    cout << " Nhap diem qua trinh Nhap mon CNTT "; cin >> cnttqt;
    cout << " Nhap diem cuoi ki Nhap mon CNTT "; cin >> cnttck;
    cntttb = cnttqt*0.5 + cnttck*0.5;
    cout << "Diem trung binh Nhap mon CNTT cua ban la : " << cntttb << endl ;

    cout << " Nhap diem qua trinh Tu tuong HCM "; cin >> hcmqt;
    cout << " Nhap diem cuoi ki Tu tuong HCM "; cin >> hcmck;
    hcmtb = hcmqt*0.3 + hcmck*0.7;
    cout << "Diem trung binh Tu tuong HCM cua ban la : " << hcmtb << endl;

    cpa = (gttb * 0.25 + dstb * 0.25 + cntttb * 0.25 + hcmtb * 0.25) *0.4;
    cout << "Diem CPA cua ban la : " << cpa << endl;
    
    if( cpa < 1.00) {
        cout << "Hoc luc kem";
    }
    else if (1.00 <= cpa <= 1.49) {
        cout << "Hoc luc yeu";

        
        else {
            if(1.50 <= cpa <=1.99){
                cout << "Hoc luc trung binh yeu";
            }
            else {
                if(2.00 <= cpa <= 2.49) {
                    cout << "Hoc luc trung binh ";
                }
                else {
                    if( 2.50 <= cpa <=3.19) {
                        cout << "Hoc luc kha";
                    }
                    else{
                        if( 3.20 <= cpa <= 3.59) {
                            cout << "Hoc luc gioi";

                        }
                        else {
                            cout << "Hoc luc xuat sac";
                        }
                    }
                }
            }
            
        }
    }
    




    
}