
void __fastcall FUN_00664500(int param_1)

{
  if ((*(int *)(param_1 + 0x364) != 0) &&
     (*(int *)(param_1 + 0x368) - *(int *)(param_1 + 0x364) >> 2 != 0)) {
    if (*(int *)(param_1 + 0x344) == 0) {
      FUN_006645b0();
    }
    FUN_00664810();
    return;
  }
  return;
}

