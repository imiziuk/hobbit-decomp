
void FUN_0047d410(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int local_20;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d23a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00474830(param_1,param_2);
  iVar2 = FUN_00562370();
  FUN_00649920(local_10,s__s_Trigger_Name_00728470,param_1);
  local_4 = 0;
  uVar3 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar8 = *(int *)(param_2 + 8);
    if (*(int *)(param_2 + 0x10) < iVar8 + 1) {
      if (*(int *)(param_2 + 0x18) == 0) {
        iVar4 = *(int *)(param_2 + 0x10) / 2;
        iVar7 = 1;
        if (0 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar8 + iVar7 < 1) {
          iVar8 = 1;
        }
        else {
          if (iVar4 < 1) {
            iVar4 = 1;
          }
          iVar8 = iVar8 + iVar4;
        }
      }
      else {
        iVar8 = *(int *)(param_2 + 0x18) + iVar8;
      }
      puVar5 = (undefined1 *)operator_new(iVar8 * 0x108);
      local_4._0_1_ = 1;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        param_2 = iVar8;
        if (-1 < iVar8 + -1) {
          do {
            FUN_00406a80();
            FUN_00406a80();
            FUN_0041def0();
            FUN_0041def0();
            FUN_0041def0();
            param_2 = param_2 + -1;
          } while (param_2 != 0);
        }
      }
      local_4 = (uint)local_4._1_3_ << 8;
      local_20 = 0;
      if (0 < *(int *)(iVar1 + 8)) {
        param_2 = 0;
        puVar9 = puVar5;
        do {
          iVar4 = *(int *)(iVar1 + 0xc) + param_2;
          iVar7 = 0x80;
          puVar6 = puVar9;
          do {
            *puVar6 = puVar6[iVar4 - (int)puVar9];
            puVar6 = puVar6 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          *(undefined4 *)(puVar9 + 0x80) = *(undefined4 *)(iVar4 + 0x80);
          *(undefined4 *)(puVar9 + 0x84) = *(undefined4 *)(iVar4 + 0x84);
          FUN_00480df0(iVar4 + 0x88);
          *(undefined4 *)(puVar9 + 0x100) = *(undefined4 *)(iVar4 + 0x100);
          *(undefined4 *)(puVar9 + 0x104) = *(undefined4 *)(iVar4 + 0x104);
          local_20 = local_20 + 1;
          param_2 = param_2 + 0x108;
          puVar9 = puVar9 + 0x108;
        } while (local_20 < *(int *)(iVar1 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
      *(undefined1 **)(iVar1 + 0xc) = puVar5;
      *(int *)(iVar1 + 0x10) = iVar8;
    }
    iVar8 = *(int *)(iVar1 + 8) + 1;
    *(int *)(iVar1 + 8) = iVar8;
    iVar1 = iVar8 * 0x108 + -0x108 + *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0x80) = 0xd;
    FUN_00647d10(iVar1,uVar3);
    *(undefined4 *)(iVar1 + 0x84) = 0;
    *(undefined4 *)(iVar1 + 0xf0) = 0;
    *(undefined4 *)(iVar1 + 0xf4) = *(undefined4 *)(iVar2 + 8);
    *(int *)(iVar1 + 0x100) = iVar2;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return;
}

