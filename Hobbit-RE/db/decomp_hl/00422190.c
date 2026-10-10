
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00422190(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  float10 fVar5;
  float local_4c;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  int iStack_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 auStack_20 [8];
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = 0x7f7fffff;
  local_14 = 0x7f7fffff;
  local_10 = 0x7f7fffff;
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  local_30 = 0x7f7fffff;
  local_2c = 0x7f7fffff;
  local_28 = 0x7f7fffff;
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  piVar3 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x4da8),*(undefined4 *)(param_1 + 0x4dac));
  fVar5 = (float10)FUN_00494640();
  if (fVar5 < (float10)_DAT_006e999c == (NAN(fVar5) || NAN((float10)_DAT_006e999c))) {
    FUN_00494850(0xffffffff);
    FUN_00494620(0x40200000);
    local_18 = piVar3[0x11];
    local_14 = piVar3[0x12];
    local_10 = piVar3[0x13];
    FUN_004357e0(piVar3 + 0x14);
    local_48 = *(undefined4 *)(param_1 + 0x14);
    local_44 = *(float *)(param_1 + 0x18) + _DAT_006e99c4;
    local_40 = *(undefined4 *)(param_1 + 0x1c);
    local_4c = (float)fVar5 - _DAT_00720098 * *(float *)(param_1 + 0x920);
    if (local_4c < DAT_006e92e4) {
      local_4c = 0.0;
    }
    local_34 = local_40;
    FUN_004947c0(local_4c);
    bVar1 = (NAN(local_4c) || NAN(DAT_006e92e4)) == (local_4c == DAT_006e92e4);
    if (!bVar1) {
      FUN_004948f0();
    }
    FUN_004948c0(bVar1);
    (**(code **)(*piVar3 + 0x14))(&local_48,0);
    iStack_38 = piVar3[0x11];
    local_34 = piVar3[0x12];
    local_30 = piVar3[0x13];
    local_2c = piVar3[0x14];
    local_28 = piVar3[0x15];
    local_24 = piVar3[0x16];
    iVar2 = piVar3[0x1e];
    uVar4 = FUN_004948a0();
    FUN_00583630(auStack_20,&iStack_38,(short)iVar2,uVar4);
  }
  return;
}

