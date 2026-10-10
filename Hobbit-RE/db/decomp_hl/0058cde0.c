
void __thiscall FUN_0058cde0(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = FUN_0058cdb0(param_2,param_3,param_4);
  for (puVar1 = *(undefined4 **)(param_1 + 0x1b808 + iVar2 * 4);
      (puVar1 != (undefined4 *)0x0 &&
      (((*(short *)((int)puVar1 + 0xe) != param_2 || (*(short *)(puVar1 + 4) != param_3)) ||
       (*(short *)((int)puVar1 + 0x12) != param_4)))); puVar1 = (undefined4 *)*puVar1) {
  }
  return;
}

