
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0045cbe0(int *param_1)

{
  float fVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  int iStack00000004;
  float *pfVar13;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d0618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_camera__CollectBlockingObjectLis_00725c24);
  local_4 = 0;
  fVar1 = (float)param_1[0x3a] * (float)param_1[0x3a] +
          (float)param_1[0x39] * (float)param_1[0x39] + (float)param_1[0x38] * (float)param_1[0x38];
  if (fVar1 < DAT_006e92e8 != (NAN(fVar1) || NAN(DAT_006e92e8))) {
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return;
  }
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x28))();
  uStack_18 = *puVar5;
  uStack_14 = puVar5[1];
  uStack_10 = puVar5[2];
  uVar6 = (**(code **)(*param_1 + 0x30))();
  FUN_00429030(uVar6);
  fVar1 = (float)param_1[0x41];
  fStack_1c = (float)param_1[0x3a] - fVar1 * 1.0;
  fStack_20 = (float)param_1[0x39] - fVar1 * 0.0;
  fStack_24 = (float)param_1[0x38] - fVar1 * 0.0;
  iVar7 = __ftol();
  uVar8 = _DAT_0077285c & 0x20;
  uVar6 = 3;
  puVar5 = &uStack_18;
  pfVar13 = &fStack_24;
  param_1[0x2c] = 0;
  uVar12 = FUN_0041bcd0(pfVar13,puVar5,3);
  FUN_00579720(uVar12,pfVar13,puVar5,uVar6);
  FUN_005798f0(8);
  FUN_00577e70();
  iStack00000004 = 0;
  if (0 < DAT_00773970) {
    puVar5 = &DAT_00773520;
    do {
      uVar6 = puVar5[1];
      uVar3 = *puVar5;
      uStack_34 = uVar3;
      uStack_30 = uVar6;
      FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
      local_4._0_1_ = 1;
      iVar9 = FUN_00406ce0(uVar3,uVar6);
      local_4 = (uint)local_4._1_3_ << 8;
      if (iVar9 == -1) {
        FUN_00649720();
        uVar11 = 0;
      }
      else {
        uVar11 = *(uint *)(DAT_0076f648 + iVar9 * 0x14);
        uVar11 = -(uint)((*(byte *)(uVar11 + 0x7f) & 0x10) != 0) & uVar11;
        FUN_00649720();
      }
      if ((uVar8 == 0) || (iVar9 = FUN_004ab470(), iVar9 == 0)) {
        param_1[0x2c] = 1;
      }
      else {
        *(byte *)(uVar11 + 0x7a) = *(byte *)(uVar11 + 0x7a) | 0x40;
        FUN_00588c70(param_1[0x2a],uStack_34,uStack_30);
      }
      iStack00000004 = iStack00000004 + 1;
      puVar5 = puVar5 + 0x12;
    } while (iStack00000004 < DAT_00773970);
  }
  FUN_00588ff0(param_1[0x2a]);
  iVar9 = FUN_00589010(param_1[0x2a],&uStack_34);
  uVar6 = uStack_34;
  uVar3 = uStack_30;
  do {
    uStack_34 = uVar6;
    uStack_30 = uVar3;
    if (iVar9 == 0) {
      local_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = local_c;
      return;
    }
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 2;
    iVar9 = FUN_00406ce0(uVar6,uVar3);
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar9 == -1) {
      FUN_00649720();
LAB_0045ce8d:
      FUN_00588dc0(param_1[0x2a],uStack_34,uStack_30);
    }
    else {
      uVar8 = *(uint *)(DAT_0076f648 + iVar9 * 0x14);
      uVar8 = -(uint)((*(byte *)(uVar8 + 0x7f) & 0x10) != 0) & uVar8;
      FUN_00649720();
      if (uVar8 == 0) goto LAB_0045ce8d;
      iVar9 = *(int *)(uVar8 + 8);
      iVar4 = *(int *)(uVar8 + 0xc);
      iVar10 = FUN_0041bcc0();
      if ((iVar9 == *(int *)(iVar10 + 8)) && (iVar4 == *(int *)(iVar10 + 0xc))) goto LAB_0045ce8d;
      if ((*(byte *)(uVar8 + 0x7a) & 0x40) != 0) {
        uVar6 = 3;
        pfVar13 = &fStack_24;
        puVar5 = &uStack_18;
        uVar11 = 0x80;
        uVar12 = FUN_0041bcd0(puVar5,pfVar13,3);
        FUN_00579720(uVar12,puVar5,pfVar13,uVar6);
        iVar9 = FUN_00577f60(*(undefined4 *)(uVar8 + 8),*(undefined4 *)(uVar8 + 0xc));
        if (iVar9 == 0) {
          uVar11 = 0;
        }
        if ((*(char *)(uVar8 + 0x7c) == '\x06') || (*(char *)(uVar8 + 0x7c) == '\x05')) {
          bVar2 = *(byte *)(uVar8 + 0x80);
          if (bVar2 < uVar11) {
            if ((int)((uint)bVar2 + iVar7) < (int)uVar11) {
              *(byte *)(uVar8 + 0x80) = (char)iVar7 + bVar2;
              goto LAB_0045cea6;
            }
          }
          else if ((int)uVar11 < (int)((uint)bVar2 - iVar7)) {
            uVar11 = (uint)(byte)(bVar2 - (char)iVar7);
          }
          *(char *)(uVar8 + 0x80) = (char)uVar11;
        }
      }
    }
LAB_0045cea6:
    iVar9 = FUN_00589010(param_1[0x2a],&uStack_34);
    uVar6 = uStack_34;
    uVar3 = uStack_30;
  } while( true );
}

