//ödev için yazılmış bir kod
//kullanıcının belirlediği takımın aldığı sayıya göre tenis skorunu bastıran bir koddur

#include <stdio.h>

int main(){
    int p1Score = 0; // points that Player 1 scores
    int p2Score = 0; // points that Player 2 scores
    int point = 0; // who gets the point with every serve
    int game = 0; // gets out of the while loop when game ends

    printf("0-0\n"); 
    
    while(game != 1){
        printf("Point: ");
        scanf("%d",&point); //gets user input
        
        if(point == 1){  //if Player no:1 gets the point 
          
            if(p1Score <30){  
                p1Score = p1Score + 15;
            }

            else if(p1Score>=30){
                p1Score = p1Score + 10;
            }
        }

        else{  //if Player no:2 gets the point
          
            if(p2Score <30){
                p2Score = p2Score + 15;
            }

            else if(p2Score>=30){
                p2Score = p2Score + 10;
            }
        }
     
        if(((p1Score <= 40 ) && (p2Score < 40)) || ((p1Score < 40 ) && (p2Score <= 40)) ){ // scores for 0,15,30 and 40 until adv.
            printf("%d-%d\n",p1Score,p2Score);
        }
        else if((p1Score == p2Score) && ((p1Score +p2Score)>=80)){  // DEUCE scores 
            printf("DEUCE\n");                                      
            p1Score = 40;
            p2Score = 40;     //setting them to 40 for reseting 50-50,60-60,70-70 etc. Only for better understanding
        }
        else if((p1Score == 50) & (p2Score == 40)){  //50 is added for better understanding of points. 
            printf("ADVANTAGE: PLAYER 1\n"); 
        }
        else if((p2Score == 50) & (p1Score == 40)){
            printf("ADVANTAGE: PLAYER 2\n");
        }
        else if(p1Score >= p2Score + 20){ 
            printf("GAME: PLAYER 1\n");
            game = 1;  //endes while loop
        }
        else if(p2Score >= p1Score + 20) {
            printf("GAME: PLAYER 2\n");
            game = 1;  //endes while loop
        }
    }
    return 0;    
}
