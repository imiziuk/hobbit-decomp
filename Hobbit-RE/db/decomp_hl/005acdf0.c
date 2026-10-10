
void __fastcall FUN_005acdf0(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined1 auStack_88 [4];
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined1 *local_6c [5];
  float local_58;
  float local_54;
  float local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006de1e0;
  local_c = ExceptionList;
  uStack_80._4_4_ = s_StateController__UpdateTarget_00744b64;
  uStack_80._0_4_ = (undefined1 **)0x5ace1b;
  ExceptionList = &local_c;
  FUN_00649600();
  local_4 = 0;
  if (*(int *)(param_1 + 0x180) != 0 || *(int *)(param_1 + 0x184) != 0) {
    *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x180);
    *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x184);
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x178) + 0x308);
  uVar3 = *(undefined4 *)(iVar5 + 0x3c);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(iVar5 + 0x38);
  *(undefined4 *)(param_1 + 0x184) = uVar3;
  uStack_80._4_4_ = (char *)0x5ace66;
  uVar9 = FUN_005af0f0();
  uStack_80._4_4_ = s_obj_mgr__LockObject_Guid__0071cef0;
  uStack_80._0_4_ = (undefined1 **)0x5ace78;
  FUN_00649600();
  local_4._0_1_ = 1;
  uStack_84 = 0x5ace89;
  uStack_80 = uVar9;
  iVar5 = FUN_00406ce0();
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar5 == -1) {
    uStack_80._4_4_ = (char *)0x5ace9c;
    FUN_00649720();
  }
  else {
    uVar4 = *(uint *)(DAT_0076f648 + iVar5 * 0x14);
    piVar8 = (int *)(-(uint)((*(byte *)(uVar4 + 0x7f) & 0x10) != 0) & uVar4);
    uStack_80._4_4_ = (char *)0x5acf0a;
    FUN_00649720();
    if (piVar8 != (int *)0x0) {
      uStack_80._4_4_ = (char *)0x5acf15;
      pfVar6 = (float *)(**(code **)(*piVar8 + 0x28))();
      local_58 = *pfVar6;
      local_54 = pfVar6[1];
      local_50 = pfVar6[2];
      if (*(int *)(param_1 + 0x180) != 0 || *(int *)(param_1 + 0x184) != 0) {
        uStack_80._4_4_ = (char *)0x1;
        local_6c[0] = auStack_88;
        FUN_004357e0(&local_58);
        FUN_005b3030();
        FUN_005aa7f0();
      }
      uStack_80._4_4_ = (char *)0x5acf69;
      pfVar7 = (float *)(**(code **)(**(int **)(param_1 + 0x178) + 0x28))();
      fVar1 = pfVar7[2];
      pfVar6 = (float *)(param_1 + 400);
      fVar2 = pfVar7[1];
      *pfVar6 = local_58 - *pfVar7;
      *(float *)(param_1 + 0x194) = local_54 - fVar2;
      *(float *)(param_1 + 0x198) = local_50 - fVar1;
      uStack_80._4_4_ = (char *)0x5acf99;
      iVar5 = (**(code **)(**(int **)(param_1 + 0x178) + 0x154))();
      uStack_4c = *(undefined4 *)(iVar5 + 0x4c);
      uStack_3c = *(undefined4 *)(iVar5 + 0x50);
      uStack_2c = *(undefined4 *)(iVar5 + 0x54);
      uStack_1c = *(undefined4 *)(iVar5 + 0x58);
      uStack_48 = *(undefined4 *)(iVar5 + 0x5c);
      uStack_38 = *(undefined4 *)(iVar5 + 0x60);
      uStack_28 = *(undefined4 *)(iVar5 + 100);
      uStack_18 = *(undefined4 *)(iVar5 + 0x68);
      uStack_44 = *(undefined4 *)(iVar5 + 0x6c);
      uStack_34 = *(undefined4 *)(iVar5 + 0x70);
      uStack_24 = *(undefined4 *)(iVar5 + 0x74);
      uStack_14 = *(undefined4 *)(iVar5 + 0x78);
      uStack_40 = *(undefined4 *)(iVar5 + 0x7c);
      uStack_30 = *(undefined4 *)(iVar5 + 0x80);
      uStack_20 = *(undefined4 *)(iVar5 + 0x84);
      uStack_10 = *(undefined4 *)(iVar5 + 0x88);
      uStack_80._0_4_ = local_6c;
      uStack_84 = 0x5ad07b;
      uStack_80._4_4_ = (char *)pfVar6;
      pfVar7 = (float *)FUN_0041b9f0();
      *pfVar6 = *pfVar7;
      *(float *)(param_1 + 0x194) = pfVar7[1];
      *(float *)(param_1 + 0x198) = pfVar7[2];
      goto LAB_005acec4;
    }
  }
  uStack_80._4_4_ = (char *)&local_58;
  local_58 = 0.0;
  local_54 = 0.0;
  local_50 = 0.0;
  uStack_80._0_4_ = (undefined1 **)0x5acec4;
  FUN_004357e0();
LAB_005acec4:
  local_4 = 0xffffffff;
  uStack_80._4_4_ = (char *)0x5aced5;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

