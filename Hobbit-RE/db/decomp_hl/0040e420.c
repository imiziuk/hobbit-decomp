
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0040e420(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  float local_18;
  float local_14;
  float local_10;
  float local_4;
  
  if (*(int *)(param_1 + 8) == 0 && *(int *)(param_1 + 0xc) == 0) {
    uVar3 = FUN_0054bad0(0x2d,0,0);
    *(undefined8 *)(param_1 + 8) = uVar3;
    piVar1 = (int *)FUN_004021c0(uVar3);
    FUN_00488c30(s_SparksContinuous_0071d190);
    iVar2 = FUN_004021c0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    local_4 = *(float *)(iVar2 + 0x58) + *(float *)(iVar2 + 0x4c);
    local_18 = (*(float *)(iVar2 + 0x44) + *(float *)(iVar2 + 0x50)) * _DAT_006e936c;
    local_14 = (*(float *)(iVar2 + 0x54) + *(float *)(iVar2 + 0x48)) * _DAT_006e936c;
    local_10 = local_4 * _DAT_006e936c;
    (**(code **)(*piVar1 + 0x14))(&local_18,0);
    (**(code **)(*piVar1 + 0x110))();
    *(undefined4 *)(param_1 + 0x24) = DAT_006e9440;
  }
  return;
}

