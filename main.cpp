
/******************************************************************************/
//
//
//
/******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <test_class.h>



int main(int argc, char *argv[]){

  if(argc != 2){
    printf("Enter damage to deal\n");
    exit(1);
  }

  int maxHP = 11;
  int damage = atoi(argv[1]);
  int HPleft = 0;

//  printf("Hello meow\n");


  test_class T;

  T.foo();

  T.set_HP(maxHP); 



  HPleft = T.damage(damage);

  printf("Damage dealt: %d\nHP remaining: %d\n\n", damage, HPleft);

  return 0;

}
