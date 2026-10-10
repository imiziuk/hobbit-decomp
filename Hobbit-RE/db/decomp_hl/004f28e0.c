
void __fastcall FUN_004f28e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x194;
  iVar2 = 0x17;
  do {
    FUN_00674e10(iVar3);
    FUN_00650380();
    iVar3 = iVar3 + 0x20;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00674e10(param_1 + 0x13a4);
  FUN_00674e10(param_1 + 0x13c4);
  iVar3 = param_1 + 0x14;
  iVar2 = 10;
  do {
    if (*(int *)(iVar3 + 0x10) != 0) {
      FUN_00674e10(iVar3);
      FUN_00650380();
    }
    iVar3 = iVar3 + 0x20;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(int *)(param_1 + 0x13b4) != 0) {
    FUN_00674e10(param_1 + 0x13a4);
    FUN_00650380();
  }
  if (*(int *)(param_1 + 0x13d4) != 0) {
    FUN_00674e10(param_1 + 0x13c4);
    FUN_00650380();
  }
  FUN_006b6f20(s_HUD_ImbuedStone_0072f870);
  FUN_006b6f20(s_HUD_FireStone_0072f84c);
  FUN_006b6f20(s_HUD_ExplodeStone_0072f820);
  FUN_006b6f20(s_HUD_silverPenny_0072f7fc);
  puVar1 = (undefined4 *)(param_1 + 0x138c);
  iVar3 = 5;
  do {
    *puVar1 = 0x7fffffff;
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(param_1 + 0x554) = 0;
  return;
}

