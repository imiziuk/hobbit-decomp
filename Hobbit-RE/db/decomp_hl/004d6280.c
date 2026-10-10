
void __thiscall FUN_004d6280(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d51f8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if ((DAT_0075dcd8 & 1) == 0) {
    DAT_0075dcd8 = DAT_0075dcd8 | 1;
    ExceptionList = &local_c;
    FUN_006499d0();
    FUN_006bfe55(&LAB_004d6430);
  }
  *(byte *)(param_1 + 0x7b) = *(byte *)(param_1 + 0x7b) & 0xf7;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  param_2 = param_2 * 0x78;
  FUN_0064a320(&stack0x00000008);
  uVar1 = FUN_00434eb0(*(int *)(param_1 + 0x234) + param_2 + 0x44);
  uVar1 = FUN_00433b30(uVar1);
  FUN_0064a2e0(uVar1);
  iVar2 = FUN_00434eb0(*(int *)(param_1 + 0x234) + 0x44 + param_2);
  if (iVar2 < 5) {
    pcVar3 = s_Props_00720224;
    uVar1 = FUN_00434eb0(*(int *)(param_1 + 0x234) + 0x44 + param_2);
    uVar1 = FUN_00433b30(uVar1);
    uVar1 = FUN_005496c0(uVar1,pcVar3);
    FUN_0064a2e0(uVar1);
    FUN_00647cf0(DAT_0075dcac);
    FUN_0064a320(&DAT_0075dcac);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x234) + 0x40 + param_2) = 0x3f800000;
  iVar2 = FUN_00434eb0(*(int *)(param_1 + 0x234) + 0x44 + param_2);
  if (iVar2 == 1) {
    *(undefined4 *)(*(int *)(param_1 + 0x234) + 0x70 + param_2) = 0x32;
  }
  else if (iVar2 == 2) {
    *(undefined4 *)(*(int *)(param_1 + 0x234) + 0x70 + param_2) = 5;
  }
  else if (iVar2 == 4) {
    *(undefined4 *)(*(int *)(param_1 + 0x234) + 0x70 + param_2) = 0xf;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x234) + 0x70 + param_2) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

