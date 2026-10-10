
uint __fastcall FUN_00645280(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 1;
  if (0 < (int)param_1[0xd]) {
    do {
      uVar1 = FUN_006457f0();
      uVar2 = uVar2 & uVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[0xd]);
  }
  *param_1 = uVar2;
  return uVar2;
}

