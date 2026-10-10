
int __thiscall FUN_00541660(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_5c [8];
  undefined4 local_3c;
  undefined2 local_38;
  short local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined2 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9375;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00549470(param_1 + 0xd0);
  FUN_00549580(param_1 + 0xd0);
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0xd4) * 0x50 + *(int *)(iVar1 + 0x58));
  puVar5 = puVar2;
  puVar6 = local_5c;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_3c = puVar2[8];
  local_38 = *(undefined2 *)(puVar2 + 9);
  local_36 = *(short *)((int)puVar2 + 0x26);
  local_34 = *(undefined2 *)(puVar2 + 10);
  local_32 = *(undefined2 *)((int)puVar2 + 0x2a);
  local_30 = *(undefined2 *)(puVar2 + 0xb);
  local_2e = *(undefined1 *)((int)puVar2 + 0x2e);
  local_2d = *(undefined1 *)((int)puVar2 + 0x2f);
  local_2c = *(undefined2 *)(puVar2 + 0xc);
  local_2a = *(undefined2 *)((int)puVar2 + 0x32);
  local_28 = *(undefined2 *)(puVar2 + 0xd);
  local_24 = puVar2[0xe];
  local_20 = puVar2[0xf];
  local_1c = puVar2[0x10];
  local_18 = puVar2[0x11];
  local_14 = puVar2[0x12];
  local_10 = *(undefined2 *)(puVar2 + 0x13);
  iVar1 = 0;
  local_4 = 0;
  if (0 < local_36) {
    do {
      uVar3 = FUN_0053f1b0();
      iVar4 = FUN_00647e40(param_2,uVar3);
      if (iVar4 == 0) {
        local_4 = 0xffffffff;
        FUN_00544b20();
        ExceptionList = local_c;
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_36);
  }
  local_4 = 0xffffffff;
  FUN_00544b20();
  ExceptionList = local_c;
  return -1;
}

