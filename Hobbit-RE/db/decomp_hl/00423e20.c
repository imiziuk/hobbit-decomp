
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00423e20(int param_1)

{
  undefined1 *puVar1;
  float *pfVar2;
  int iVar3;
  
  puVar1 = (undefined1 *)(param_1 + 0x4ea8);
  FUN_00589cc0(puVar1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  pfVar2 = (float *)(param_1 + 0x4eb8);
  FUN_00589cc0(pfVar2,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  iVar3 = FUN_00423c80();
  if (iVar3 == 0) {
    *puVar1 = 0xff;
    FUN_00425dd0(1);
    *pfVar2 = 0.0;
  }
  else {
    *pfVar2 = 1.0;
    *puVar1 = 0x80;
  }
  FUN_004f3140(*pfVar2);
  if (_DAT_006e936c <= *pfVar2) {
    FUN_00587cf0(1);
    return;
  }
  FUN_00587cf0(0);
  return;
}

