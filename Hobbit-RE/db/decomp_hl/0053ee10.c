
void __thiscall FUN_0053ee10(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9272;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_anim_event__SetData_00737a5c);
  iVar4 = 0;
  local_4 = 0;
  uVar3 = 1;
  param_1[3] = 0;
  if (param_2 + 4 != 0) {
    uVar1 = FUN_0053f380(param_2 + 4);
    param_1[1] = uVar1;
  }
  if (param_2 + 0x25 != 0) {
    uVar1 = FUN_0053f380(param_2 + 0x25);
    param_1[2] = uVar1;
  }
  do {
    iVar2 = FUN_0053f1c0();
    if (iVar4 < iVar2) {
      param_1[3] = param_1[3] | uVar3;
    }
    uVar3 = uVar3 << 1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  iVar4 = 0;
  do {
    iVar2 = FUN_0053f1d0();
    if (iVar4 < iVar2) {
      param_1[3] = param_1[3] | uVar3;
    }
    uVar3 = uVar3 << 1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  iVar4 = 0;
  do {
    iVar2 = FUN_0053f1e0();
    if (iVar4 < iVar2) {
      param_1[3] = param_1[3] | uVar3;
    }
    uVar3 = uVar3 << 1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  iVar4 = 0;
  do {
    iVar2 = FUN_0053f1f0();
    if (iVar4 < iVar2) {
      param_1[3] = param_1[3] | uVar3;
    }
    uVar3 = uVar3 << 1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  iVar4 = 0;
  do {
    iVar2 = FUN_0053f200();
    if (iVar4 < iVar2) {
      param_1[3] = param_1[3] | uVar3;
    }
    uVar3 = uVar3 << 1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  uVar1 = FUN_00651f40();
  *param_1 = uVar1;
  iVar4 = FUN_0053f1c0();
  FUN_00652140(param_2 + 0x48,iVar4 << 2);
  iVar4 = FUN_0053f1d0();
  FUN_00652140(param_2 + 0x5c,iVar4 << 2);
  iVar4 = FUN_0053f1e0();
  FUN_00652140(param_2 + 0x7c,iVar4 * 0xc);
  iVar4 = FUN_0053f1f0();
  FUN_00652140(param_2 + 0x94,iVar4 << 2);
  iVar2 = 0;
  iVar4 = FUN_0053f200();
  if (0 < iVar4) {
    param_2 = param_2 + 0xb4;
    do {
      local_14[0] = FUN_0053f380(param_2);
      FUN_00652140(local_14,4);
      param_2 = param_2 + 0x21;
      iVar2 = iVar2 + 1;
      iVar4 = FUN_0053f200();
    } while (iVar2 < iVar4);
  }
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

