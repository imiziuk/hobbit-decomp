
undefined8 __fastcall FUN_005af6d0(int param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 local_c [12];
  
  iVar1 = FUN_004021c0(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)FUN_0044f0c0(&stack0x00000004,local_c);
    return *puVar2;
  }
  return 0;
}

