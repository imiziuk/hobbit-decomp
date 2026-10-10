
int __thiscall FUN_006a4b40(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_006a52c0();
  *puVar1 = 1;
  FUN_0064b7b0(param_2);
  puVar1[0x14] = param_3;
  *(undefined1 *)((int)puVar1 + 0x57) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x56) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x55) = 0xff;
  *(undefined1 *)(puVar1 + 0x15) = 0xff;
  return *(int *)(param_1 + 0x160) + -1;
}

