
void __fastcall FUN_0049f6b0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  void *pvVar4;
  undefined1 auStack_50 [20];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d37bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1[0x6d] == 0x15) {
    ExceptionList = &pvStack_c;
    *(byte *)((int)param_1 + 0x7f) = *(byte *)((int)param_1 + 0x7f) | 8;
  }
  uStack_2c = 1;
  uStack_30 = 0x3f;
  puStack_34 = (undefined1 *)0x49f6ec;
  iVar1 = FUN_00593dd0();
  if (iVar1 != 0) {
    uVar2 = FUN_004aa000();
    local_10 = auStack_50;
    FUN_00649b20(uVar2);
    FUN_004678e0();
  }
  FUN_00592320();
  param_1[0x9a] = param_1[0x9a] & 0xfffffdffU | 0x100;
  if (param_1[0x6c] == 0x4e) {
    param_1[4] = param_1[4] & 0xfbffffff;
    if (param_1[0xa1] == 0) {
      uStack_2c = 0x49f75a;
      puVar3 = (undefined1 *)operator_new(0x694);
      local_4 = 0;
      local_10 = puVar3;
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        uStack_2c = 1;
        uStack_30 = 0x49f776;
        FUN_005a9c10();
      }
      local_4 = 0xffffffff;
      param_1[0xa1] = (int)puVar3;
    }
    *(byte *)(param_1 + 0xc6) = *(byte *)(param_1 + 0xc6) | 1;
    uStack_2c = 0;
    uStack_30 = 0x43480000;
    puStack_34 = &local_14;
    param_1[0x9a] = param_1[0x9a] & 0xfffffeffU | 0x200;
    local_11 = 0x8f;
    local_14 = 0x8f;
    local_12 = 0;
    local_13 = 0;
    uStack_38 = 0x49f7d9;
    uStack_38 = (**(code **)(*param_1 + 0x28))();
    uStack_3c = 0x49f7e1;
    FUN_005a9d70();
  }
  else if (param_1[0xa1] != 0) {
    FUN_005a9cc0();
    uStack_2c = 0x49f7fa;
    FUN_006bf840();
    param_1[0xa1] = 0;
  }
  if (param_1[0x6c] == 0x47) {
    param_1[0x9a] = param_1[0x9a] & 0xfffffeffU | 0x200;
    param_1[4] = param_1[4] & 0xfbffffff;
    *(byte *)(param_1 + 0xc6) = *(byte *)(param_1 + 0xc6) | 1;
    if (param_1[0xa2] == 0) {
      uStack_2c = 0x49f857;
      pvVar4 = operator_new(900);
      if (pvVar4 == (void *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        *(undefined4 *)((int)pvVar4 + 0x380) = 0x7fffffff;
      }
      param_1[0xa2] = (int)pvVar4;
    }
    (**(code **)(*param_1 + 0x28))();
    uStack_2c = 0x49f885;
    FUN_004a99c0();
    ExceptionList = pvStack_c;
    return;
  }
  iVar1 = param_1[0xa2];
  if (iVar1 != 0) {
    uStack_2c = 0x49f8b3;
    FUN_00549580();
    uStack_2c = 0x49f8be;
    FUN_00549350();
    *(undefined4 *)(iVar1 + 0x380) = 0x7fffffff;
    uStack_2c = 0x49f8cb;
    FUN_006bf840();
    param_1[0xa2] = 0;
  }
  ExceptionList = pvStack_c;
  return;
}

