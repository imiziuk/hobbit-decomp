
int __fastcall FUN_00425010(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int local_14;
  int local_10;
  undefined1 *local_8;
  int local_4;
  
  local_14 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) < local_14 + 1) {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar1 = *(int *)(param_1 + 0x10) / 2;
      iVar3 = 1;
      if (0 < iVar1) {
        iVar3 = iVar1;
      }
      if (local_14 + iVar3 < 1) {
        local_14 = 1;
      }
      else {
        if (iVar1 < 1) {
          iVar1 = 1;
        }
        local_14 = local_14 + iVar1;
      }
    }
    else {
      local_14 = *(int *)(param_1 + 0x18) + local_14;
    }
    local_8 = (undefined1 *)operator_new(local_14 * 0x108);
    if (local_8 == (undefined1 *)0x0) {
      local_8 = (undefined1 *)0x0;
    }
    else {
      iVar3 = local_14;
      if (-1 < local_14 + -1) {
        do {
          FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
          FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
          FUN_00406a80();
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    local_4 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      local_10 = 0;
      puVar4 = local_8;
      do {
        iVar3 = *(int *)(param_1 + 0xc) + local_10;
        iVar1 = 0x80;
        puVar2 = puVar4;
        do {
          *puVar2 = puVar2[iVar3 - (int)puVar4];
          puVar2 = puVar2 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        *(undefined4 *)(puVar4 + 0x80) = *(undefined4 *)(iVar3 + 0x80);
        *(undefined4 *)(puVar4 + 0x84) = *(undefined4 *)(iVar3 + 0x84);
        FUN_004357e0(iVar3 + 0x88);
        FUN_004357e0(iVar3 + 0x94);
        FUN_00480f60(iVar3 + 0xa0);
        puVar4[0xbb] = *(undefined1 *)(iVar3 + 0xbb);
        puVar4[0xba] = *(undefined1 *)(iVar3 + 0xba);
        puVar4[0xb9] = *(undefined1 *)(iVar3 + 0xb9);
        puVar4[0xb8] = *(undefined1 *)(iVar3 + 0xb8);
        FUN_00425250(iVar3 + 0xbc);
        *(undefined4 *)(puVar4 + 0xc0) = *(undefined4 *)(iVar3 + 0xc0);
        *(undefined4 *)(puVar4 + 0xc4) = *(undefined4 *)(iVar3 + 0xc4);
        *(undefined4 *)(puVar4 + 200) = *(undefined4 *)(iVar3 + 200);
        FUN_004357e0(iVar3 + 0xcc);
        FUN_004357e0(iVar3 + 0xd8);
        FUN_004357e0(iVar3 + 0xe4);
        *(undefined4 *)(puVar4 + 0xf0) = *(undefined4 *)(iVar3 + 0xf0);
        *(undefined4 *)(puVar4 + 0xf4) = *(undefined4 *)(iVar3 + 0xf4);
        *(undefined4 *)(puVar4 + 0xf8) = *(undefined4 *)(iVar3 + 0xf8);
        *(undefined4 *)(puVar4 + 0xfc) = *(undefined4 *)(iVar3 + 0xfc);
        *(undefined4 *)(puVar4 + 0x100) = *(undefined4 *)(iVar3 + 0x100);
        *(undefined4 *)(puVar4 + 0x104) = *(undefined4 *)(iVar3 + 0x104);
        local_10 = local_10 + 0x108;
        local_4 = local_4 + 1;
        puVar4 = puVar4 + 0x108;
      } while (local_4 < *(int *)(param_1 + 8));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
    *(undefined1 **)(param_1 + 0xc) = local_8;
    *(int *)(param_1 + 0x10) = local_14;
  }
  iVar3 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar3;
  return iVar3 * 0x108 + -0x108 + *(int *)(param_1 + 0xc);
}

