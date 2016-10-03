
/******************************************************************************/
//
//
//
/******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <test_class.h>
#include <area_struct.h>
#include <item_struct.h>
#include <string.h>


void area_init(area *AREA){

  AREA->locx = 0;
  AREA->locy = 0;
  AREA->item_id = 0;
  AREA->area_id = 0;
  AREA->creature_id = 0;
  strcpy(AREA->area_desc, "Temp Description");

}


void item_init(item *ITEM){

  ITEM->item_id = 0;
  ITEM->slot = 0;
  ITEM->weight = 0;
  ITEM->damage_1 = 0;
  ITEM->damage_1_type = 0;
  ITEM->damage_2 = 0;
  ITEM->damage_2_type = 0;
  ITEM->range = 0;
  ITEM->stat_num = 0;
  ITEM->bonus = 0;
  strcpy(ITEM->desc, "Item Description");
  strcpy(ITEM->name, "Item Name");


}


int main(int argc, char *argv[]){

  
  /***************************************/
  //player example dealing damage and setting some initial stats
  /***************************************/

  /*

  if(argc != 2){
    printf("Enter damage to deal\n");
    exit(1);
  }

  int maxHP = 11;
  int damage = atoi(argv[1]);
  int HPleft = 0;
  int dir = 0;

//  printf("Hello meow\n");


  test_class T;

  T.foo();

  T.set_HP(maxHP); 



  HPleft = T.damage(damage);

  printf("Damage dealt: %d\nHP remaining: %d\n\n", damage, HPleft);

  */

  /*
 
  printf("Choose a direction: (0 - 3):    ");
  scanf("%d", &dir);
  T.move(dir);

  printf("You are now at x,y (%d,%d)\n\n", T.xpos, T.ypos);

  */


  /***************************************/
  /***************************************/



  
  /***************************************/
  // Area 0_0 is the area at the origin of the map
  // Create a pointer to send to initialize function for areas
  // Set pointer to area 0_0 (posx and posy)
  /***************************************/


  area a0_0, *current_area;

  current_area = &a0_0;

  /***************************************/
  // All items are stored in array
  // item_id corresponds to which items in the array are in players inventory
  /***************************************/
  
  item *item_ptr, item_list[8];	//So far there are 8 items

  //Initialize Items 0 and 2

  item_ptr = &item_list[0];
  item_init(item_ptr);
  
  item_ptr = &item_list[2];
  item_init(item_ptr);

  //Modify Item 2 to be a steel helm of bulls strength

  item_list[2].item_id = 2;
  item_list[2].slot = 0b1000000000; //head slot
  item_list[2].weight = 3;
  strcpy(item_list[2].desc, "This steel helm has two long horns protruding from the top, and makes you feel stronger");
  strcpy(item_list[2].name, "Steel helm of bulls strength");
  item_list[2].stat_num = 1;	//increases STRENGTH stat when equipped
  item_list[2].bonus = 2;	//increases STRENGTH by +2


  //initialize area information

  area_init(current_area);

  a0_0.item_id = 0b00000100;	//this area has Item 2
  strcpy(a0_0.area_desc, "You look around and see a barren wasteland"); //Area description, since this is the only area, it is a barren wasteland

  printf("items: %d\n", a0_0.item_id);	//Show items this area has



  /***************************************/
  //example for searching item id for a true case (area or player has that item), and using data from that item
  //searches area for any item, then prints off item name and description
  /***************************************/


  for(int i = 0; i < 8; i++){ //bit test for each item index
    if((a0_0.item_id & (0x1<<i)) != 0){
      printf("There is an item infront of you, a : %s\n", item_list[i].name);
      printf("%s\n", item_list[i].desc);
    }
  }


  //Show some area information

  printf("%s\n", item_list[a0_0.item_id].name);
  printf("location: %d, %d\n", a0_0.locx, a0_0.locy);
  printf("%s\n\n", a0_0.area_desc);
  return 0;

}
