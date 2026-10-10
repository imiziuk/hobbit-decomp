
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0040e1f0(int param_1,float param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  float local_c;
  float local_8;
  float local_4;
  
  if (DAT_006e92e4 < *(float *)(param_1 + 0x24)) {
    param_2 = *(float *)(param_1 + 0x24) - param_2;
    *(float *)(param_1 + 0x24) = param_2;
    if (param_2 < DAT_006e92e4 != (param_2 == DAT_006e92e4)) {
      piVar2 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x114))();
      }
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      return;
    }
    iVar3 = FUN_004021c0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    FUN_00401f00((*(float *)(iVar3 + 0x44) + *(float *)(iVar3 + 0x50)) * _DAT_006e936c,
                 (*(float *)(iVar3 + 0x54) + *(float *)(iVar3 + 0x48)) * _DAT_006e936c,
                 (*(float *)(iVar3 + 0x58) + *(float *)(iVar3 + 0x4c)) * _DAT_006e936c);
    fVar1 = DAT_006e92e8 - *(float *)(param_1 + 0x24) / DAT_006e9440;
    local_8 = _DAT_006e9448 * fVar1 + local_8;
    fVar1 = fVar1 * _DAT_006e9444;
    fVar4 = (float10)FUN_0064c800(fVar1);
    local_c = (float)(fVar4 + (float10)local_c);
    fVar4 = (float10)FUN_0064c8d0(fVar1);
    local_4 = (float)(fVar4 + (float10)local_4);
    piVar2 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x14))(&local_c,0);
    }
  }
  return;
}

