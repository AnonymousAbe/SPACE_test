#include <test_class.h>
#include <stdio.h>
#include <stdlib.h>

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
