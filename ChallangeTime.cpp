#include <iostream>
using namespace std;

float phi = 3.14159;
int jarijari;

void input(){
    cout << "masukan jari-jari lingkaran : ";
    cin >> jarijari;
}

float luas_lingkaran(int c){
     return phi*c*c;
}

void output(){
      cout << " hasil luas lingkaran ; " << luas_lingkaran(jarijari) << endl; 
}

int main(){
    input();
}