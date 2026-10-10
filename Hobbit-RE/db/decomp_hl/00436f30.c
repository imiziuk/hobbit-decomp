
void __fastcall FUN_00436f30(int param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint *puVar4;
  int iVar5;
  
  do {
    bVar3 = false;
    iVar5 = 0x31;
    puVar4 = (uint *)(param_1 + 0x108);
    do {
      uVar1 = *puVar4;
      uVar2 = puVar4[-1];
      if ((((int)(uVar1 & 0xefffffff) < (int)(uVar2 & 0xefffffff)) && (uVar1 != 0xffffffff)) &&
         (uVar2 != 0xffffffff)) {
        bVar3 = true;
        puVar4[-1] = uVar1;
        *puVar4 = uVar2;
      }
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  } while (bVar3);
  return;
}

