#include <iostream>
using namespace std;

int main() {
    int n=0,primo=0,secondo=1,risultato=1;
    cin >> n;
    if(n>=2){
        for(int i=1;i<=n;i++){
            cout << risultato << endl;
            risultato=primo+secondo;
            primo=secondo;
            secondo=risultato;
        }
    }else{
        cout << "errore" << endl;
    }
    return 0;
}
