
void __fastcall FUN_004742d0(undefined4 *param_1)

{
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xf8;
  *param_1 = &PTR_FUN_006ed02c;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}

