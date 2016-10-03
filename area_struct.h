/*************************************************************/
//
//
/***********************************************************/

struct inv{

public:
  char desc[200];
  int hidden;
  int locked;

};


struct area{

public:
  int item_id;
  
  int creature_id;

  int locx;
  int locy;
 
  inv north;
  inv south;
  inv east;
  inv west;
  
  int area_id;
  char area_desc[200];

};
