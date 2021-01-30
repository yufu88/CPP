#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

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
    
    string file_name;
    string data;
    
    //cout<<"Please enter file name: ";
    //cin>>file_name;
    file_name = "data1.txt";
    ifstream infile;
    infile.open(file_name, ios::out);
    cout << "From reading file:"<<endl;
    //PART 1
    //--File reading
    infile>>T;
    for(int i=0; i<10; i++){
        infile>>D[i];
    }
    infile>> H >> B >> A >> C >> V >> R >> I[0] >> L[0];
    
    infile.close();
    
    //--Data processing
    int D_sum = 0, D_sqr_sum = 0;
    float D_bar = 0, stdev = 0;
    for(int i=0; i<10; i++){
        D_sum += D[i];
    }
    D_bar = (D_sum/10.);
    for(int i=0; i<10; i++){
        stdev += (D[i]-D_bar)*(D[i]-D_bar);
    }
    stdev = pow(stdev/9. ,0.5);
    s = D_bar + stdev;
    Q = pow(2*A*D_sum/H, 0.5);
    R = 7;
    S = 7*D_bar;

    cout<<"T="<<T;
    cout<<", D=";
    for(int i=0; i<10; i++){
        cout<<" "<<D[i];
    }
    cout<<"\nH="<<H<<" ,B="<<B<<" ,A="<<A<<" ,C="<<C<<" ,V="<<V<<" ,R="<<R<<" ,I="<<I[0]<<" ,L="<<L[0]<<endl;
    cout<<"D="<<D_sum<<", D_bar="<<D_bar<<", stdev="<<stdev<<"; (s,Q)=("<<s<<","<<Q<<"); (R,S)=("<<R<<","<<S<<")"<<endl;

    

    return 0;
}