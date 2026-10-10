
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00423aa0(int *param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  int *piVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cf530;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_bilbo__Plants_CheckForPlants_0072071c);
  local_4 = 0;
  if (param_1[0x235] == 1) {
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return;
  }
  if (param_2 != -1) {
    FUN_00588ff0(param_2);
    pfVar5 = (float *)(**(code **)(*param_1 + 0x28))();
    fStack_18 = *pfVar5;
    fStack_14 = pfVar5[1];
    fStack_10 = pfVar5[2];
    iVar6 = FUN_00589010(param_2,&uStack_30);
    uVar3 = uStack_30;
    uVar4 = uStack_2c;
    while (iVar6 != 0) {
      uStack_30 = uVar3;
      uStack_2c = uVar4;
      FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
      local_4._0_1_ = 1;
      iVar6 = FUN_00406ce0(uVar3,uVar4);
      local_4 = (uint)local_4._1_3_ << 8;
      if (iVar6 == -1) {
        FUN_00649720();
      }
      else {
        uVar1 = *(uint *)(DAT_0076f648 + iVar6 * 0x14);
        piVar7 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
        FUN_00649720();
        if ((((piVar7 != (int *)0x0) && ((char)piVar7[0x1f] == '\x05')) &&
            ((piVar7[4] & 0x40000000U) != 0)) &&
           ((pfVar5 = (float *)(**(code **)(*piVar7 + 0x28))(),
            fVar2 = SQRT((fStack_10 - pfVar5[2]) * (fStack_10 - pfVar5[2]) +
                         (fStack_14 - pfVar5[1]) * (fStack_14 - pfVar5[1]) +
                         (fStack_18 - *pfVar5) * (fStack_18 - *pfVar5)),
            fVar2 < _DAT_006e9810 != (fVar2 == _DAT_006e9810) &&
            ((*(byte *)((int)piVar7 + 0x126) & 1) == 0)))) {
          FUN_004c7960();
        }
      }
      iVar6 = FUN_00589010(param_2,&uStack_30);
      uVar3 = uStack_30;
      uVar4 = uStack_2c;
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

