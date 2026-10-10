
void FUN_004fce90(undefined4 param_1)

{
  undefined4 uVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  LPSTR local_2c4;
  undefined1 auStack_2c0 [4];
  undefined4 uStack_2bc;
  undefined4 auStack_290 [11];
  LPCSTR apCStack_264 [22];
  undefined1 local_20c;
  undefined4 local_20b;
  CHAR local_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d6592;
  pvStack_c = ExceptionList;
  local_20c = DAT_0075b6e0;
  puVar4 = &local_20b;
  for (iVar3 = 0x3f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  ExceptionList = &pvStack_c;
  if (DAT_00730864 != 0) {
    DAT_00730864 = 0;
    ExceptionList = &pvStack_c;
    GetFullPathNameA(&DAT_00729210,0x104,local_10c,&local_2c4);
    FUN_00649b20(local_10c);
    iStack_4 = 0;
    FUN_006499d0();
    iStack_4._0_1_ = 1;
    uVar1 = FUN_00649b20(s__common_007308ec);
    iStack_4._0_1_ = 2;
    FUN_0064a670(apCStack_264,auStack_290,uVar1);
    iStack_4 = CONCAT31(iStack_4._1_3_,4);
    FUN_00649ba0();
    DVar2 = GetFileAttributesA(apCStack_264[0]);
    if (DVar2 == 0xffffffff) {
      FUN_0064a2e0(s_C__GameData_Meridian_Resources_P_007308c8);
      puVar4 = &DAT_0075f938;
    }
    else {
      FUN_0064a2e0(&DAT_00729210);
      puVar4 = auStack_290;
    }
    FUN_0064a320(puVar4);
    if (DAT_00730868 != 0) {
      FUN_006c093f(uStack_2bc);
      DAT_00730868 = 0;
    }
    iStack_4._0_1_ = 1;
    FUN_00649ba0();
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    FUN_00649ba0();
    iStack_4 = 0xffffffff;
    FUN_00649ba0();
  }
  FUN_00647d10(&local_20c,DAT_0075f938);
  FUN_00649920(&local_2c4,s__s_Levels__s_007308b8,&local_20c,param_1);
  uVar5 = 0;
  iStack_4 = 5;
  uVar1 = FUN_00649940(0);
  FUN_00548710(uVar1,uVar5);
  iStack_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(auStack_2c0,s__s_Common_007308ac,&local_20c);
  uVar5 = 1;
  iStack_4 = 6;
  uVar1 = FUN_00649940(1);
  FUN_00548710(uVar1,uVar5);
  iStack_4 = 0xffffffff;
  FUN_00649950();
  FUN_00548710(&local_20c,2);
  FUN_00548710(&DAT_0075b6e0,3);
  ExceptionList = pvStack_c;
  return;
}

