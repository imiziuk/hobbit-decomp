
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0064ccc0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (param_1[4] != 0) {
    uVar3 = FUN_0064cb70();
    uVar2 = (uint)uVar3 - *param_1;
    uVar1 = param_1[2];
    param_1[2] = uVar1 + uVar2;
    param_1[3] = param_1[3] +
                 (((int)((ulonglong)uVar3 >> 0x20) - param_1[1]) - (uint)((uint)uVar3 < *param_1)) +
                 (uint)CARRY4(uVar1,uVar2);
    param_1[4] = 0;
  }
  return (float10)*(longlong *)(param_1 + 2) * (float10)_DAT_006f6cc8;
}

