#include <iostream>
#include <fstream>
#include <algorithm>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
const int N = 100;
using namespace std;
bool chkSqrRt(int number){
	int sqr = 0;
	 for (int i=0; i<number/2 && number >=sqr; i++){
	 	sqr = i*i*i;
	 	if(number == sqr){
	 		return true;
		 }
	 }
	 return false;
}
int main(int argc, char** argv) {
	ifstream in("ciagi.txt");
    
    bool sqr;
    bool sqr2;
    int ciag[1000];
    int sqrCiag[100];
    int ilearytm = 0;
    int maxroznica = 0;
    for(int q = 0; q < N; q++)
    {
        int dlugosc;
        in >> dlugosc;
        for(int i = 0; i < dlugosc; i++){
			sqr = false;
            in >> ciag[i];
        	sqr = chkSqrRt(ciag[i]);
        	if(sqr==true){
        		sqrCiag[q]=ciag[i];
        		sqr2=true;
			}
        }
        if(sqr2 == false){
        	sqrCiag[q] = 0;
		}
        sqr2=false;
    }
    for(int i=0;i<N;i++){
    	cout<< sqrCiag[i]<<endl ;
    	
	}
	
    
	return 0;
}
