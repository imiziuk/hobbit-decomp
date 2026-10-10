
void __thiscall FUN_00411d60(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  FUN_0041a080(param_2);
  param_2 = 0;
  piVar3 = (int *)(param_1 + 0x264);
  iVar2 = 3;
  do {
    FUN_0063cd80(&param_2,2);
    *piVar3 = (int)(short)param_2;
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uVar1 = FUN_0063d990();
  *(undefined4 *)(param_1 + 0x170) = uVar1;
  return;
}

