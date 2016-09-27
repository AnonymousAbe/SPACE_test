#include <test_class.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int test_class::damage(int dmg){

  this->HP = this->HP - dmg;

  return this->HP;

}


void test_class::set_HP(int max){

  this->maxHP = max;

}


void test_class::foo(){

  printf("\n");

}

void test_class::move(int dir){

  if(dir == 0){this->ypos += 1;}
  else if(dir == 1){this->xpos += 1;}
  else if(dir == 2){this->ypos -= 1;}
  else if(dir == 3){this->xpos -= 1;}
  else{strcpy(this->message, "Invalid Move");}

}
