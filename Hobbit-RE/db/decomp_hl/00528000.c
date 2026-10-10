
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00528000(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    fVar1 = *(float *)(param_1 + 0x558) - _DAT_006efa50;
    *(float *)(param_1 + 0x558) = fVar1;
    if (fVar1 < DAT_006e92e4 == (NAN(fVar1) || NAN(DAT_006e92e4))) {
      *(undefined4 *)(param_1 + 0xbc) = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x554) + *(int *)(param_1 + 0x54c);
      *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0x54c);
      *(int *)(param_1 + 0x554) = iVar2;
      if (0x168 < iVar2) {
        do {
          iVar2 = iVar2 + -0x168;
        } while (0x168 < iVar2);
        *(int *)(param_1 + 0x554) = iVar2;
        return;
      }
    }
  }
  return;
}

