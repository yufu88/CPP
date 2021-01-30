#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    /* Variables */
    int T = 0, 
        H = 0, 
        B = 0, 
        A = 0, 
        C = 0, 
        s = 0, 
        Q = 0, 
        V = 0, 
        R = 0, 
        S = 0;
    int D[32]={0},
        I[32]={0},
        L[32]={0},
        Y[32]={0},
        O[32]={0};
    
    string data;
    ifstream infile;
    infile.open("data1.txt", ios::out);
    cout << "From reading file:"<<endl;
    
    infile>>T;
    for(int i=0; i<10; i++){
        infile>>D[i];
    }
    infile>> H >> B >> A >> C >> V >> R >> I[0] >> L[0];
    cout<<H<<B<<A<<C<<V<<R<<I[0]<<L[0];

    /*while(infile>>data){
        cout<<data;
    }*/
    infile.close();

    return 0;
}