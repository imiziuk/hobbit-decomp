
undefined4 __thiscall
FUN_0069fe40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  
  pcVar4 = (code *)0x0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    iVar5 = 0;
    do {
      iVar1 = FUN_0064a7e0(*(int *)(param_1 + 0x30) + iVar5,param_3);
      if (iVar1 != 0) {
        pcVar4 = *(code **)(*(int *)(param_1 + 0x30) + 0x2c + iVar5);
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x30;
    } while (iVar3 < *(int *)(param_1 + 0x2c));
    if (pcVar4 != (code *)0x0) {
      uVar2 = (*pcVar4)(param_2,param_1,param_4,param_5,param_6);
      return uVar2;
    }
  }
  return 0;
}

