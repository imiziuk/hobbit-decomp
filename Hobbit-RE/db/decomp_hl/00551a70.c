
void __fastcall thunk_FUN_00551a80(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined1 auStack_48 [32];
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  float fStack_8;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x70));
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  iVar2 = *(int *)(param_1 + 0x74);
  if (iVar2 < 10) {
    iVar2 = 10;
  }
  FUN_00553060(iVar2);
  uVar3 = FUN_0054c5c0(0x2f,s_C__projects_meridian_Support_Wea_0073d310,0x34e);
  sVar1 = FUN_0054c7c0();
  while (-1 < sVar1) {
    if (sVar1 == -1) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = *(int **)(DAT_0076f648 + sVar1 * 0x14);
    }
    iVar2 = (**(code **)(*piVar6 + 0x4c))();
    iVar4 = FUN_00647e80(iVar2,s_Storm__0073d308,6);
    if (iVar4 == 0) {
      iStack_28 = piVar6[2];
      iStack_24 = piVar6[3];
      uStack_20 = 0x7f7fffff;
      uStack_1c = 0x7f7fffff;
      uStack_18 = 0x7f7fffff;
      uStack_14 = 0xff7fffff;
      uStack_10 = 0xff7fffff;
      uStack_c = 0xff7fffff;
      puVar5 = (undefined4 *)FUN_005c0150();
      uStack_20 = *puVar5;
      uStack_1c = puVar5[1];
      uStack_18 = puVar5[2];
      uStack_14 = puVar5[3];
      uStack_10 = puVar5[4];
      uStack_c = puVar5[5];
      FUN_00647d70(auStack_48,iVar2 + 6,0x1f);
      iVar2 = FUN_00648730(auStack_48);
      if ((float)iVar2 < DAT_006e92e4 == (NAN((float)iVar2) || NAN(DAT_006e92e4))) {
        iVar2 = FUN_00648730(auStack_48);
        fStack_8 = (float)iVar2;
      }
      else {
        fStack_8 = 0.0;
      }
      FUN_00552f00(&iStack_28);
    }
    sVar1 = FUN_0054c7c0();
  }
  FUN_0054c880(uVar3);
  return;
}

