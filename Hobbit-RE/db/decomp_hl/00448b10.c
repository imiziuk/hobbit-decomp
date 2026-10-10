
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00448b10(int param_1)

{
  int iVar1;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  if ((*(int *)(param_1 + 0x5918) != 0 || *(int *)(param_1 + 0x591c) != 0) &&
     (*(int *)(param_1 + 200) == 0 && *(int *)(param_1 + 0xcc) == 0)) {
    iVar1 = FUN_004021c0(*(int *)(param_1 + 0x5918),*(int *)(param_1 + 0x591c));
    if (((*(byte *)(iVar1 + 0x126) & 1) == 0) && ((*(byte *)(param_1 + 0x5930) & 2) != 0)) {
      local_8 = (float)(*(int *)(iVar1 + 0x268) + -1) * _DAT_006e9364;
      local_c = 0;
      local_4 = 0;
      FUN_0044ce60(param_1 + 0x5918,&local_c);
    }
  }
  return;
}

