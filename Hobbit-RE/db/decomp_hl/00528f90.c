
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00528f90(int param_1)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  
  fVar3 = *(float *)(param_1 + 0x8e4) - _DAT_006efa50;
  *(float *)(param_1 + 0x8e4) = fVar3;
  if ((*(int *)(param_1 + 0x18) == 0) || (fVar3 < DAT_006e92e4 == (NAN(fVar3) || NAN(DAT_006e92e4)))
     ) {
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  }
  else {
    fVar3 = *(float *)(param_1 + 0x8e0) + _DAT_006efa50;
    iVar2 = *(int *)(param_1 + 0x30);
    iVar4 = *(int *)(param_1 + 0x24) * 6;
    bVar1 = (&DAT_00735b18)[iVar4 + iVar2];
    *(float *)(param_1 + 0x8e0) = fVar3;
    *(uint *)(param_1 + 0x34) = (uint)bVar1;
    if (*(float *)(param_1 + 0x8d4) < fVar3) {
      *(undefined4 *)(param_1 + 0x8e0) = 0;
      *(uint *)(param_1 + 0x34) = (uint)(byte)(&DAT_00735b18)[iVar4 + iVar2];
      *(int *)(param_1 + 0x30) = iVar2 + 1;
      if (5 < iVar2 + 1) {
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
      if ((uint)(byte)(&DAT_00735b18)[iVar4 + *(int *)(param_1 + 0x30)] == *(uint *)(param_1 + 0x28)
         ) {
        FUN_00659600(s_Chest_GreenLight_00735d08,1);
      }
      if ((uint)(byte)(&DAT_00735b18)[*(int *)(param_1 + 0x24) * 6 + *(int *)(param_1 + 0x30)] ==
          *(uint *)(param_1 + 0x2c)) {
        FUN_00659600(s_Chest_RedLight_00735cf8,1);
      }
      FUN_00659600(s_LockGadgetPiston_00735d48,1);
      return;
    }
  }
  return;
}

