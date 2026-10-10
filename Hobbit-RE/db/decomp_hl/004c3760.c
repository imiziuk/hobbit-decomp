
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004c3760(int *param_1,float *param_2,int *param_3)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  undefined4 *puVar4;
  float *pfVar5;
  undefined4 uVar6;
  int iVar7;
  float10 fVar8;
  float local_d8 [3];
  uint *local_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0 [5];
  int local_ac;
  int local_a8;
  int local_a4;
  float fStack_94;
  int iStack_90;
  int iStack_8c;
  undefined1 auStack_88 [12];
  undefined1 auStack_7c [12];
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4896;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_rigid_instance__MoveAndUpdate_0072cd6c);
  local_ac = param_1[0x11];
  local_a8 = param_1[0x12];
  local_a4 = param_1[0x13];
  pfVar1 = (float *)(param_1 + 0x11);
  local_4 = 0;
  FUN_004357e0(param_1 + 0x14);
  local_d8[0] = *param_2;
  local_d8[1] = param_2[1];
  local_d8[2] = param_2[2];
  FUN_00649600(s_rigid_instance__MoveAndUpdate___s_0072cd44);
  local_c0[0] = 1e+06;
  local_c0[1] = 100000.0;
  local_c0[2] = 1e+06;
  iVar7 = 0;
  do {
    if (*(float *)((int)local_c0 + iVar7) < *(float *)((int)local_d8 + iVar7)) {
      *(undefined4 *)((int)local_d8 + iVar7) = *(undefined4 *)((int)local_c0 + iVar7);
    }
    if (*(float *)((int)local_d8 + iVar7) < -*(float *)((int)local_c0 + iVar7)) {
      *(float *)((int)local_d8 + iVar7) = -*(float *)((int)local_c0 + iVar7);
    }
    iVar7 = iVar7 + 4;
  } while (iVar7 < 0xc);
  FUN_00649720();
  FUN_00649600(s_rigid_instance__MoveAndUpdate___m_0072cd1c);
  local_4 = CONCAT31(local_4._1_3_,1);
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x28))();
  local_cc = (uint *)*puVar4;
  fStack_c8 = (float)puVar4[1];
  fStack_c4 = (float)puVar4[2];
  fStack_94 = *pfVar1;
  iStack_90 = param_1[0x12];
  iStack_8c = param_1[0x13];
  FUN_004357e0(param_1 + 0x14);
  pfVar2 = (float *)(param_1 + 5);
  param_1[7] = (int)local_d8[2];
  *pfVar2 = local_d8[0];
  param_1[6] = (int)local_d8[1];
  pfVar5 = (float *)(**(code **)(*param_1 + 0x38))();
  *pfVar1 = *pfVar5;
  param_1[0x12] = (int)pfVar5[1];
  param_1[0x13] = (int)pfVar5[2];
  FUN_004357e0(pfVar5 + 3);
  *pfVar1 = *pfVar1 + *pfVar2;
  param_1[0x12] = (int)((float)param_1[6] + (float)param_1[0x12]);
  param_1[0x13] = (int)((float)param_1[7] + (float)param_1[0x13]);
  FUN_0042faf0(pfVar2);
  param_1[0x1a] = *param_3;
  param_1[0x1b] = param_3[1];
  param_1[0x1c] = param_3[2];
  (**(code **)(*param_1 + 0x100))();
  if ((param_1[4] & 0x4000000U) != 0) {
    local_d8[2] = local_d8[2] - fStack_c4;
    local_d8[1] = local_d8[1] - fStack_c8;
    local_d8[0] = local_d8[0] - (float)local_cc;
    FUN_004aad90(local_d8);
  }
  iVar7 = (**(code **)(*param_1 + 0xf4))();
  if (iVar7 == 0) {
    local_d8[0] = 50.0;
    local_d8[1] = 50.0;
    local_d8[2] = 50.0;
    uVar6 = FUN_00405080(&local_cc,pfVar2,local_d8);
    FUN_004357e0(uVar6);
    uVar6 = FUN_00401f00(0x42480000,0x42480000,0x42480000);
    uVar6 = FUN_00402130(auStack_58,pfVar2,uVar6);
    FUN_004357e0(uVar6);
    FUN_004357e0(auStack_70);
    FUN_004357e0(auStack_64);
  }
  else {
    iVar7 = FUN_004c71a0();
    if (iVar7 == 0) {
      (**(code **)(*param_1 + 0x118))(auStack_4c);
      FUN_004d1ff0(pfVar1,auStack_4c);
    }
    else {
      local_cc = (uint *)((int *)param_1[0x50] + 1);
      uVar3 = *local_cc * 2;
      if (((uVar3 ^ *local_cc) & 0x7fffffff ^ uVar3) == 0xffffffff) {
        iVar7 = *(int *)param_1[0x50];
      }
      else {
        iVar7 = FUN_00549470(local_cc);
      }
      if (iVar7 == 0) {
        iVar7 = -1;
      }
      else {
        iVar7 = FUN_0053cb40(s__coll_0072c884,1);
        if (iVar7 == -1) {
          iVar7 = 0;
        }
      }
      (**(code **)(*param_1 + 0x114))(auStack_4c,iVar7);
      FUN_004d1ff0(pfVar1,auStack_4c);
    }
  }
  FUN_004357e0(pfVar1);
  FUN_004357e0(param_1 + 0x14);
  FUN_00401f00(-*pfVar2,-(float)param_1[6],-(float)param_1[7]);
  FUN_0042faf0(local_d8);
  FUN_0042faf0(local_d8);
  FUN_00405080(auStack_58,auStack_88,param_1 + 0x14);
  fVar8 = (float10)FUN_00402000();
  local_cc = (uint *)(float)fVar8;
  FUN_00405080(auStack_7c,&fStack_94,pfVar1);
  fVar8 = (float10)FUN_00402000();
  if ((float10)_DAT_006ebfe4 < fVar8 + (float10)(float)local_cc) {
    FUN_0058b130(&local_ac,pfVar1,(int)*(char *)((int)param_1 + 0x7d),param_1,(int)param_1 + 0x62);
    (**(code **)(*param_1 + 0x9c))(0);
    FUN_004c3500(&local_ac,0);
    FUN_004acb90();
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00649720();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

