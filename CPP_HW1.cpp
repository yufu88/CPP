# include <iostream>
# include <iomanip>
# include <cmath>

using namespace std;

int main(){
    
    //PART 1
    int seat_num = 0;
    int S[20] = {0};            //array for seat number
    int I[20] = {0};            //array for seat position
    int P[20] = {0};            //array for seat preference
    int mid = (seat_num-1)/2;   //median of seats
    int seat = mid;             //variable for seat position
    int occupied = 0;           //input of occupied seat
    int adjacent = 0;           //input of adjacent seats
    int now_p = 0, now_c = 0;   //variables for current adjacent seats
    int best_p = 0, best_i = 0; //variables for best adjacent seats
    
    do{
        cout <<"Please enter the number of seats between 5 to 20: ";
        cin >> seat_num;
    }while( seat_num<5 || seat_num>20 );
    
    //PART 2
    //-seat number
    for( int i=0; i<seat_num; i++){
        seat += pow(-1, i+1)*i;
        S[seat] =  i+1;
        I[i] = seat;
        }
    
    //-preference
    for(int i=0; i<=mid; i++){
        P[i] = i+1;
        P[seat_num-i-1] = i+1;
    }
 
    //PART 3
    //-entering occupied seats
    do{
        cout <<"Please enter the occupied seats: ";
        cin >> occupied;
        if(occupied>=seat_num){
            cout<<"No such seat!"<<endl;
            continue;
        }
        if(occupied!=0){
            int index = I[occupied-1];
            S[index] = 0;
            P[index] = 0;
            }
    }while(occupied!=0);

    //-print information of seat & preference
    cout << "Seat number: ";
    for (int j=0; j<seat_num; j++){
        if(S[j]!=0){
            cout << S[j]<<" ";
        }else{
            cout << "X ";
        }
    }
    cout << "\n" << "Seat preference: ";
    for (int j=0; j<seat_num; j++){
        if(P[j]!=0){
            cout << P[j]<<" ";
        }else{
            cout << "X ";
        }
    }

    //PART 4
    //-search for adjacent seats
    cout << "\nHow many adjacent seats to seek? ";
    cin >> adjacent;
    for(int i=0; i<seat_num; i++){
        if(S[i]==0){
            now_p=0, now_c=0;
        }else{
            now_p+=P[i];
            now_c+=1;
                if(now_c==adjacent){
                    if(now_p>best_p){
                        best_p = now_p;
                        best_i = i;
                        now_p-=P[i-1], now_c-=1;
                    }else{
                        now_p=0, now_c=0;
                    }
                }
        }
    }

    //-print result of adjacent seat search
    if(best_p==0){
        cout << "Sorry! There's no "<<adjacent<<" adjacent seats.\n";
    }else
    {
        cout << "Best" << adjacent <<"adjacent seats: ";
        for(int k=best_i; k>(best_i-adjacent); k--){
            cout << S[k]<<", ";
        }
        cout << "with total preference "<< best_p;
    }
}