
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0047f490(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_4;
  
  local_4 = 0.0;
  iVar1 = FUN_00549470(param_1 + 0x54);
  if (iVar1 != 0) {
    iVar2 = FUN_0053cc70(*param_2);
    local_4 = (float)(*(short *)(iVar2 * 0x50 + 0x24 + *(int *)(iVar1 + 0x58)) + -1) * _DAT_006ed17c
    ;
  }
  FUN_00549580(param_1 + 0x54);
  return (float10)local_4;
}

