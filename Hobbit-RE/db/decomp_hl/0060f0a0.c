
void __thiscall FUN_0060f0a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 6;
  if (*(short *)(param_1 + 0x42) != 0) {
    uVar2 = param_3;
  }
  if (*(short *)(param_1 + 0x42) == 6) {
    iVar1 = FUN_005af120();
    if ((*(uint *)(iVar1 + 0x268) & 0x1000000) == 0) goto LAB_0060f0d5;
  }
  uVar2 = 6;
LAB_0060f0d5:
  FUN_005be370(param_2,uVar2);
  return;
}

