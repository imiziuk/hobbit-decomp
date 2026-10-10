
void FUN_00587830(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float *pfVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  float local_440;
  int local_43c;
  int local_434;
  int local_430;
  float local_42c;
  float local_428;
  float local_424;
  float local_420;
  float local_41c;
  float local_418;
  undefined4 local_40c [64];
  float local_30c [192];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dca67;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_render_mgr__RenderBilboTargeting_00741d90);
  local_4 = 0;
  uVar11 = FUN_00473320();
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  local_4._0_1_ = 1;
  iVar5 = FUN_00406ce0(uVar11);
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar5 == -1) {
    FUN_00649720();
  }
  else {
    uVar4 = *(uint *)(DAT_0076f648 + iVar5 * 0x14);
    bVar1 = *(byte *)(uVar4 + 0x7f);
    FUN_00649720();
    if (((-(uint)((bVar1 & 0x10) != 0) & uVar4) != 0) && (iVar5 = FUN_00472e10(), iVar5 != 0)) {
      local_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = local_c;
      return;
    }
  }
  iVar5 = FUN_0041bcc0();
  iVar6 = FUN_004224a0(local_30c,local_40c,&local_434,&local_430);
  iVar7 = FUN_0065f190(s_BilboTargeting_00741d80);
  if (iVar7 == 0) {
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return;
  }
  if (iVar6 == 0) {
    if (0 < local_434) {
      uVar2 = *(undefined4 *)(iVar5 + 0x46d8);
      uVar3 = *(undefined4 *)(iVar5 + 0x46dc);
      local_440 = 0.0;
      FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
      local_4._0_1_ = 4;
      iVar6 = FUN_00406ce0(uVar2,uVar3);
      local_4 = (uint)local_4._1_3_ << 8;
      if (iVar6 == -1) {
        FUN_00649720();
      }
      else {
        uVar4 = *(uint *)(DAT_0076f648 + iVar6 * 0x14);
        piVar8 = (int *)(-(uint)((*(byte *)(uVar4 + 0x7f) & 0x10) != 0) & uVar4);
        FUN_00649720();
        if (piVar8 != (int *)0x0) {
          iVar6 = (**(code **)(*piVar8 + 0x38))();
          local_440 = *(float *)(iVar6 + 0x10);
          if (((char)piVar8[0x1f] == '\x1c') &&
             ((((((iVar6 = FUN_004a2340(), iVar6 != 0 || (iVar6 = piVar8[0x6c], iVar6 == 0x4c)) ||
                 (iVar6 == 0x3f)) || ((iVar6 == 0x3d || (iVar6 == 0x3e)))) || (iVar6 == 0x38)) ||
              ((iVar6 == 0x37 || (iVar6 == 0x39)))))) goto LAB_00587cac;
        }
      }
      local_41c = local_30c[1] + local_440;
      local_420 = local_30c[0];
      local_418 = local_30c[2];
      FUN_004f7e10(&local_420,local_40c[0],0,*(undefined4 *)(iVar5 + 0x46d8),
                   *(undefined4 *)(iVar5 + 0x46dc));
    }
    goto LAB_00587cac;
  }
  uVar2 = *(undefined4 *)(iVar5 + 0x46d8 + local_430 * 8);
  uVar3 = *(undefined4 *)(iVar5 + 0x46dc + local_430 * 8);
  local_440 = 0.0;
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  local_4._0_1_ = 2;
  iVar6 = FUN_00406ce0(uVar2,uVar3);
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar6 == -1) {
    FUN_00649720();
LAB_00587a09:
    local_424 = local_30c[local_430 * 3 + 2];
    local_42c = local_30c[local_430 * 3];
    local_428 = local_440 + local_30c[local_430 * 3 + 1];
    FUN_004f7e10(&local_42c,local_40c[local_430],1,*(undefined4 *)(iVar5 + 0x46d8 + local_430 * 8),
                 *(undefined4 *)(iVar5 + 0x46dc + local_430 * 8));
  }
  else {
    uVar4 = *(uint *)(DAT_0076f648 + iVar6 * 0x14);
    piVar8 = (int *)(-(uint)((*(byte *)(uVar4 + 0x7f) & 0x10) != 0) & uVar4);
    FUN_00649720();
    if (piVar8 == (int *)0x0) goto LAB_00587a09;
    iVar6 = (**(code **)(*piVar8 + 0x38))();
    local_440 = *(float *)(iVar6 + 0x10);
    if (((char)piVar8[0x1f] != '\x1c') ||
       ((((iVar6 = FUN_004a2340(), iVar6 == 0 && (iVar6 = piVar8[0x6c], iVar6 != 0x4c)) &&
         (iVar6 != 0x3f)) &&
        (((iVar6 != 0x3d && (iVar6 != 0x3e)) &&
         ((iVar6 != 0x38 && ((iVar6 != 0x37 && (iVar6 != 0x39)))))))))) goto LAB_00587a09;
  }
  local_43c = 0;
  if (0 < local_434) {
    puVar10 = (undefined4 *)(iVar5 + 0x46d8);
    pfVar9 = local_30c + 1;
    do {
      if (local_43c != local_430) {
        uVar2 = *puVar10;
        uVar3 = puVar10[1];
        local_440 = 0.0;
        FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
        local_4._0_1_ = 3;
        iVar5 = FUN_00406ce0(uVar2,uVar3);
        local_4 = (uint)local_4._1_3_ << 8;
        if (iVar5 == -1) {
          FUN_00649720();
        }
        else {
          uVar4 = *(uint *)(DAT_0076f648 + iVar5 * 0x14);
          piVar8 = (int *)(-(uint)((*(byte *)(uVar4 + 0x7f) & 0x10) != 0) & uVar4);
          FUN_00649720();
          if (piVar8 != (int *)0x0) {
            iVar5 = (**(code **)(*piVar8 + 0x38))();
            local_440 = *(float *)(iVar5 + 0x10);
            if (((char)piVar8[0x1f] == '\x1c') &&
               ((((iVar5 = FUN_004a2340(), iVar5 != 0 || (iVar5 = piVar8[0x6c], iVar5 == 0x4c)) ||
                 (iVar5 == 0x3f)) ||
                (((iVar5 == 0x3d || (iVar5 == 0x3e)) ||
                 ((iVar5 == 0x38 || ((iVar5 == 0x37 || (iVar5 == 0x39)))))))))) goto LAB_00587b78;
          }
        }
        local_418 = pfVar9[1];
        local_420 = pfVar9[-1];
        local_41c = local_440 + *pfVar9;
        FUN_004f7e10(&local_420,local_40c[local_43c],0,*puVar10,puVar10[1]);
      }
LAB_00587b78:
      local_43c = local_43c + 1;
      puVar10 = puVar10 + 2;
      pfVar9 = pfVar9 + 3;
    } while (local_43c < local_434);
  }
LAB_00587cac:
  FUN_0065f430();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

