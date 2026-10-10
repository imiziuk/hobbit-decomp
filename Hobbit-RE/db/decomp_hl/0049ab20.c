
void __thiscall FUN_0049ab20(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 *local_1c;
  int local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_3;
  local_14 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d350b;
  local_c = ExceptionList;
  iVar5 = *(int *)(param_3 + 8);
  iVar3 = iVar5 + *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) < iVar3) {
    ExceptionList = &local_c;
    local_1c = (undefined1 *)operator_new(iVar3 * 0x108);
    local_4 = 0;
    if (local_1c == (undefined1 *)0x0) {
      local_1c = (undefined1 *)0x0;
    }
    else {
      local_18 = iVar3;
      if (-1 < iVar3 + -1) {
        do {
          FUN_00406a80();
          FUN_00406a80();
          FUN_0041def0();
          FUN_0041def0();
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
    }
    local_4 = 0xffffffff;
    if (0 < param_2) {
      local_18 = 0;
      local_10 = param_2;
      puVar4 = local_1c;
      do {
        iVar5 = *(int *)(param_1 + 0xc) + local_18;
        iVar6 = 0x80;
        puVar2 = puVar4;
        do {
          *puVar2 = puVar2[iVar5 - (int)puVar4];
          puVar2 = puVar2 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        *(undefined4 *)(puVar4 + 0x80) = *(undefined4 *)(iVar5 + 0x80);
        *(undefined4 *)(puVar4 + 0x84) = *(undefined4 *)(iVar5 + 0x84);
        FUN_00480ed0(iVar5 + 0x88);
        FUN_00480f20(iVar5 + 0xb8);
        FUN_00480f60(iVar5 + 0xc0);
        FUN_00480f60(iVar5 + 0xd8);
        *(undefined4 *)(puVar4 + 0xf0) = *(undefined4 *)(iVar5 + 0xf0);
        *(undefined4 *)(puVar4 + 0xf4) = *(undefined4 *)(iVar5 + 0xf4);
        *(undefined4 *)(puVar4 + 0xf8) = *(undefined4 *)(iVar5 + 0xf8);
        *(undefined4 *)(puVar4 + 0xfc) = *(undefined4 *)(iVar5 + 0xfc);
        *(undefined4 *)(puVar4 + 0x100) = *(undefined4 *)(iVar5 + 0x100);
        *(undefined4 *)(puVar4 + 0x104) = *(undefined4 *)(iVar5 + 0x104);
        local_18 = local_18 + 0x108;
        puVar4 = puVar4 + 0x108;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    if (param_2 < *(int *)(param_1 + 8)) {
      iVar5 = param_2 * 0x108;
      do {
        iVar6 = *(int *)(param_1 + 0xc) + iVar5;
        puVar2 = local_1c + (*(int *)(param_3 + 8) + param_2) * 0x108;
        local_10 = 0x80;
        puVar4 = puVar2;
        do {
          *puVar4 = puVar4[iVar6 - (int)puVar2];
          puVar4 = puVar4 + 1;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
        *(undefined4 *)(puVar2 + 0x80) = *(undefined4 *)(iVar6 + 0x80);
        *(undefined4 *)(puVar2 + 0x84) = *(undefined4 *)(iVar6 + 0x84);
        FUN_00480df0(iVar6 + 0x88);
        *(undefined4 *)(puVar2 + 0x100) = *(undefined4 *)(iVar6 + 0x100);
        *(undefined4 *)(puVar2 + 0x104) = *(undefined4 *)(iVar6 + 0x104);
        param_2 = param_2 + 1;
        iVar5 = iVar5 + 0x108;
      } while (param_2 < *(int *)(param_1 + 8));
    }
    param_2 = 0;
    if (0 < *(int *)(param_3 + 8)) {
      puVar4 = local_1c + local_14 * 0x108;
      param_3 = 0;
      do {
        iVar6 = *(int *)(iVar1 + 0xc) + param_3;
        iVar5 = 0x80;
        puVar2 = puVar4;
        do {
          *puVar2 = puVar2[iVar6 - (int)puVar4];
          puVar2 = puVar2 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        *(undefined4 *)(puVar4 + 0x80) = *(undefined4 *)(iVar6 + 0x80);
        *(undefined4 *)(puVar4 + 0x84) = *(undefined4 *)(iVar6 + 0x84);
        FUN_00480df0(iVar6 + 0x88);
        *(undefined4 *)(puVar4 + 0x100) = *(undefined4 *)(iVar6 + 0x100);
        *(undefined4 *)(puVar4 + 0x104) = *(undefined4 *)(iVar6 + 0x104);
        param_2 = param_2 + 1;
        param_3 = param_3 + 0x108;
        puVar4 = puVar4 + 0x108;
      } while (param_2 < *(int *)(iVar1 + 8));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
    *(undefined1 **)(param_1 + 0xc) = local_1c;
    *(int *)(param_1 + 0x10) = iVar3;
    iVar3 = *(int *)(param_1 + 8) + *(int *)(iVar1 + 8);
  }
  else {
    iVar3 = iVar3 + -1;
    ExceptionList = &local_c;
    if (iVar5 + param_2 <= iVar3) {
      iVar6 = iVar3 * 0x108;
      ExceptionList = &local_c;
      do {
        iVar5 = (iVar3 - iVar5) * 0x108 + *(int *)(param_1 + 0xc);
        puVar2 = (undefined1 *)(iVar6 + *(int *)(param_1 + 0xc));
        local_10 = 0x80;
        puVar4 = puVar2;
        do {
          *puVar4 = puVar4[iVar5 - (int)puVar2];
          puVar4 = puVar4 + 1;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
        *(undefined4 *)(puVar2 + 0x80) = *(undefined4 *)(iVar5 + 0x80);
        *(undefined4 *)(puVar2 + 0x84) = *(undefined4 *)(iVar5 + 0x84);
        FUN_00480df0(iVar5 + 0x88);
        *(undefined4 *)(puVar2 + 0x100) = *(undefined4 *)(iVar5 + 0x100);
        *(undefined4 *)(puVar2 + 0x104) = *(undefined4 *)(iVar5 + 0x104);
        iVar5 = *(int *)(param_3 + 8);
        iVar6 = iVar6 + -0x108;
        iVar3 = iVar3 + -1;
      } while (iVar5 + param_2 <= iVar3);
    }
    param_2 = 0;
    if (0 < *(int *)(param_3 + 8)) {
      local_14 = local_14 * 0x108;
      param_3 = 0;
      do {
        iVar5 = *(int *)(iVar1 + 0xc) + param_3;
        puVar2 = (undefined1 *)(*(int *)(param_1 + 0xc) + local_14);
        iVar3 = 0x80;
        puVar4 = puVar2;
        do {
          *puVar4 = puVar4[iVar5 - (int)puVar2];
          puVar4 = puVar4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        *(undefined4 *)(puVar2 + 0x80) = *(undefined4 *)(iVar5 + 0x80);
        *(undefined4 *)(puVar2 + 0x84) = *(undefined4 *)(iVar5 + 0x84);
        FUN_00480df0(iVar5 + 0x88);
        *(undefined4 *)(puVar2 + 0x100) = *(undefined4 *)(iVar5 + 0x100);
        *(undefined4 *)(puVar2 + 0x104) = *(undefined4 *)(iVar5 + 0x104);
        param_3 = param_3 + 0x108;
        local_14 = local_14 + 0x108;
        param_2 = param_2 + 1;
      } while (param_2 < *(int *)(iVar1 + 8));
    }
    iVar3 = *(int *)(param_1 + 8) + *(int *)(iVar1 + 8);
  }
  *(int *)(param_1 + 8) = iVar3;
  ExceptionList = local_c;
  return;
}

