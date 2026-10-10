
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00409bc0(int param_1,float param_2)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cebb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00557bb0();
  bVar3 = false;
  if (0 < *(int *)(param_1 + 0x148)) {
    iVar6 = 0;
    do {
      if (bVar3) break;
      FUN_00649600();
      local_4 = 0;
      iVar4 = FUN_00406ce0();
      local_4 = 0xffffffff;
      if (iVar4 == -1) {
        FUN_00649720();
      }
      else {
        uVar2 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
        bVar1 = *(byte *)(uVar2 + 0x7f);
        FUN_00649720();
        if (((-(uint)((bVar1 & 0x10) != 0) & uVar2) != 0) && (iVar4 = FUN_004df1b0(), iVar4 != 0)) {
          bVar3 = true;
          *(undefined4 *)(param_1 + 0x104) = 2;
          FUN_0064e870();
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x148));
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 300)) {
    do {
      if (bVar3) break;
      FUN_00649600();
      local_4 = 1;
      iVar4 = FUN_00406ce0();
      local_4 = 0xffffffff;
      if (iVar4 == -1) {
        FUN_00649720();
      }
      else {
        uVar2 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
        bVar1 = *(byte *)(uVar2 + 0x7f);
        FUN_00649720();
        if (((-(uint)((bVar1 & 0x10) != 0) & uVar2) != 0) && (iVar4 = FUN_004df1b0(), iVar4 != 0)) {
          FUN_0064e870();
          bVar3 = true;
          *(undefined4 *)(param_1 + 0x104) = 1;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 300));
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x110)) {
    do {
      if (bVar3) break;
      FUN_00649600();
      local_4 = 2;
      iVar4 = FUN_00406ce0();
      local_4 = 0xffffffff;
      if (iVar4 == -1) {
        FUN_00649720();
      }
      else {
        uVar2 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
        bVar1 = *(byte *)(uVar2 + 0x7f);
        FUN_00649720();
        if (((-(uint)((bVar1 & 0x10) != 0) & uVar2) != 0) && (iVar4 = FUN_004df1b0(), iVar4 != 0)) {
          bVar3 = true;
          *(undefined4 *)(param_1 + 0x104) = 0;
          FUN_0064e870();
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x110));
  }
  iVar6 = FUN_0041bcc0();
  if ((*(int *)(iVar6 + 0x44c) == 0) &&
     (((*(int *)(param_1 + 0x104) == 1 || (*(int *)(param_1 + 0x104) == 2)) &&
      (fVar7 = (float10)FUN_00647b30(), fVar7 < (float10)param_2 != (fVar7 == (float10)param_2)))))
  {
    FUN_00647b30();
    piVar5 = (int *)FUN_0041bcc0();
    (**(code **)(*piVar5 + 0x28))();
    FUN_00647b30();
    FUN_00647b30();
    FUN_00647b30();
    FUN_00409fa0();
    FUN_004357e0();
    FUN_00649b20(s_Falling_Rock_0071dc28);
    FUN_004b52b0();
  }
  ExceptionList = local_c;
  return;
}

