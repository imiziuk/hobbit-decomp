
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0042fb20(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  FUN_0042c8b0((float *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x474),1);
  if (*(int *)(param_1 + 0x804) != 0) {
    FUN_0064c8e0(*(undefined4 *)(param_1 + 0x474),&local_34,&local_38);
    iVar4 = *(int *)(param_1 + 0x450);
    local_30 = *(float *)(iVar4 + 0x10c);
    local_2c = *(float *)(iVar4 + 0x110);
    local_18 = local_38 * DAT_006e92e4 + local_34;
    local_28 = *(float *)(iVar4 + 0x114);
    local_10 = local_38 - local_34 * DAT_006e92e4;
    FUN_0064c8e0(*(undefined4 *)(param_1 + 0x474),&local_38,&local_34);
    fVar1 = local_28 * local_38;
    local_28 = local_28 * local_34 - local_30 * local_38;
    local_24 = local_34 * local_30 + fVar1 + *(float *)(param_1 + 0x14);
    local_20 = local_2c + *(float *)(param_1 + 0x18);
    local_1c = local_28 + *(float *)(param_1 + 0x1c);
    iVar4 = FUN_0042d800(&local_24);
    if ((iVar4 != 0) &&
       (fVar1 = *(float *)(param_1 + 0x844) * DAT_006e92e4 +
                local_18 * *(float *)(param_1 + 0x840) + local_10 * *(float *)(param_1 + 0x848),
       fVar1 < _DAT_006e95a8 != (NAN(fVar1) || NAN(_DAT_006e95a8)))) {
      iVar4 = *(int *)(param_1 + 0x450);
      local_30 = -*(float *)(iVar4 + 0x10c);
      local_2c = -*(float *)(iVar4 + 0x110);
      local_28 = -*(float *)(iVar4 + 0x114);
      fVar5 = (float10)FUN_0064ca10(*(undefined4 *)(param_1 + 0x840),
                                    *(undefined4 *)(param_1 + 0x848));
      local_34 = (float)(fVar5 + (float10)_DAT_006e9368);
      FUN_0064c8e0(local_34,&local_38,&local_34);
      fVar1 = local_34 * local_30 + local_28 * local_38;
      local_28 = local_28 * local_34 - local_30 * local_38;
      fVar2 = fVar1 + *(float *)(param_1 + 0x830);
      local_14 = local_2c + *(float *)(param_1 + 0x834);
      fVar3 = local_28 + *(float *)(param_1 + 0x838);
      local_38 = fVar2;
      local_34 = fVar3;
      local_30 = fVar1;
      FUN_00401f00(fVar2,local_14 + _DAT_006e9984,fVar3);
      FUN_00401f00(fVar2,local_14 - _DAT_006e998c,fVar3);
      FUN_00579080(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),local_c,&local_24,
                   0x41c80000,0x41800000,0x1800);
      iVar4 = FUN_00577e70();
      if (iVar4 == 0) {
        return 1;
      }
    }
  }
  return 0;
}

