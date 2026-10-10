
void __fastcall FUN_00571090(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((*(int *)(param_1 + 0x6a8) != 0 || *(int *)(param_1 + 0x6ac) != 0) &&
     ((iVar2 = FUN_004021c0(*(int *)(param_1 + 0x6a8),*(int *)(param_1 + 0x6ac)), iVar2 == 0 ||
      (iVar2 = FUN_0045e970(), iVar2 == 0)))) {
    *(undefined4 *)(param_1 + 0x6a8) = 0;
    *(undefined4 *)(param_1 + 0x6ac) = 0;
    FUN_00571a20();
  }
  if (*(int *)(param_1 + 0x6a8) == 0 && *(int *)(param_1 + 0x6ac) == 0) {
    uVar3 = FUN_0054c5c0(0x3d,s_C__projects_meridian_Support_Cam_0073fa04,0x95c);
    sVar1 = FUN_0054c7c0();
    while ((-1 < sVar1 && (*(int *)(param_1 + 0x6a8) == 0 && *(int *)(param_1 + 0x6ac) == 0))) {
      if (((sVar1 != -1) &&
          (((iVar2 = *(int *)(DAT_0076f648 + sVar1 * 0x14), iVar2 != 0 &&
            ((*(byte *)(iVar2 + 0x7f) & 0x10) != 0)) && (iVar2 != 0)))) &&
         (iVar4 = FUN_0045e970(), iVar4 != 0)) {
        *(undefined4 *)(param_1 + 0x6a8) = *(undefined4 *)(iVar2 + 8);
        *(undefined4 *)(param_1 + 0x6ac) = *(undefined4 *)(iVar2 + 0xc);
        uVar5 = FUN_0045e990();
        FUN_00571a10(uVar5);
      }
      sVar1 = FUN_0054c7c0();
    }
    FUN_0054c880(uVar3);
  }
  return;
}

