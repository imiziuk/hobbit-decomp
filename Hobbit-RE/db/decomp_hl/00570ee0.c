
void __fastcall FUN_00570ee0(int param_1)

{
  undefined8 uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_0041bcd0();
  if ((*(int *)(param_1 + 0x6a0) != 0 || *(int *)(param_1 + 0x6a4) != 0) &&
     ((iVar3 = FUN_004021c0(*(int *)(param_1 + 0x6a0),*(int *)(param_1 + 0x6a4)), iVar3 == 0 ||
      (iVar3 = FUN_0045d610(uVar6), iVar3 == 0)))) {
    *(undefined4 *)(param_1 + 0x6a0) = 0;
    *(undefined4 *)(param_1 + 0x6a4) = 0;
    if (*(int *)(param_1 + 0x480) == 4) {
      FUN_0056b6b0(0);
    }
  }
  uVar4 = FUN_0054c5c0(0x3c,s_C__projects_meridian_Support_Cam_0073fa04,0x91c);
  sVar2 = FUN_0054c7c0();
  while ((-1 < sVar2 && (*(int *)(param_1 + 0x6a0) == 0 && *(int *)(param_1 + 0x6a4) == 0))) {
    if ((sVar2 != -1) &&
       ((((iVar3 = *(int *)(DAT_0076f648 + sVar2 * 0x14), iVar3 != 0 &&
          ((*(byte *)(iVar3 + 0x7f) & 0x10) != 0)) && (iVar3 != 0)) &&
        (iVar5 = FUN_0045d610(uVar6), iVar5 != 0)))) {
      *(undefined4 *)(param_1 + 0x6a0) = *(undefined4 *)(iVar3 + 8);
      *(undefined4 *)(param_1 + 0x6a4) = *(undefined4 *)(iVar3 + 0xc);
    }
    sVar2 = FUN_0054c7c0();
  }
  FUN_0054c880(uVar4);
  if ((*(int *)(param_1 + 0x6a0) != 0 || *(int *)(param_1 + 0x6a4) != 0) &&
     (iVar3 = FUN_0056c2a0(4,0), iVar3 != 0)) {
    iVar3 = FUN_004021c0(*(undefined4 *)(param_1 + 0x6a0),*(undefined4 *)(param_1 + 0x6a4));
    uVar1 = *(undefined8 *)(iVar3 + 0xf0);
    if (*(int *)(iVar3 + 0xf0) == 0 && *(int *)(iVar3 + 0xf4) == 0) {
      uVar1 = uVar6;
    }
    *(undefined8 *)(param_1 + 0x688) = uVar1;
    if (((*(int *)(param_1 + 0x68c) != 0) || ((int)uVar1 != 0)) &&
       (iVar5 = FUN_004021c0((int)uVar1,*(int *)(param_1 + 0x68c)), iVar5 == 0)) {
      *(undefined4 *)(param_1 + 0x688) = 0;
      *(undefined4 *)(param_1 + 0x68c) = 0;
      FUN_0064e7d0(s_Camera_influencer_lookat_overrid_0073f9d0);
    }
    if (*(int *)(iVar3 + 0xa8) != 0) {
      *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) | 4;
    }
  }
  return;
}

