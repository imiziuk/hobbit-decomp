
void __thiscall FUN_004b0f80(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  ushort uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4048;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0064afa0();
  local_4 = 0;
  uVar3 = (byte)((char)param_2 * '\b' ^ (byte)*(ushort *)(param_1 + 0x16e)) & 8 ^
          *(ushort *)(param_1 + 0x16e);
  *(ushort *)(param_1 + 0x16e) = (byte)((char)param_2 * '\x04' ^ (byte)uVar3) & 4 ^ uVar3;
  if (param_2 != 0) {
    sVar1 = *(short *)(param_1 + 0x168);
    *(undefined2 *)(param_1 + 0x170) = *(undefined2 *)(param_1 + 0x174);
    if (sVar1 != 0) {
      if ((((sVar1 != -1) && (iVar2 = *(int *)(DAT_0076f648 + sVar1 * 0x14), iVar2 != 0)) &&
          ((*(byte *)(iVar2 + 0x7f) & 0x10) != 0)) && (iVar2 != 0)) {
        FUN_0054be30(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
      }
      *(undefined2 *)(param_1 + 0x168) = 0;
    }
  }
  FUN_004b3730();
  local_4 = 0xffffffff;
  FUN_0064b190();
  ExceptionList = local_c;
  return;
}

