
# include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Moi ban nhap n = ";
    cin >> n;
    for(int i=-n; i<=n ;i++ ){
        if(n % i == 0) cout << " "<< i << " " << -i ;
    }
    
    char sum = 'chuc mung nam moi';
    cout << sum;


}

