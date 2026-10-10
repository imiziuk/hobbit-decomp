
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_005bec70(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x3c) != 0) {
      return *(int *)(param_1 + 0x3c);
    }
  }
  else {
    if ((*(float *)(param_1 + 0xc) < _DAT_006f43e4 !=
         (NAN(*(float *)(param_1 + 0xc)) || NAN(_DAT_006f43e4))) ||
       (*(short *)(param_1 + 0x42) == 3)) {
      *(int *)(param_1 + 0x3c) = param_2;
      return 0;
    }
    if (*(short *)(param_1 + 0x42) == 1) {
      uVar1 = FUN_005becf0();
      iVar2 = FUN_005af160(uVar1);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x5c) & 4) != 0)) {
        *(int *)(param_1 + 0x3c) = param_2;
        return 0;
      }
    }
  }
  return param_2;
}

