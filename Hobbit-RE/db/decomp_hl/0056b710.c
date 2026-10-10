
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0056b710(int param_1)

{
  int iVar1;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(param_1 + 0x480) == 1) {
    iVar1 = FUN_0041bcc0();
    FUN_0056c890(param_1 + 0x688,&local_18,&local_2c,*(undefined4 *)(iVar1 + 0x6f8));
    local_30 = *(float *)(*(int *)(param_1 + 0x730) + 0x14);
    *(float *)(param_1 + 0x734) = local_30;
    local_28 = local_2c;
    FUN_0064c8e0(local_30,&local_20,&local_30);
    FUN_0064c8e0(local_28,&local_24,&local_1c);
    local_24 = local_24 * local_30;
    local_4 = local_1c * local_30;
    local_30 = (float)_DAT_0073f874;
    *(float *)(param_1 + 0x4a8) = local_18;
    *(float *)(param_1 + 0x4ac) = local_14;
    *(float *)(param_1 + 0x4b0) = local_10;
    local_c = local_24 * local_30;
    local_8 = -local_20 * local_30;
    FUN_00570010(local_18 - local_c,local_14 - local_8,local_10 - local_4 * local_30);
  }
  return;
}

