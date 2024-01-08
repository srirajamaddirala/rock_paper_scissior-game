# include <iostream>
# include <cstdlib>
# include <ctime>
# define rock 1
# define paper 2
# define scissor 3 
using namespace std ;
int main (){
    srand (time ( NULL ));
    int player_throw =0;
    int ai_throw =0 ;
    bool draw =false ;
    do {
        cout << "select your throw :" << endl ;
        cout << "1.rock" << endl ;
        cout << "2.paper" << endl ;
        cout << "3. scissors" << endl ;
        cout << "selection :" ;
        cin >> player_throw ;
        ai_throw = rand() % 3 +1 ;
        cout << endl ;
        if (ai_throw == rock ){
            cout << "ai throws rock " << endl ;
        } else if (ai_throw == paper ){
                cout << " ai throws paper" << endl ;
            } else if (ai_throw == scissor ){
                    cout << "ai throws scissor " << endl ;
                }
                draw = false ;
                if (player_throw == ai_throw){
                    draw = true ;
                    cout << "draw again"<< endl ;
                } else if (player_throw == rock && ai_throw == scissor ){
                    cout << "rock wins ..player won " << endl ;
                } else if (player_throw == rock && ai_throw == paper ) {
                        cout << "paper win ...ai won " << endl ;
                } else if (player_throw== paper && ai_throw ==rock) {
                        cout << "paper win ...player won " << endl ;
                 } else if (player_throw == paper && ai_throw == scissor){
                        cout <<"scissor win ...ai won .."<< endl ;
                } else if (player_throw == scissor && ai_throw == paper ) {
                        cout << " scissor win ...player win "<< endl ;
                } else if (player_throw == scissor && ai_throw == rock ){
                        cout << " rock win ...ai win "<< endl;
                } cout << endl ;
    } while (draw);
}
            
        
        

                    
                    
                
        

       
        
  


