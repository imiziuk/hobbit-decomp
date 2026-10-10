
void FUN_004b3180(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 in_stack_0000001c;
  
  uVar3 = FUN_0054bad0(0x22,0,0);
  iVar2 = FUN_004021c0(uVar3);
  FUN_004af8d0(&stack0x00000004,&stack0x00000010,in_stack_0000001c,1);
  *(ushort *)(iVar2 + 0x16e) = *(ushort *)(iVar2 + 0x16e) & 0xffbf | 0x800;
  *(byte *)(iVar2 + 0x7f) = *(byte *)(iVar2 + 0x7f) & 0xfe;
  uVar1 = __ftol();
  *(undefined2 *)(iVar2 + 0x16a) = uVar1;
  return;
}

