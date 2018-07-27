#include <stdio.h>

int isprime(int nr){

  int k = 0;

  for(int i = 1; i <= nr; i++){

    if (nr % i == 0){
      k++;
    }
  }
    if (k == 2){
      return 1;
    }else{
      return 0;
    }
  return 0;
}

int nextprime(int nr){

  int x = nr, z = nr;

  while(1){
    if (isprime(nr)){
      printf("%d\n", nr);
      break;
    }else{
      x--;
      z++;
    }
    if (isprime(x) && isprime(z)){
      printf("%d %d\n", x, z);
      break;
    }

    if (isprime(x)){
      printf("%d\n", x);
      break;
    }

    if (isprime(z)){
      printf("%d\n", z);
      break;
    }
}

  return 0;
}


int citeste_nr(){

  int nr;

  while(1){

    scanf("%d", &nr);

    if (nr < 0) break;
    else nextprime(nr);
  }

  return 0;
}


int main(){

  citeste_nr();


  return 0;
}
