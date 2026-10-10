
void __fastcall FUN_004b2310(int param_1)

{
  short sVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x16f) & 1) != 0) {
    iVar2 = param_1;
    FUN_0041bcc0(param_1);
    FUN_00446330(iVar2);
  }
  FUN_0054f7c0(param_1 + 0x164);
  FUN_004ac540();
  sVar1 = *(short *)(param_1 + 0x168);
  if (sVar1 != 0) {
    if ((((sVar1 != -1) && (iVar2 = *(int *)(DAT_0076f648 + sVar1 * 0x14), iVar2 != 0)) &&
        ((*(byte *)(iVar2 + 0x7f) & 0x10) != 0)) && (iVar2 != 0)) {
      FUN_0054be30(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
    }
    *(undefined2 *)(param_1 + 0x168) = 0;
  }
  return;
}

