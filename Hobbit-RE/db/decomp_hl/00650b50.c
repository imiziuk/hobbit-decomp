
undefined4 __thiscall FUN_00650b50(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(param_1,param_3);
  cVar1 = *(char *)(param_1 + 0x1d);
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    uVar2 = FUN_00650a90(param_3);
  }
  FUN_00650400(param_2,(*(int *)(&DAT_006f6cf4 + cVar1 * 0x7c) * (int)uVar2 >> 3) +
                       *(int *)((int)((ulonglong)uVar2 >> 0x20) + 4));
  return param_2;
}

