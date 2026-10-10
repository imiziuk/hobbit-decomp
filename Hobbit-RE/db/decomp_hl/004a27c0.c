
void __fastcall FUN_004a27c0(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStack_48 [7];
  undefined4 uStack_2c;
  int **ppiStack_28;
  char *pcStack_24;
  undefined *puStack_20;
  int *piStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d3aa0;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  piStack_10 = param_1;
  if (param_1[0x94] == 0) {
    puStack_20 = (undefined *)0x4a27f3;
    ExceptionList = &pvStack_c;
    puStack_20 = (undefined *)(**(code **)(*param_1 + 0x4c))();
    ppiStack_28 = &piStack_10;
    pcStack_24 = s__s_Log_0072af78;
    uStack_2c = 0x4a2803;
    FUN_00649920();
    puStack_20 = &DAT_0072af74;
    pcStack_24 = (char *)0x0;
    local_4._0_1_ = 1;
    ppiStack_28 = (int **)0x4a2819;
    ppiStack_28 = (int **)FUN_00649940();
    uStack_2c = 0x4a2824;
    pcStack_24 = (char *)FUN_005496c0();
    ppiStack_28 = (int **)0x4a282a;
    iVar2 = FUN_006c0900();
    param_1[0x94] = iVar2;
    local_4 = (uint)local_4._1_3_ << 8;
    puStack_20 = (undefined *)0x4a2841;
    FUN_00649950();
  }
  fVar1 = (float)param_1[0xa3];
  iVar2 = param_1[0x94];
  puVar4 = (undefined4 *)&stack0x00000004;
  puVar5 = auStack_48;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_006c0893(iVar2,s__f___s_0072af68,(double)fVar1);
  local_4 = 0xffffffff;
  puStack_20 = (undefined *)0x4a2882;
  FUN_00649ba0();
  ExceptionList = pvStack_c;
  return;
}

