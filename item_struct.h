/*******************************************************************/
//
//
/*******************************************************************/


struct item{

public:
  int item_id;
  char desc[200];
  char name[200];
  int slot; //{head, shoulders, chest, arms, left_hand, right_hand, ring1, ring2, legs, feet}
  
  float weight;
  
  int damage_1;
  int damage_1_type;
  int damage_2;
  int damage_2_type;
  int range;

  int stat_num;	//stat # item improves if any (block, attack, intelligence, etc)
  int bonus;	//stat bonus

};
