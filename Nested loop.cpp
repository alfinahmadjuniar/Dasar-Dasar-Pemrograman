#include <iostream>
using namespace std;

int main() {
    int kolom,baris;

    cout<<"Masukkan jumlah kolom: ";
    cin>>kolom;
    cout<<"Masukkan jumlah baris: ";
    cin>>baris;

    for(int a = 1; a <= kolom; a++) {
        cout<<"___";
    }
    cout<<endl;


    for(int b = 1; b <= baris; b++) {
    	
        for(int a = 1; a <= kolom; a++) {
            cout<<"|_|";
        }
        cout<<endl;
    }

    return 0;
}

