
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0068af20(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort *local_10;
  uint local_c;
  int local_8;
  
  if ((*(int *)(param_1 + 0x1084) != 0) && (*(int *)(param_1 + 0x1088) != 0)) {
    local_c = *(uint *)(param_1 + 0x1068);
    local_10 = (ushort *)
               (*(int *)(param_1 + 0x1078) * *(int *)(param_1 + 0x104c) +
                *(int *)(param_1 + 0x106c) * *(int *)(param_1 + 0x1048) + local_c * 2 +
               *(int *)(param_1 + 0x18));
    pfVar1 = *(float **)(param_1 + 0x1064);
    if (local_c < *(uint *)(param_1 + 0x1070)) {
      do {
        iVar3 = (int)ROUND(pfVar1[2] * _DAT_006f9f24 +
                           pfVar1[1] * _DAT_006f9f20 + *pfVar1 * _DAT_006f9f28 + _DAT_006e936c) +
                0x10;
        iVar4 = (int)ROUND(pfVar1[5] * _DAT_006f9f20 +
                           pfVar1[6] * _DAT_006f9f24 + pfVar1[4] * _DAT_006f9f28 + _DAT_006e936c) +
                0x10;
        iVar2 = (int)ROUND(((pfVar1[2] * _DAT_006f9f1c - pfVar1[1] * _DAT_006f9f18) -
                           *pfVar1 * _DAT_006f9f14) + _DAT_006e936c) + 0x80;
        local_8 = (int)ROUND((*pfVar1 * _DAT_006f9f1c -
                             (pfVar1[2] * _DAT_006f9f0c + pfVar1[1] * _DAT_006f9f10)) +
                             _DAT_006e936c) + 0x80;
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0xff < iVar3) {
          iVar3 = 0xff;
        }
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        else if (0xff < iVar4) {
          iVar4 = 0xff;
        }
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0xff < iVar2) {
          iVar2 = 0xff;
        }
        if (local_8 < 0) {
          local_8 = 0;
        }
        else if (0xff < local_8) {
          local_8 = 0xff;
        }
        local_c = local_c + 2;
        pfVar1 = pfVar1 + 8;
        *local_10 = (ushort)(iVar3 << ((byte)*(undefined4 *)(param_1 + 0x108c) & 0x1f)) |
                    (ushort)(iVar2 << ((byte)*(undefined4 *)(param_1 + 0x1090) & 0x1f));
        local_10[1] = (ushort)(iVar4 << ((byte)*(undefined4 *)(param_1 + 0x108c) & 0x1f)) |
                      (ushort)(local_8 << ((byte)*(undefined4 *)(param_1 + 0x1090) & 0x1f));
        local_10 = local_10 + 2;
      } while (local_c < *(uint *)(param_1 + 0x1070));
    }
    *(undefined4 *)(param_1 + 0x1084) = 0;
  }
  return 0;
}

