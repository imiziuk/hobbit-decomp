
void __thiscall FUN_00672310(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  *param_2 = *(undefined4 *)(param_1 + 0x1c);
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  return;
}

