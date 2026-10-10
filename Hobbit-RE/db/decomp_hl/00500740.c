
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00500740(void)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00671650(0x41200000,0x47435000);
  FUN_00671930(0x42c80000,0);
  local_c = 0x44a98000;
  local_8 = 0xc4f04000;
  local_4 = 0xc38e8000;
  FUN_00671670(&local_c);
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  FUN_006723d0(&local_c,0);
  DAT_0076200c = 1;
  _DAT_00762010 = 0;
  do {
    FUN_005005d0();
    FUN_00500800();
  } while (DAT_0076200c != 0);
  return DAT_00762014 != 0;
}

