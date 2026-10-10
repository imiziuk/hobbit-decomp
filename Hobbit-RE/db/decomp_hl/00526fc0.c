
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00526fc0(int param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  
  fVar1 = *(float *)(param_1 + 0x2f0) - _DAT_006efa50;
  *(float *)(param_1 + 0x2f0) = fVar1;
  if ((*(int *)(param_1 + 0x18) == 0) || (fVar1 < DAT_006e92e4 == (NAN(fVar1) || NAN(DAT_006e92e4)))
     ) {
    *(undefined1 *)(param_1 + 0x2dd) = 0xff;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x2e0) + _DAT_006efa50;
    iVar3 = *(int *)(param_1 + 0x2f4) * 6;
    *(undefined *)(param_1 + 0x2dd) = (&DAT_00735b18)[iVar3 + *(char *)(param_1 + 0x2dc)];
    *(float *)(param_1 + 0x2e0) = fVar1;
    if (*(float *)(param_1 + 0x2e8) < fVar1) {
      *(undefined4 *)(param_1 + 0x2e0) = 0;
      *(undefined *)(param_1 + 0x2dd) = (&DAT_00735b18)[iVar3 + *(char *)(param_1 + 0x2dc)];
      cVar2 = *(char *)(param_1 + 0x2dc) + '\x01';
      *(char *)(param_1 + 0x2dc) = cVar2;
      if ('\x05' < cVar2) {
        *(undefined1 *)(param_1 + 0x2dc) = 0;
      }
      if ((uint)(byte)(&DAT_00735b18)[iVar3 + *(char *)(param_1 + 0x2dc)] ==
          (int)*(char *)(param_1 + 0x2e4)) {
        FUN_00659600(s_Chest_GreenLight_00735d08,1);
      }
      if ((uint)(byte)(&DAT_00735b18)
                      [*(int *)(param_1 + 0x2f4) * 6 + (int)*(char *)(param_1 + 0x2dc)] ==
          (int)*(char *)(param_1 + 0x2e5)) {
        FUN_00659600(s_Chest_RedLight_00735cf8,1);
      }
      FUN_00659600(s__LockGadgetDoor_00735ce7 + 1,1);
      return;
    }
  }
  return;
}

