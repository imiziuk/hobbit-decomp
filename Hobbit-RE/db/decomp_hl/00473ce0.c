
void __thiscall FUN_00473ce0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xe8)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0xec) + iVar3 * 4);
      iVar2 = piVar1[0xc];
      if ((((iVar2 != 0) && (*piVar1 == 2)) && ((*(ushort *)(iVar2 + 0x10) & 2) != 0)) &&
         ((((*(ushort *)(iVar2 + 0x10) & 4) == 0 && (*param_2 == *(int *)(iVar2 + 0x20))) &&
          (param_2[1] == *(int *)(iVar2 + 0x24))))) {
        FUN_0064e7d0(s_CINEMA__Terminating_previous_ani_00727b64);
        *(byte *)(iVar2 + 0x10) = *(byte *)(iVar2 + 0x10) | 4;
        *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar2 + 8);
        FUN_0047dcc0();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xe8));
  }
  return;
}

