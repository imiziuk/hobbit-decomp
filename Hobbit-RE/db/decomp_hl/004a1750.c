
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004a1750(int *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float local_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d39a0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_NPCObject__AdvanceFullUpdate_0072ae80);
  local_4 = 0;
  if (param_1[0x6c] == 0x47) {
    FUN_00649600(s_NPCObject__AdvanceFullUpdate_fir_0072ae58);
    iVar5 = param_1[0x117];
    local_4._0_1_ = 1;
    uVar3 = (**(code **)(*param_1 + 0x28))(iVar5);
    FUN_004a9ad0(uVar3,iVar5);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
  }
  if (param_1[0x6c] == 0x4e) {
    FUN_00649600(s_NPCObject__AdvanceFullUpdate_wis_0072ae34);
    local_4._0_1_ = 2;
    uVar3 = (**(code **)(*param_1 + 0x28))();
    FUN_005aa090(uVar3);
    FUN_005aa0f0(param_1[0x117]);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
  }
  iVar4 = FUN_00587ce0();
  iVar5 = DAT_0075d228;
  if (iVar4 != 0xb) {
    iVar5 = FUN_00467e90();
    if (iVar5 != 0) {
      param_1[0x35] = DAT_0075d294;
      goto LAB_004a1865;
    }
    iVar4 = FUN_00587ce0();
    iVar5 = DAT_0075d270;
    if (iVar4 == 6) {
      param_1[0x35] = DAT_0075d274;
      goto LAB_004a1865;
    }
  }
  param_1[0x35] = iVar5;
LAB_004a1865:
  iVar5 = param_1[0x6c];
  if (((iVar5 == 0x38) || (iVar5 == 0x37)) || (iVar5 == 0x39)) {
    DAT_007607f8 = param_1[2];
    DAT_007607fc = param_1[3];
  }
  local_1c = (float)param_1[0x117];
  if (DAT_006e92e4 < (float)param_1[0x119]) {
    fVar2 = (float)param_1[0x119] - (float)param_1[0x117];
    param_1[0x119] = (int)fVar2;
    fVar1 = (float)param_1[0x11a];
    param_1[0x11a] = (int)(fVar1 - (float)param_1[0x117]);
    local_1c = ((fVar1 - (float)param_1[0x117]) / DAT_006edd18) * (float)param_1[0x117];
    if (local_1c < DAT_006e92e4) {
      local_1c = 0.0;
    }
    if (fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4))) {
      FUN_00580a60();
    }
  }
  FUN_005ab330(param_1[0x117]);
  if ((*(byte *)(param_1 + 0x9a) & 8) != 0) {
    FUN_005acc40(param_1[0x117]);
  }
  if (((*(byte *)(param_1 + 0x9a) & 0x10) != 0) && (_DAT_006ebfe4 < local_1c)) {
    FUN_00594be0(local_1c);
  }
  FUN_004a1ff0();
  if ((param_1[0x9a] & 0x100000U) != 0) {
    FUN_004a1a00();
  }
  if (((*(byte *)((int)param_1 + 0x7f) & 0x40) != 0) && (iVar5 = FUN_00587ce0(), iVar5 != 0x15)) {
    FUN_00649600(s_NPCObject__AdvanceFullUpdate_dro_0072ae10);
    iVar5 = *param_1;
    local_4._0_1_ = 3;
    uVar3 = (**(code **)(iVar5 + 0x28))(0x447a0000,0,_DAT_006edd1c * (float)param_1[0x117],0,0x10,0)
    ;
    (**(code **)(iVar5 + 0x78))(0,0,uVar3);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

