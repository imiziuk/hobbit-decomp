
void __thiscall FUN_005925e0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  
  if (param_2 != 0) {
    if ((((*(int *)(param_1 + 0x158) != 0) &&
         ((*(uint *)(*(int *)(param_1 + 0x158) + 0x78) & 0x200) == 0x200)) &&
        (iVar2 = FUN_00592190(), *(int *)(iVar2 + 0xe0) < 1)) &&
       (fVar1 = (float)(*(int *)(iVar2 + 0xd8) + -2),
       fVar1 < *(float *)(iVar2 + 0xdc) == (fVar1 == *(float *)(iVar2 + 0xdc)))) {
      return;
    }
    if ((*(int *)(param_1 + 0x158) == 0) || (*(int *)(param_1 + 0x158) != param_2)) {
      FUN_00592660(9);
      *(int *)(param_1 + 0x48) = param_2;
      *(undefined4 *)(param_1 + 0x2a0) = 0;
    }
  }
  return;
}

