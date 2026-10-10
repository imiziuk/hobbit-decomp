
void __thiscall FUN_00590c80(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int local_1c;
  undefined1 *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dcdfb;
  local_c = ExceptionList;
  if (param_2 != *(int *)(param_1 + 0x10)) {
    ExceptionList = &local_c;
    local_14 = (undefined1 *)operator_new(param_2 * 0x108);
    local_4 = 0;
    if (local_14 == (undefined1 *)0x0) {
      local_14 = (undefined1 *)0x0;
    }
    else {
      iVar2 = param_2;
      if (-1 < param_2 + -1) {
        do {
          FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
          FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
          FUN_00406a80();
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    local_4 = 0xffffffff;
    local_10 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      local_1c = 0;
      puVar3 = local_14;
      do {
        iVar2 = *(int *)(param_1 + 0xc) + local_1c;
        iVar4 = 0x80;
        puVar1 = puVar3;
        do {
          *puVar1 = puVar1[iVar2 - (int)puVar3];
          puVar1 = puVar1 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        *(undefined4 *)(puVar3 + 0x80) = *(undefined4 *)(iVar2 + 0x80);
        *(undefined4 *)(puVar3 + 0x84) = *(undefined4 *)(iVar2 + 0x84);
        FUN_004357e0(iVar2 + 0x88);
        FUN_004357e0(iVar2 + 0x94);
        FUN_00480f60(iVar2 + 0xa0);
        puVar3[0xbb] = *(undefined1 *)(iVar2 + 0xbb);
        puVar3[0xba] = *(undefined1 *)(iVar2 + 0xba);
        puVar3[0xb9] = *(undefined1 *)(iVar2 + 0xb9);
        puVar3[0xb8] = *(undefined1 *)(iVar2 + 0xb8);
        FUN_00425250(iVar2 + 0xbc);
        *(undefined4 *)(puVar3 + 0xc0) = *(undefined4 *)(iVar2 + 0xc0);
        *(undefined4 *)(puVar3 + 0xc4) = *(undefined4 *)(iVar2 + 0xc4);
        *(undefined4 *)(puVar3 + 200) = *(undefined4 *)(iVar2 + 200);
        FUN_004357e0(iVar2 + 0xcc);
        FUN_004357e0(iVar2 + 0xd8);
        FUN_004357e0(iVar2 + 0xe4);
        *(undefined4 *)(puVar3 + 0xf0) = *(undefined4 *)(iVar2 + 0xf0);
        *(undefined4 *)(puVar3 + 0xf4) = *(undefined4 *)(iVar2 + 0xf4);
        *(undefined4 *)(puVar3 + 0xf8) = *(undefined4 *)(iVar2 + 0xf8);
        *(undefined4 *)(puVar3 + 0xfc) = *(undefined4 *)(iVar2 + 0xfc);
        *(undefined4 *)(puVar3 + 0x100) = *(undefined4 *)(iVar2 + 0x100);
        *(undefined4 *)(puVar3 + 0x104) = *(undefined4 *)(iVar2 + 0x104);
        local_1c = local_1c + 0x108;
        local_10 = local_10 + 1;
        puVar3 = puVar3 + 0x108;
      } while (local_10 < *(int *)(param_1 + 8));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
    *(undefined1 **)(param_1 + 0xc) = local_14;
    *(int *)(param_1 + 0x10) = param_2;
  }
  ExceptionList = local_c;
  return;
}

