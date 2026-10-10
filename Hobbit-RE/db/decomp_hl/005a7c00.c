
void __fastcall FUN_005a7c00(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 local_30 [48];
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x8840)) {
    piVar4 = (int *)(param_1 + 0x1b0);
    do {
      if (*piVar4 == 0) break;
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 0x6d;
    } while (iVar2 < *(int *)(param_1 + 0x8840));
  }
  *(int *)(param_1 + 0x8840) = iVar2;
  uVar3 = FUN_0054c5c0(0x2e,s_C__projects_meridian_Support_Occ_007447bc,0x78);
  sVar1 = FUN_0054c7c0();
  while (-1 < sVar1) {
    iVar2 = FUN_004e4e40();
    if (iVar2 != 0) {
      FUN_004e4e50(local_30);
      FUN_005a7e50(local_30,4,0);
    }
    sVar1 = FUN_0054c7c0();
  }
  FUN_0054c880(uVar3);
  return;
}

