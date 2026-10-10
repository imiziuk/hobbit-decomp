
void __fastcall FUN_00680bf0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x14c) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x168)) {
      piVar1 = (int *)(*(int *)(param_1 + 0x174) + 0x20);
      do {
        if (*piVar1 != 0) {
          FUN_0064ff40(*piVar1,s_C__projects_meridian_xCore_entro_00753b1c,0x1ef);
        }
        *piVar1 = 0;
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 0x4a;
      } while (iVar2 < *(int *)(param_1 + 0x168));
    }
  }
  return;
}

