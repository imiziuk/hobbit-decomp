
void __fastcall FUN_004ac510(int *param_1)

{
  if ((*(byte *)((int)param_1 + 0x7f) & 0x10) == 0) {
    *(byte *)((int)param_1 + 0x7f) = *(byte *)((int)param_1 + 0x7f) & 0xef ^ 0x10;
    (**(code **)(*param_1 + 0x44))();
    FUN_0054c080((int)(short)param_1[0x1e]);
  }
  return;
}

