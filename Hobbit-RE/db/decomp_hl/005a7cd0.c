
void FUN_005a7cd0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_61c;
  undefined4 local_618;
  undefined1 local_614 [4];
  undefined1 local_610 [4];
  undefined1 local_60c [1536];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dde2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005a7e00();
  iVar3 = 0;
  while( true ) {
    uVar1 = FUN_005486f0(iVar3);
    FUN_00649920(local_614,s__sOccluders_occdat_007447f8,uVar1);
    local_4 = 0;
    uVar1 = FUN_00649940(&DAT_00720db8);
    iVar2 = FUN_0064f210(uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 != 0) break;
    iVar3 = iVar3 + 1;
    if (3 < iVar3) goto LAB_005a7dd2;
  }
  FUN_0064f350(local_610,4,1,iVar2);
  FUN_0064f350(&local_61c,4,1,iVar2);
  iVar3 = 0;
  if (0 < local_61c) {
    do {
      FUN_0064f350(&local_618,4,1,iVar2);
      FUN_0064f350(local_60c,0xc,local_618,iVar2);
      FUN_005a7e50(local_60c,local_618,1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_61c);
  }
  FUN_0064f2b0(iVar2);
LAB_005a7dd2:
  FUN_005a7c00();
  ExceptionList = local_c;
  return;
}

