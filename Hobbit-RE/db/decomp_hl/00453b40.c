
undefined4 FUN_00453b40(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float unaff_EBP;
  
  uVar1 = *param_1;
  iVar2 = FUN_00659e10(uVar1);
  iVar3 = FUN_00659e70(uVar1);
  iVar4 = FUN_00659ed0(uVar1);
  if (((iVar4 == 0) && (iVar3 == 0)) && (iVar2 == 0)) {
    return 1;
  }
  if (((float)param_1[6] < DAT_006e92e4 != ((float)param_1[6] == DAT_006e92e4)) &&
     ((param_1[8] == 1 || (param_1[8] == 0)))) {
    FUN_00659c80(uVar1,0x3a83126f);
  }
  if (unaff_EBP < DAT_006e92e4 != (unaff_EBP == DAT_006e92e4)) {
    FUN_00659c80(uVar1,0x3a83126f);
  }
  return 0;
}

