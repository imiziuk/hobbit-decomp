
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0056b610(int param_1,float param_2)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_0041bcc0();
  if (*(int *)(iVar1 + 0x6f8) != 0) {
    return (float10)param_2;
  }
  if (*(int *)(param_1 + 0x498) != 0) {
    return (float10)param_2 - (float10)_DAT_006e9578;
  }
  fVar2 = (float10)FUN_0056bb90();
  return (fVar2 + (float10)param_2) - (float10)_DAT_006e9578;
}

