
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0061c0c0(int param_1,undefined4 *param_2)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_005af120();
  fVar2 = (float10)FUN_004a4130();
  FUN_005af120();
  fVar3 = (float10)FUN_004a4140();
  if ((float10)(float)fVar2 <= fVar3 * (float10)_DAT_006f5c7c) {
    *(undefined4 *)(param_1 + 0x98) = 1;
  }
  FUN_005af120();
  fVar2 = (float10)FUN_004a4130();
  FUN_005af120();
  fVar3 = (float10)FUN_004a4140();
  if ((float10)(float)fVar2 <= fVar3 * (float10)_DAT_006e9338) {
    *(undefined4 *)(param_1 + 0x98) = 2;
  }
  if (*(int *)(param_1 + 0xc4) < 1) {
    *param_2 = 10;
    return 1;
  }
  iVar1 = FUN_00647b10(1,(*(int *)(param_1 + 0x98) + 2) * 0x32);
  if (iVar1 < 0x33) {
    *param_2 = 9;
    return 1;
  }
  if (iVar1 < 0x65) {
    *param_2 = 0xe;
    return 1;
  }
  if (iVar1 < 0x97) {
    *param_2 = 0xb;
    return 1;
  }
  if (iVar1 < 0xc9) {
    *param_2 = 0xc;
  }
  return 1;
}

