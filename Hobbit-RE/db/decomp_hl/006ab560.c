
void __thiscall FUN_006ab560(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (-1 < param_3) {
    *(int *)(param_1 + 0x18) = param_3;
    return;
  }
  uVar2 = 0;
  iVar1 = FUN_00647e40(param_2,&DAT_0071fe94);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  iVar1 = FUN_00647e40(param_2,&DAT_00735f78);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 1;
    return;
  }
  iVar1 = FUN_00647e40(param_2,&PTR_LAB_00524543_4_00735f74);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 2;
    return;
  }
  iVar1 = FUN_00647e40(param_2,&DAT_00735f70);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 4;
    return;
  }
  iVar1 = FUN_00647e40(param_2,&PTR_LAB_00735f6c);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 3;
    return;
  }
  iVar1 = FUN_00647e40(param_2,&DAT_00756164);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 5;
    return;
  }
  iVar1 = FUN_00647e40(param_2,&DAT_00756160);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 6;
    return;
  }
  iVar1 = FUN_00647e40(param_2,&DAT_0075615c);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 7;
    return;
  }
  iVar1 = FUN_00647e40(param_2,&DAT_00756158);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 8;
    return;
  }
  iVar1 = FUN_00647e40(param_2,&PTR_LAB_00756154);
  if (iVar1 == 0) {
    uVar2 = 9;
  }
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  return;
}

