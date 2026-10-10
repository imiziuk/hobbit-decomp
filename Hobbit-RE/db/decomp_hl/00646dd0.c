
void __fastcall FUN_00646dd0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x7c);
  puVar2 = (undefined4 *)(iVar3 + -4);
  *(undefined4 **)(param_1 + 0x7c) = puVar2;
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)(iVar3 + -8);
  *(undefined4 **)(param_1 + 0x7c) = puVar2;
  iVar3 = FUN_00647e40(uVar1,*puVar2);
  **(uint **)(param_1 + 0x7c) = (uint)(iVar3 != 0);
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 4;
  return;
}

