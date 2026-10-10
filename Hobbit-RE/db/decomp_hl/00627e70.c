
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00627e70(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  uStack_c = *(undefined4 *)(param_1 + 0x48);
  fStack_8 = *(float *)(param_1 + 0x4c) + _DAT_006e99c0;
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  uVar2 = 0;
  uStack_4 = uVar1;
  FUN_00406b70(0xffffffff);
  FUN_00669ca0(param_1 + 0x48,&uStack_c,uVar1,uVar2);
  return;
}

