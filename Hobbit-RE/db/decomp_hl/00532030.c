
void __fastcall FUN_00532030(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_00531430();
  iVar2 = (int)((ulonglong)uVar3 >> 0x20);
  iVar1 = *(int *)((int)uVar3 * 0x30 + 0x14c + param_1);
  if ((iVar2 != 0) || (iVar1 != 0)) {
    FUN_00659c80(iVar2,0x3dcccccd);
    FUN_00659c80(iVar1,0x3dcccccd);
  }
  if (DAT_00736e78 == 0) {
    DAT_007644d4 = *(undefined4 *)(param_1 + 0x140);
    DAT_007644d8 = *(undefined4 *)(param_1 + 0x144);
  }
  DAT_00736e78 = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x14c + param_1) = 0;
  iVar1 = FUN_00531430();
  *(undefined4 *)(iVar1 * 0x30 + 0x14c + param_1) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  return;
}

