 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 
 #define count_max 100
 #define door_number 5
 
 int main(void){
 
  int count;
  int atari;
  int answer;
  int nokori;
  int atari_count = 0;

  srand(time(NULL));
  for( count = 0 ; count < count_max ; count++ ){

  atari = rand() % door_number;

  answer = rand() % door_number;

  if( atari == answer ){
    nokori = rand() % ( door_number - 1);
    if( nokori >= atari )
      nokori++;
  }
  else{
    nokori = atari;
 }

  answer = nokori;

  if( answer == atari ) atari_count++;

  }
  
  printf("当たりは%d回です。\n",atari_count);

}
