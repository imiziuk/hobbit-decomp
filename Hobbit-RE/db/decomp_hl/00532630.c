
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00532630(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  
  if (*(int *)(param_1 + 0xbc) == 0) {
    return (float10)DAT_006e92e4;
  }
  iVar4 = FUN_00532780(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x60));
  fVar1 = *(float *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x164 + param_1);
  iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc0) +
                                             *(int *)(param_1 + 0x2c) * 4) + 0x68) + iVar4 * 4) +
                  0x34);
  iVar5 = 0;
  fVar2 = fVar1;
  if (0 < iVar3) {
    while( true ) {
      fVar2 = *(float *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc0) +
                                                            *(int *)(param_1 + 0x2c) * 4) + 0x68) +
                                          iVar4 * 4) + 0x38) + iVar5 * 4);
      fVar6 = (float10)FUN_0065a5b0(*(undefined4 *)
                                     (*(int *)(param_1 + 0x1ac) * 0x30 + 0x14c + param_1));
      if (fVar6 + (float10)_DAT_006e99b0 < (float10)fVar2 !=
          (NAN(fVar6 + (float10)_DAT_006e99b0) || NAN((float10)fVar2))) break;
      iVar5 = iVar5 + 1;
      if (iVar3 <= iVar5) {
        return (float10)fVar1;
      }
    }
  }
  return (float10)fVar2;
}

