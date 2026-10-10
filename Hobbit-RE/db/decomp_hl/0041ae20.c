
void __fastcall FUN_0041ae20(int param_1)

{
  int *piVar1;
  int iVar2;
  int local_6c;
  int local_68;
  int local_64;
  undefined4 auStack_50 [16];
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cf148;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00404870();
  FUN_00404870();
  local_64 = 0;
  local_10 = 0;
  FUN_005822d0();
  local_4 = 0;
  FUN_0064cbe0();
  FUN_0064cc00();
  FUN_004aac10();
  FUN_00425250(param_1 + 0x82);
  FUN_00582ea0(param_1 + 0x44,&local_6c);
  FUN_0064cc50();
  FUN_005821f0();
  iVar2 = 0;
  if (0 < local_68 + local_6c) {
    do {
      piVar1 = (int *)auStack_50[iVar2];
      (**(code **)(*piVar1 + 0x60))();
      (**(code **)(*piVar1 + 0x28))();
      FUN_0066a800();
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_68 + local_6c);
  }
  FUN_00582290();
  FUN_0064cd30();
  FUN_0064f020();
  local_4 = 0xffffffff;
  while (0 < local_64) {
    FUN_00582290();
  }
  ExceptionList = pvStack_c;
  return;
}

