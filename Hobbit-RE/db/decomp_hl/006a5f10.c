
void __fastcall FUN_006a5f10(int param_1)

{
  FUN_006a3240(0x200,1);
  if ((((*(int *)(param_1 + 0xf4) <= *(int *)(param_1 + 0x104)) &&
       (*(int *)(param_1 + 0x104) <= *(int *)(param_1 + 0xfc))) &&
      (*(int *)(param_1 + 0xf8) <= *(int *)(param_1 + 0x108))) &&
     (*(int *)(param_1 + 0x108) <= *(int *)(param_1 + 0x100))) {
    *(undefined4 *)(param_1 + 0xf0) = 1;
  }
  return;
}

