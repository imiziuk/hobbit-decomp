
void FUN_00660270(void)

{
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0065f8a0(&local_20,&local_1c);
  FUN_006720e0(&local_2c,&local_24,&local_30,&local_28);
  local_18 = local_2c;
  local_14 = local_24;
  local_10 = local_30 - local_2c;
  if (local_20 <= (uint)(local_30 - local_2c)) {
    local_10 = local_20;
  }
  local_c = local_28 - local_24;
  if (local_1c <= (uint)(local_28 - local_24)) {
    local_c = local_1c;
  }
  local_8 = 0;
  local_4 = 0x3f800000;
  if ((local_10 != 0) && (local_c != 0)) {
    (**(code **)(*DAT_007f1000 + 0xa0))(DAT_007f1000,&local_18);
  }
  return;
}

