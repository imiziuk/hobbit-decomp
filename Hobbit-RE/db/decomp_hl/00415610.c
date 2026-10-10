
void __thiscall FUN_00415610(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined8 local_10;
  
  iVar1 = FUN_004021c0(*param_2,param_2[1]);
  if ((*param_2 == *(int *)(param_1 + 0x308)) && (param_2[1] == *(int *)(param_1 + 0x30c))) {
    if ((param_3 == 0) || (param_3 == 1)) {
LAB_0041568e:
      local_10 = FUN_00415590(param_2);
      uVar3 = 0;
    }
    else {
      local_10 = FUN_00415590(param_2);
      uVar3 = 1;
    }
  }
  else {
    if (param_3 == 0) goto LAB_0041568e;
    local_10 = FUN_00415590(param_2);
    uVar3 = 1;
  }
  FUN_00415550(&local_10,uVar3);
  uVar3 = FUN_004c6fa0();
  if (param_3 == 0) {
    iVar2 = FUN_00647e40(uVar3,s_closing_0071eedc);
    if (iVar2 == 0) goto LAB_0041576e;
    iVar2 = FUN_00647e40(uVar3,s_partly_opening_0071f9f0);
    if (iVar2 != 0) {
      iVar2 = FUN_00647e40(uVar3,s_opening_0071fa00);
      if (iVar2 != 0) goto LAB_0041576e;
      pcVar4 = s_closing_0071eedc;
      goto LAB_0041575d;
    }
    uVar3 = 0xbf800000;
  }
  else {
    if (param_3 == 1) {
      iVar2 = FUN_00647e40(uVar3,s_partly_opening_0071f9f0);
      if (iVar2 != 0) {
        iVar2 = FUN_00647e40(uVar3,s_opening_0071fa00);
        if (iVar2 == 0) {
          uVar3 = 0xbf800000;
          goto LAB_00415769;
        }
        pcVar4 = s_partly_opening_0071f9f0;
LAB_0041575d:
        FUN_004c6f40(pcVar4);
      }
    }
    else {
      if (param_3 != 2) goto LAB_0041576e;
      iVar2 = FUN_00647e40(uVar3,s_opening_0071fa00);
      if (iVar2 != 0) {
        pcVar4 = s_opening_0071fa00;
        goto LAB_0041575d;
      }
    }
    uVar3 = 0x3f800000;
  }
LAB_00415769:
  FUN_004c74d0(uVar3);
LAB_0041576e:
  *(ushort *)(iVar1 + 0x15a) = *(ushort *)(iVar1 + 0x15a) & 0xbfff ^ 0x4000;
  return;
}

