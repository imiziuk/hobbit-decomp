
void __thiscall FUN_005c2090(int param_1,int param_2,byte param_3)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + param_2 * 4);
  bVar1 = *(byte *)(iVar2 + 0x28);
  *(byte *)(iVar2 + 0x28) = (bVar1 ^ param_3) & 1 ^ bVar1;
  return;
}

