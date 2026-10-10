
undefined4 FUN_0064e630(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  if (param_4 == 0) {
    DAT_007cd41c = 0;
    DAT_007cd420 = 0;
    DAT_007cd010 = 0;
  }
  else {
    DAT_007cd420 = DAT_007cd41c;
    iVar1 = FUN_00647cf0(PTR_s__________________________________0074cd44);
    if (DAT_007cd41c + 8 + iVar1 < 0x400) {
      FUN_00647d10(&DAT_007cd010 + DAT_007cd41c,PTR_s__________________________________0074cd44);
      DAT_007cd41c = DAT_007cd41c + iVar1;
    }
  }
  if ((param_1 != 0) && (iVar1 = FUN_00647cf0(param_1), DAT_007cd41c + 8 + iVar1 < 0x400)) {
    iVar1 = FUN_0064f190(&DAT_007cd010 + DAT_007cd41c,&DAT_0074cd48,param_1);
    DAT_007cd41c = DAT_007cd41c + iVar1;
  }
  if (DAT_007cd41c + 0x20 < 0x400) {
    iVar1 = FUN_0064f190(&DAT_007cd010 + DAT_007cd41c,&DAT_0074cd4c,param_2);
    DAT_007cd41c = DAT_007cd41c + iVar1;
  }
  if ((DAT_007cd41c + 0x20 < 0x400) && (param_5 != 0xbadbeeb)) {
    iVar1 = FUN_0064f190(&DAT_007cd010 + DAT_007cd41c,s___error_C_d__0074cd54,param_5);
  }
  else {
    iVar1 = FUN_0064f190(&DAT_007cd010 + DAT_007cd41c,&DAT_0074cd64);
  }
  DAT_007cd41c = DAT_007cd41c + iVar1;
  if ((param_3 != 0) && (iVar1 = FUN_00647cf0(param_3), DAT_007cd41c + 8 + iVar1 < 0x400)) {
    iVar1 = FUN_0064f190(&DAT_007cd010 + DAT_007cd41c,&DAT_0074cd68,param_3);
    DAT_007cd41c = DAT_007cd41c + iVar1;
  }
  FUN_0064e7d0(s_____EXCEPTION______s_0074cd6c,&DAT_007cd010 + DAT_007cd420);
  FUN_0064e610();
  return 1;
}

