
int __thiscall FUN_00645d00(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(short *)(*(int *)(param_1 + 0x3c) + 0x14)) {
    iVar3 = 0;
    do {
      iVar1 = FUN_00647e40(param_3,(int)*(short *)(iVar3 + 8 + *(int *)(param_1 + 0x48)) +
                                   *(int *)(param_1 + 0x60));
      if (iVar1 == 0) {
        if (param_4 != 0) {
          iVar1 = FUN_00647e40(param_4,(int)*(short *)(iVar3 + 10 + *(int *)(param_1 + 0x48)) +
                                       *(int *)(param_1 + 0x60));
          if (iVar1 != 0) goto LAB_00645d72;
        }
        iVar1 = FUN_00647e40(param_2,(int)*(short *)(iVar3 + 6 + *(int *)(param_1 + 0x48)) +
                                     *(int *)(param_1 + 0x60));
        if (iVar1 == 0) {
          return iVar2 * 0x1c + *(int *)(param_1 + 0x48);
        }
      }
LAB_00645d72:
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar2 < *(short *)(*(int *)(param_1 + 0x3c) + 0x14));
  }
  iVar2 = FUN_00645ca0(param_2);
  if ((iVar2 != 0) && (*(short *)(iVar2 + 6) != -1)) {
    iVar2 = FUN_006452f0((int)*(short *)(*(int *)(param_1 + 0x44) + 4 + *(short *)(iVar2 + 6) * 8) +
                         *(int *)(param_1 + 0x60),param_3,param_4);
    return iVar2;
  }
  return 0;
}

