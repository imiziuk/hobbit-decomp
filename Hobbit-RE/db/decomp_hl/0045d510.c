
void __fastcall FUN_0045d510(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d06b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  local_4 = 0;
  FUN_00406b70(0xff0000ff);
  uVar1 = (**(code **)(*param_1 + 0x28))(0x41200000);
  FUN_0066a6e0(uVar1);
  piVar2 = (int *)FUN_0045da40();
  if (piVar2 != (int *)0x0) {
    FUN_00406b70(0xff0000ff);
    uVar1 = (**(code **)(*piVar2 + 0x28))();
    uVar1 = (**(code **)(*param_1 + 0x28))(uVar1);
    FUN_00669ca0(uVar1);
    FUN_00429100();
  }
  iVar3 = FUN_0045da60();
  if (iVar3 != 0) {
    FUN_00406b70(0xff0000ff);
    uVar1 = FUN_0045e280();
    uVar1 = (**(code **)(*param_1 + 0x28))(uVar1);
    FUN_00669ca0(uVar1);
    FUN_00429100();
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

