# include <iostream>
# include <iomanip>
# include <cmath>

using namespace std;

int main(){
    
    //PART 1
    int seat_num = 0;
    int S[20] = {0};
    int P[20] = {0};
    
    do{
        cout <<"Please enter the number of seats between 5 to 20: ";
        cin >> seat_num;
    }while( seat_num<5 || seat_num>20 );
    
    //PART 2
    int mid = (seat_num-1)/2;
    
    //-seat number
    int seat = mid;
    for( int i=0; i<seat_num; i++){
        seat += pow(-1, i+1)*i;
        S[seat] =  i+1;
        }
    
    //-preference
    P[mid] = mid+1;
    for(int i=0; i<mid; i++){
        P[i] = i+1;
        P[seat_num-i-1] = i+1;
    }
    //PART 3
    int occupied = 0;
    do{
        cout <<"Please enter the occupied seats: ";
        cin >> occupied;
    }while(occupied!=0);

    for (int j=0; j<seat_num; j++){
        cout<<S[j];
    }

}