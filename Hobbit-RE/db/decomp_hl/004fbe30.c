
undefined4 FUN_004fbe30(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d6410;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_LevelLoader_Open_00730788);
  local_4 = 0;
  FUN_00649600(s_LevelLoader_Open_00730788);
  uVar3 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar1 = FUN_005496c0(s_SelectionSets_hss_00730774,0);
  FUN_005c5380(uVar1);
  iVar2 = FUN_0055abc0();
  if (iVar2 != 0) {
    FUN_004fb7e0();
    iVar2 = 10;
    do {
      FUN_004fc830(&DAT_0075b6e0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    FUN_004fbdd0();
    FUN_0055ab50();
    uVar3 = 1;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00649720();
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return uVar3;
}

