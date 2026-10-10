
undefined4 __thiscall FUN_00624220(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4c) + 1;
  *(int *)(param_1 + 0x4c) = iVar1;
  if (iVar1 < *(int *)(&DAT_0074a0c4 + *(int *)(param_1 + 0x48) * 8)) {
    iVar1 = FUN_00647e40(*(undefined4 *)
                          ((&PTR_PTR_s_stand_attack_0074a0c0)[*(int *)(param_1 + 0x48) * 2] +
                          iVar1 * 4),s_stand_attack_0074a010);
    *param_2 = 10 - (uint)(iVar1 != 0);
    return 1;
  }
  FUN_00624270();
  return 0;
}

