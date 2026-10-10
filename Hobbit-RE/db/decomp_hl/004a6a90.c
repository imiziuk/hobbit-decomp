
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004a6a90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  iVar1 = FUN_00587ce0();
  if (iVar1 == 0xb) {
    FUN_00579460(param_2,param_3,param_4,param_5,
                 *(float *)(*(int *)(*(int *)(param_1 + 0x304) + 0x34) + 4) * _DAT_006e936c,1);
    return;
  }
  FUN_00468350(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

