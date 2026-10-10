
void __thiscall FUN_004b9680(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  *param_2 = *(undefined4 *)(param_1 + 0x30);
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  return;
}

