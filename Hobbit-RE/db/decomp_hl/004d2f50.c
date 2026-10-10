
void __fastcall FUN_004d2f50(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_54 [2];
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  uint local_40;
  undefined4 local_4;
  
  *(uint *)(param_1 + 0x160) = *(uint *)(param_1 + 0x160) ^ 2;
  iVar2 = 0;
  *(int *)(param_1 + 0x16c) = *(int *)(param_1 + 0x16c) + 1;
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(int *)(param_1 + 0x164) == -0x40800000) {
    *(undefined4 *)(param_1 + 0x168) = 0xbf800000;
  }
  local_48 = *(undefined4 *)(param_1 + 0xc);
  local_4c = *(undefined4 *)(param_1 + 8);
  local_54[0] = 0x14;
  FUN_0054e4d0(*(undefined4 *)(DAT_0075cf1c + 8),*(undefined4 *)(DAT_0075cf1c + 0xc),local_54);
  local_40 = *(uint *)(param_1 + 0x160) >> 1 & 1;
  local_4 = 2;
  local_44 = param_1;
  FUN_004aab50(s_OnSwitched_0072d8d4,&DAT_0072d8e0,&local_44);
  FUN_00659600(s_MineTrackLever_0071d568,1);
  if (0 < *(int *)(param_1 + 0x170)) {
    do {
      piVar1 = (int *)FUN_004021c0(*(undefined4 *)(*(int *)(param_1 + 0x174) + iVar2 * 8),
                                   *(undefined4 *)(*(int *)(param_1 + 0x174) + 4 + iVar2 * 8));
      if (piVar1 != (int *)0x0) {
        if ((char)piVar1[0x1f] == '\x05') {
          FUN_004c77d0(*(uint *)(param_1 + 0x160) >> 4 & 1);
          if ((*(uint *)(param_1 + 0x160) & 8) != 0) {
            if ((*(uint *)(param_1 + 0x160) & 2) == 0) {
              uVar3 = 0xbf800000;
            }
            else {
              uVar3 = 0x3f800000;
            }
            FUN_004c74d0(uVar3);
          }
        }
        (**(code **)(*piVar1 + 0xa4))();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x170));
  }
  return;
}

