
int FUN_0053f380(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9284;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_anim_event__SaveTypeNameString_00737a70);
  iVar4 = 0;
  local_4 = 0;
  if (param_1 == 0) {
    local_4 = 0xffffffff;
    FUN_006501e0();
    iVar4 = 0;
  }
  else {
    iVar1 = FUN_00651fc0();
    iVar2 = FUN_00651f40();
    if (0 < iVar2) {
      do {
        if (iVar1 == 0) {
          local_4 = 0xffffffff;
          FUN_006501e0();
          ExceptionList = local_c;
          return -1;
        }
        iVar2 = FUN_00647e40(iVar1,param_1);
        if (iVar2 == 0) {
          local_4 = 0xffffffff;
          FUN_006501e0();
          ExceptionList = local_c;
          return iVar4;
        }
        iVar2 = FUN_0053f4b0(iVar1);
        iVar4 = iVar4 + iVar2;
        iVar1 = iVar1 + iVar2;
        iVar2 = FUN_00651f40();
      } while (iVar4 < iVar2);
    }
    iVar4 = FUN_00651f40();
    uVar3 = FUN_00647cf0(param_1);
    FUN_00652140(param_1,uVar3);
    FUN_00652120(0);
    uVar3 = FUN_0053f4d0(param_1);
    FUN_00652140(&DAT_00737a90,uVar3);
    local_4 = 0xffffffff;
    FUN_006501e0();
  }
  ExceptionList = local_c;
  return iVar4;
}

