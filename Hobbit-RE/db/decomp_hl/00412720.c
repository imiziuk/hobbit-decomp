
undefined8 __thiscall FUN_00412720(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_20;
  int local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar1 = FUN_004131c0(param_2);
  local_20 = *(int *)(iVar1 + 8);
  local_1c = *(int *)(iVar1 + 0xc);
  iVar1 = *(int *)(param_1 + 0x10) + param_2 * 0x28;
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 0x10)) {
    do {
      piVar2 = (int *)FUN_004021c0(*(undefined4 *)(*(int *)(iVar1 + 0x14) + iVar3 * 8),
                                   *(undefined4 *)(*(int *)(iVar1 + 0x14) + 4 + iVar3 * 8));
      if (piVar2 != (int *)0x0) {
        FUN_00401f00((float)piVar2[0x14] + (float)piVar2[0x11],
                     (float)piVar2[0x15] + (float)piVar2[0x12],
                     (float)piVar2[0x16] + (float)piVar2[0x13]);
        FUN_00402160(local_c,local_18,0x3f000000);
        iVar1 = FUN_004e2330(local_c);
        if ((((iVar1 != 0) &&
             (((char)piVar2[0x1f] != '\x05' || (iVar1 = FUN_004c7410(), iVar1 == 0)))) &&
            (((char)piVar2[0x1f] != '\x1c' ||
             (iVar1 = (**(code **)(*piVar2 + 0x108))(0), iVar1 != 0)))) &&
           (((char)piVar2[0x1f] != '\x12' || (iVar1 = (**(code **)(*piVar2 + 0x124))(), iVar1 == 0))
           )) {
          local_20 = piVar2[2];
          local_1c = piVar2[3];
          break;
        }
      }
      iVar1 = *(int *)(param_1 + 0x10) + param_2 * 0x28;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar1 + 0x10));
  }
  FUN_0059ed70(param_2);
  return CONCAT44(local_1c,local_20);
}

