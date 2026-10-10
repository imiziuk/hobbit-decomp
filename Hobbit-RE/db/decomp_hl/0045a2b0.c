
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0045a2b0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float local_60;
  float local_58;
  undefined1 local_48 [12];
  float local_3c [2];
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  float local_1c;
  float local_18;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d0420;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600();
  local_4 = 0;
  if (*(int *)(param_1 + 0x160) != 0) {
    fVar1 = *(float *)(param_1 + 0x18c) - param_2;
    *(float *)(param_1 + 0x18c) = fVar1;
    if (fVar1 < DAT_006e92e4 == (fVar1 == DAT_006e92e4)) {
      FUN_004c0ce0();
      iVar2 = FUN_0041bcc0();
      if ((((*(float *)(param_1 + 0x44) <= *(float *)(iVar2 + 0x50)) &&
           (*(float *)(param_1 + 0x50) < *(float *)(iVar2 + 0x44) ==
            (NAN(*(float *)(param_1 + 0x50)) || NAN(*(float *)(iVar2 + 0x44))))) &&
          (*(float *)(param_1 + 0x4c) <= *(float *)(iVar2 + 0x58))) &&
         (((*(float *)(param_1 + 0x58) < *(float *)(iVar2 + 0x4c) ==
            (NAN(*(float *)(param_1 + 0x58)) || NAN(*(float *)(iVar2 + 0x4c))) &&
           (*(float *)(param_1 + 0x48) <= *(float *)(iVar2 + 0x54))) &&
          (*(float *)(param_1 + 0x54) < *(float *)(iVar2 + 0x48) ==
           (NAN(*(float *)(param_1 + 0x54)) || NAN(*(float *)(iVar2 + 0x48))))))) {
        FUN_00401f00();
        FUN_00402160();
        FUN_0054d020(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),local_48,
                     *(undefined4 *)(param_1 + 0x194),*(undefined4 *)(param_1 + 0x198),
                     *(undefined4 *)(param_1 + 0x198),0x3f800000,0x20);
      }
      FUN_00401f00();
      fVar3 = (float10)FUN_00404890();
      fVar1 = (float)(fVar3 * (float10)_DAT_006e936c * (float10)_DAT_006e95d8);
      FUN_00401f00();
      FUN_00402160();
      local_3c[0] = local_60 - fVar1;
      local_34 = local_58 - fVar1;
      param_2 = NAN;
      local_28 = local_58 + fVar1;
      local_24 = local_60 + fVar1;
      local_4._0_1_ = 1;
      local_30 = local_3c[0];
      local_1c = local_28;
      local_18 = local_24;
      local_10 = local_34;
      FUN_005496c0();
      FUN_00549430();
      FUN_00413480(200,200,200);
      FUN_00469af0(&param_2);
      FUN_0054fc60(*(undefined4 *)(param_1 + 0x19c),local_3c,0x43c80000);
      FUN_0054f9c0();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00549580();
      FUN_00549350();
      param_2 = NAN;
    }
    else {
      *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x184);
      iVar2 = *(int *)(param_1 + 400) + 1;
      *(int *)(param_1 + 400) = iVar2;
      if (*(int *)(param_1 + 0x170) <= iVar2) {
        if (*(int *)(param_1 + 0x164) == 0) {
          *(undefined4 *)(param_1 + 0x160) = 0;
          *(undefined4 *)(param_1 + 400) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x18c) = 0;
          goto LAB_0045a606;
        }
        *(undefined4 *)(param_1 + 400) = 0;
      }
      if (*(int *)(param_1 + 400) < *(int *)(param_1 + 0x170)) {
        FUN_004c6f40();
      }
    }
  }
LAB_0045a606:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

