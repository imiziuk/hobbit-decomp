
undefined1 __thiscall FUN_00644c10(int param_1,int param_2)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x574) == 0) {
    return *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 4));
  }
  if ((*(int *)(param_1 + 0x578) <= param_2) && (param_2 <= *(int *)(param_1 + 0x57c))) {
    return *(undefined1 *)((*(int *)(param_1 + 0x580) - *(int *)(param_1 + 0x578)) + param_2);
  }
  uVar1 = FUN_006436b0();
  return uVar1;
}

