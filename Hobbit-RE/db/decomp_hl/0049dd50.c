
void __fastcall FUN_0049dd50(int *param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  int *piVar9;
  int local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_44 [20];
  undefined1 local_30 [12];
  undefined1 local_24 [24];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d35f0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_nav_point__CalculateLinks_0072a560);
  local_4 = 0;
  if (param_1[0x2f] == 0) {
    FUN_006bf840(param_1[0x2d]);
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
  }
  param_1[0x2c] = 0;
  local_54 = (float)param_1[0x34];
  FUN_00401f00((float)param_1[5] - local_54,(float)param_1[6] - local_54,
               (float)param_1[7] - local_54);
  FUN_004357e0(local_44);
  uVar5 = FUN_00401f00(local_54,local_54,local_54);
  uVar5 = FUN_00402130(local_30,param_1 + 5,uVar5);
  FUN_004357e0(uVar5);
  FUN_0054d4f0(&local_58,0xffffffff,0x10000000,local_24);
  iVar6 = FUN_00588bd0(local_58);
  if (iVar6 == 1) {
    FUN_0064e7d0(s_Only_original_navnode_found__0072a540);
  }
  if (local_58 != -1) {
    FUN_00588ff0(local_58);
    iVar6 = FUN_00589010(local_58,&local_50);
    uVar5 = local_50;
    uVar4 = local_4c;
    while (iVar6 != 0) {
      local_50 = uVar5;
      local_4c = uVar4;
      FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
      local_4._0_1_ = 1;
      iVar6 = FUN_00406ce0(uVar5,uVar4);
      local_4 = (uint)local_4._1_3_ << 8;
      if (iVar6 == -1) {
        FUN_00649720();
        piVar9 = (int *)0x0;
      }
      else {
        uVar1 = *(uint *)(DAT_0076f648 + iVar6 * 0x14);
        piVar9 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
        FUN_00649720();
      }
      if (piVar9 != param_1) {
        pfVar7 = (float *)(**(code **)(*param_1 + 0x28))();
        pfVar8 = (float *)(**(code **)(*piVar9 + 0x28))();
        fVar3 = SQRT((pfVar8[2] - pfVar7[2]) * (pfVar8[2] - pfVar7[2]) +
                     (pfVar8[1] - pfVar7[1]) * (pfVar8[1] - pfVar7[1]) +
                     (*pfVar8 - *pfVar7) * (*pfVar8 - *pfVar7));
        local_54 = fVar3;
        if (fVar3 < (float)piVar9[0x34] + (float)param_1[0x34] ==
            (NAN(fVar3) || NAN((float)piVar9[0x34] + (float)param_1[0x34]))) {
          FUN_0049e090(param_1[2],param_1[3]);
        }
        else {
          FUN_0049dff0(local_50,local_4c,fVar3);
          FUN_0049dff0(param_1[2],param_1[3],fVar3);
        }
      }
      iVar6 = FUN_00589010(local_58,&local_50);
      uVar5 = local_50;
      uVar4 = local_4c;
    }
    FUN_00588b20(local_58);
  }
  iVar6 = param_1[0x33];
  iVar2 = param_1[0x32];
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  FUN_0049dbd0(iVar2,iVar6);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

