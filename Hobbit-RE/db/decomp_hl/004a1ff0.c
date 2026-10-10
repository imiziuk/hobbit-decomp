
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004a1ff0(int *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined8 uVar8;
  int iVar9;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38 [5];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3a40;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_NPCObject__AdvanceEventProcessin_0072af10);
  local_4 = 0;
  uVar8 = FUN_005af0f0();
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  local_4._0_1_ = 1;
  iVar4 = FUN_00406ce0(uVar8);
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar4 == -1) {
    FUN_00649720();
  }
  else {
    uVar1 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
    piVar7 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
    FUN_00649720();
    if (piVar7 != (int *)0x0) {
      if ((param_1[0x6c] == 0x30) || (param_1[0x6c] == 0x1f)) {
        pfVar5 = (float *)(**(code **)(*piVar7 + 0x28))();
        local_24 = *pfVar5;
        local_20 = pfVar5[1];
        local_1c = pfVar5[2];
      }
      else {
        FUN_00401f00((float)piVar7[0x14] + (float)piVar7[0x11],
                     (float)piVar7[0x15] + (float)piVar7[0x12],
                     (float)piVar7[0x16] + (float)piVar7[0x13]);
        FUN_00402160(&local_18,local_38,0x3f000000);
        local_24 = local_18;
        local_20 = local_14;
        local_1c = local_10;
      }
      goto LAB_004a223b;
    }
  }
  pfVar5 = (float *)(**(code **)(*param_1 + 0x28))();
  local_24 = *pfVar5;
  local_20 = pfVar5[1];
  local_1c = pfVar5[2];
  iVar4 = (**(code **)(*param_1 + 0x154))();
  uVar6 = *(undefined4 *)(iVar4 + 0x20);
  iVar4 = (**(code **)(*param_1 + 0x154))();
  fStack_44 = *(float *)(iVar4 + 0x1c);
  FUN_0064c8e0(fStack_44,&fStack_3c,&fStack_44);
  FUN_0064c8e0(uVar6,&fStack_40,local_38);
  local_18 = fStack_40 * fStack_44;
  local_14 = -fStack_3c;
  local_10 = local_38[0] * fStack_44;
  fVar2 = DAT_006e92e8 / SQRT(local_18 * local_18 + local_14 * local_14 + local_10 * local_10);
  iVar4 = FUN_0064cf30(fVar2);
  if (iVar4 == 0) {
    local_10 = 0.0;
    fVar3 = DAT_006e92e4;
    fVar2 = DAT_006e92e4;
  }
  else {
    fVar2 = fVar2 * _DAT_006e9334;
    local_10 = local_10 * fVar2;
    fVar3 = local_18 * fVar2;
    fVar2 = local_14 * fVar2;
  }
  local_24 = fVar3 + local_24;
  local_20 = local_20 + fVar2;
  local_1c = local_1c + local_10;
LAB_004a223b:
  iVar4 = param_1[3];
  pfVar5 = &local_24;
  iVar9 = param_1[2];
  piVar7 = param_1 + 5;
  param_1[0x3a] = param_1[0x3a] & 0xfffffffb;
  uVar6 = (**(code **)(*param_1 + 0x154))(iVar9,iVar4,piVar7,pfVar5);
  FUN_00575440(uVar6,iVar9,iVar4,piVar7,pfVar5);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

