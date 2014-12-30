#include<iostream> //in realtà uso il c tradizionale, ma in stdio.h non c'è la system(pause)


int main(){
    struct pezzo{
           char tipo; //P=pedone T=torre A=alfiere C=cavallo D=donna/regine R=re
           int colore;
           int posx,posy;
           };
           
    struct pezzo pedina[2][16];
    
    //mettere le pedine in posizione
    for(int a=0,b;a<=1;a++){
                                         b=0;
                                         pedina[a][b].colore=a;
                                         if(a==0){
                                                  for(int k=0;k<=1;k++){
                                                          for(int j=0;j<=7;j++,b++){
                                                                  pedina[a][b].posx=j;
                                                                  pedina[a][b].posy=k;
                                                                                    }
                                                                  }
                                                          }
                                         if(a==1){
                                                  for(int k=7;k>=6;k--){
                                                          for(int j=0;j<=7;j++,b++){
                                                                  pedina[a][b].posx=j;
                                                                  pedina[a][b].posy=k;
                                                                                    }
                                                                  }
                                                          }
                                         
                      }
    
    //dichiarare il tipo di pedine
    for(int a=0,b=0;b<=15;b++){
            switch(b){
                      case 0: pedina[a][b].tipo='T';break;
                      case 1: pedina[a][b].tipo='C';break;
                      case 2: pedina[a][b].tipo='A';break;
                      case 3: pedina[a][b].tipo='D';break;
                      case 4: pedina[a][b].tipo='R';break;
                      case 5: pedina[a][b].tipo='A';break;
                      case 6: pedina[a][b].tipo='C';break;
                      case 7: pedina[a][b].tipo='T';break;
                      case 8: pedina[a][b].tipo='P';break;
                      case 9: pedina[a][b].tipo='P';break;
                      case 10: pedina[a][b].tipo='P';break;
                      case 11: pedina[a][b].tipo='P';break;
                      case 12: pedina[a][b].tipo='P';break;
                      case 13: pedina[a][b].tipo='P';break;
                      case 14: pedina[a][b].tipo='P';break;
                      case 15: pedina[a][b].tipo='P';break;
                      }
            }
            
    for(int a=1,b=0;b<=15;b++){
            switch(b){
                      case 0: pedina[a][b].tipo='t';break;
                      case 1: pedina[a][b].tipo='c';break;
                      case 2: pedina[a][b].tipo='a';break;
                      case 3: pedina[a][b].tipo='d';break;
                      case 4: pedina[a][b].tipo='r';break;
                      case 5: pedina[a][b].tipo='a';break;
                      case 6: pedina[a][b].tipo='c';break;
                      case 7: pedina[a][b].tipo='t';break;
                      case 8: pedina[a][b].tipo='p';break;
                      case 9: pedina[a][b].tipo='p';break;
                      case 10: pedina[a][b].tipo='p';break;
                      case 11: pedina[a][b].tipo='p';break;
                      case 12: pedina[a][b].tipo='p';break;
                      case 13: pedina[a][b].tipo='p';break;
                      case 14: pedina[a][b].tipo='p';break;
                      case 15: pedina[a][b].tipo='p';break;
                      }
            }
                      
    //stampa a schermo
    char casella[8][8]={(char)32};//spazio vuoto
     for(int a=0;a<=1;a++){
             for(int b=0;b<=15;b++){
                     casella[pedina[a][b].posy][pedina[a][b].posx]= pedina[a][b].tipo;
                     }
             }
     for(int a=0;a<=7;a++){
           printf("\n+---+---+---+---+---+---+---+---+\n| %c | %c | %c | %c | %c | %c | %c | %c |",casella[a][0],casella[a][1],casella[a][2],casella[a][3],casella[a][4],casella[a][5],casella[a][6],casella[a][7]);
           }
    
     
     
     printf("\n+---+---+---+---+---+---+---+---+\n");
    
    system("PAUSE");                                 
    return 0;
    }
