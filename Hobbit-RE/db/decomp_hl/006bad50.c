
void __thiscall FUN_006bad50(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  piVar1 = (int *)(param_2 + 0x10);
  iVar5 = (param_2 + 0x44) - (int)piVar1;
  iVar2 = (param_1 + 0xc) - (int)piVar1;
  iVar3 = 0xd;
  do {
    if (*piVar1 == -1) {
      uVar4 = *(undefined4 *)(iVar5 + (int)piVar1);
    }
    else {
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 8) + *piVar1 * 4);
    }
    *(undefined4 *)(iVar2 + (int)piVar1) = uVar4;
    piVar1 = piVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined1 *)(param_1 + 0x43) = 0xff;
  *(undefined1 *)(param_1 + 0x42) = 0xff;
  *(undefined1 *)(param_1 + 0x41) = 0xff;
  *(undefined1 *)(param_1 + 0x40) = 0xff;
  *(undefined4 *)(param_1 + 0x48) = 1;
  *(undefined4 *)(param_1 + 0x90) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x94) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x98) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x9c) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0xa0) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0xa4) = 0xff7fffff;
  return;
}

