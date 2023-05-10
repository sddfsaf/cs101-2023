

#include <iostream>

using namespace std;

int stop =0;
void title(){
    cout<< "--Tic Tac Toe -- CSIE@CGU \nPlayer 1 (X) - Player 2 (O)\n";
}
void space(){
    cout <<"   |   |   \n";
}
void line(){
    cout <<"---+---+---\n";
}
void complemt( string b[], int c){
    if ( (b[0] == b[1] && b[1]== b[2] )|| (b[3] == b[4] && b[4]== b[5]) ||(b[6] == b[7] && b[7]== b[8]) ){
        if ( c%2 ==0){
            cout <<"Player1 is winner";
        } else cout <<"Player2 is winner";
        stop =1;
    }
    if ( (b[0] == b[3] && b[3]== b[6]) || (b[1] == b[4] && b[1]== b[7]) || (b[2] == b[5] && b[5]== b[8]) ){
        if ( c%2 ==0){
            cout <<"Player1 is winner";
        }else cout <<"Player2 is winner";
        stop =1;
    }
    if ( (b[6] == b[4] && b[4]== b[2]) || (b[0] == b[4] && b[4]== b[8]) ){
        if ( c%2 ==0){
            cout <<"Player1 is winner";
        }else cout <<"Player2 is winner";
        stop =1;
    }
    
}
class TicTacToe{
    public:
        void run(){
            string a[9];
            int k =0;
            title();
            for( int i =0;i <9; i++){
                a[i] = i+49;
            }
            for( int j =1; j<=11; j++){
                if ( j%2 ==1){
                    space();
                }
                if ( j%4 ==2){
                    cout <<" "<<a[k]<<" | "<<a[k+1]<<" | "<<a[k+2]<<" \n";
                    k+=3;
                }
                if( j%4 ==0) line();
            }
            k =0;
            for ( int l = 0; l<9; l++){
                int n =0;
                if (l%2 == 0){
                    cout<<"Player1,請輸入1-9的數字：";
                    cin >>n;
                    if ( a[n-1] == "X" || a[n-1] == "O"){
                        cout <<"請重新輸入下一步";
                        cin >>n;
                    }
                    a[n-1] ="X";
                    for( int j =1; j<=11; j++){
                if ( j%2 ==1){
                    space();
                }
                if ( j%4 ==2){
                    cout <<" "<<a[k]<<" | "<<a[k+1]<<" | "<<a[k+2]<<" \n";
                    k+=3;
                }
                if( j%4 ==0) line();
            }
            k =0;
            complemt( a, l);
            if ( stop !=0){
                break ;
            }
                }
                if (l%2 == 1){
                    cout<<"Player2,請輸入1-9的數字：";
                    cin >>n;
                    if ( a[n-1] == "X" || a[n-1] == "O"){
                        cout <<"請重新輸入下一步";
                        cin >>n;
                    }
                    a[n-1] ="O";
                    for( int j =1; j<=11; j++){
                if ( j%2 ==1){
                    space();
                }
                if ( j%4 ==2){
                    cout <<" "<<a[k]<<" | "<<a[k+1]<<" | "<<a[k+2]<<" \n";
                    k+=3;
                }
                if( j%4 ==0) line();
            }
            k =0;
            complemt( a, l);
            if ( stop !=0){
                break ;
            }
                }
            }
            if ( stop ==0){
                cout <<"Game draw";
            }
        }
};

int main()
{
    TicTacToe game;
    game.run();

    return 0;
}


