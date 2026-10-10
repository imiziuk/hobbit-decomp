
/* WARNING: Removing unreachable block (ram,0x0052e0ab) */
/* WARNING: Removing unreachable block (ram,0x0052e0c3) */
/* WARNING: Removing unreachable block (ram,0x0052e0e1) */
/* WARNING: Removing unreachable block (ram,0x0052e0e3) */
/* WARNING: Removing unreachable block (ram,0x0052e101) */
/* WARNING: Removing unreachable block (ram,0x0052e0bb) */

void __fastcall FUN_0052e090(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0xc);
  for (iVar3 = iVar1; iVar3 != iVar2; iVar3 = iVar3 + 0xa8) {
    FUN_0050c8f0();
  }
  *(int *)(param_1 + 0x10) = iVar1;
  return;
}

