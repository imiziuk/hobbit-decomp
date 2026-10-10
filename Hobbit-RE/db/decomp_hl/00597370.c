
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00597370(int param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd390;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_PhysController__GetStrafeAnim_0074311c);
  local_4 = 0;
  local_28 = 0.7853982;
  local_20 = 2.3561945;
  local_2c = -0.7853982;
  local_24 = -2.3561945;
  iVar5 = FUN_00592960();
  if ((((iVar5 == 6) || (iVar5 == 8)) || (iVar5 == 7)) || (iVar5 == 0x31)) {
    local_2c = -0.95993114;
    local_28 = 0.95993114;
  }
  else if (iVar5 == 0xb) {
    local_2c = -0.61086524;
    local_24 = -2.5307274;
  }
  else if (iVar5 == 0xc) {
    local_28 = 0.61086524;
    local_20 = 2.6179938;
  }
  else if ((iVar5 == 9) || (iVar5 == 10)) {
    local_24 = -2.1816616;
    local_20 = 2.1816616;
  }
  FUN_00592920();
  uVar7 = FUN_004a4160();
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  local_4._0_1_ = 1;
  iVar5 = FUN_00406ce0(uVar7);
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar5 == -1) {
    FUN_00649720();
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(DAT_0076f648 + iVar5 * 0x14);
    uVar6 = -(uint)((*(byte *)(uVar6 + 0x7f) & 0x10) != 0) & uVar6;
    FUN_00649720();
  }
  FUN_00592920();
  FUN_004a4160();
  if ((param_5 < local_2c) || (param_5 < local_28 == (param_5 == local_28))) {
    if ((param_5 < local_2c == (param_5 == local_2c)) || (param_5 < local_24)) {
      if ((param_5 < local_28) || (param_5 < local_20 == (param_5 == local_20))) {
        uVar8 = 9;
      }
      else {
        uVar8 = 0xc;
      }
    }
    else {
      uVar8 = 0xb;
    }
  }
  else {
    if (uVar6 != 0) {
      fVar1 = *(float *)(uVar6 + 0x58) - *(float *)(uVar6 + 0x4c);
      fVar3 = *(float *)(uVar6 + 0x54) - *(float *)(uVar6 + 0x48);
      fVar2 = *(float *)(uVar6 + 0x50) - *(float *)(uVar6 + 0x44);
      fVar1 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2) * _DAT_006e936c;
      iVar5 = FUN_00592920();
      fVar2 = *(float *)(iVar5 + 0x58) - *(float *)(iVar5 + 0x4c);
      fVar4 = *(float *)(iVar5 + 0x54) - *(float *)(iVar5 + 0x48);
      fVar3 = *(float *)(iVar5 + 0x50) - *(float *)(iVar5 + 0x44);
      if (SQRT(param_2 * param_2 + param_4 * param_4 + param_3 * param_3) <=
          SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3) * _DAT_006e936c + fVar1 +
          _DAT_006e99a0) {
        uVar8 = 0xb;
        goto LAB_00597611;
      }
    }
    if (*(int *)(*(int *)(param_1 + 400) + 0x54) != 0) {
      iVar5 = FUN_00594390(*(undefined4 *)(*(int *)(param_1 + 400) + 0x30));
      if (iVar5 != 0) goto LAB_0059761a;
    }
    uVar8 = *(undefined4 *)(*(int *)(param_1 + 400) + 0x2c);
  }
LAB_00597611:
  iVar5 = FUN_00593dd0(uVar8,1,0xfffffffe);
LAB_0059761a:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return iVar5;
}

