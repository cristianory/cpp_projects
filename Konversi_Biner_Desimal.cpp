#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cmath>
#include <windows.h>
using namespace std;

int main(){
	int desimal = 0, rb_counter = 0, reverse_biner[4], int_biner[4];
	char biner[4];
	
	cout<<"*****************************************"<<endl;
	cout<<"  PROGRAM KONVERSI BINER KE DESIMAL C++  "<<endl;
	cout<<"*****************************************"<<endl;
	
	cout<<endl;
	cout<<"Tekan ENTER untuk memulai program"<<endl;cin.get();
	
	cout<<"Input nilai bilangan Biner :"<<endl;
	Sleep(250);
	for(int i=0; i<4; i++) {
		cout<<"Bilangan Biner ke-"<<i+1<<" : ";scanf("%s", &biner[i]);
	}
	
	cout<<endl; cout<<"Bilangan Biner   : ";
	for(int k=0; k<1; k++){
		for(int m=0; m<4; m++){
			cout<<biner[m];
		}
	}
	
	for(int y=3; y>=0; y--){
		int_biner[y] = biner[y] - '0';
		reverse_biner[rb_counter++] = int_biner[y];
	}
	
	
	for(int j=3; j>=0; j--) {
		desimal = desimal + (pow(2, j)*reverse_biner[j]);
	}  

	
	cout<<endl;
	cout<<"Bilangan Desimal : "<<desimal; 
	
	return 0;
}
