
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004df1c0(int param_1,float *param_2)

{
  int iVar1;
  ushort uVar2;
  undefined6 uVar3;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if ((*(uint *)(param_1 + 0x120) & 8) != 0) {
    uVar3 = FUN_004de670();
    uVar2 = (ushort)((uint6)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      uVar3 = FUN_004de640();
      uVar2 = (ushort)((uint6)uVar3 >> 0x20);
      if ((int)uVar3 != 0) {
        return 0;
      }
    }
    if ((char)uVar2 < '\0') {
      if ((uVar2 & 0x200) == 0) {
        return 1;
      }
      FUN_0064c8e0(*(undefined4 *)(param_1 + 0x70),&local_14,&local_10);
      local_c = local_10 * DAT_006e92e4 - local_14 * DAT_006e92e4;
      local_8 = local_14 * DAT_006e92e4 + local_10 * DAT_006e92e4;
      FUN_0064c8e0(*(undefined4 *)(param_1 + 0x68),&local_14,&local_10);
      local_4 = local_10 * _DAT_006e9364 + local_8 * local_14;
      local_8 = local_8 * local_10 - local_14 * _DAT_006e9364;
      FUN_0064c8e0(*(undefined4 *)(param_1 + 0x6c),&local_14,&local_10);
      if (DAT_006e92e4 <
          (*param_2 - *(float *)(param_1 + 0x14)) * (local_10 * local_c + local_4 * local_14) +
          local_8 * (param_2[1] - *(float *)(param_1 + 0x18)) +
          (local_4 * local_10 - local_c * local_14) * (param_2[2] - *(float *)(param_1 + 0x1c))) {
        return 1;
      }
    }
    else if ((uVar2 & 0x40) != 0) {
      if (((uVar2 & 0x1000) != 0) && (iVar1 = FUN_004dd210(), iVar1 != 0)) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

