
bool __thiscall
FUN_006a9e20(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 0x58) = param_3;
  uVar1 = FUN_006aaa50(param_2);
  uVar1 = __ftol(0,0,700,0,0,0,param_5,0,0,4,0,uVar1);
  uVar1 = (*(code *)PTR_FUN_0075b2b8)((param_3 * -4) / 5,uVar1);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  uVar1 = FUN_00660b30(param_1,&LAB_006aa600,&LAB_006aa610,0);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  FUN_006aa640();
  return *(int *)(param_1 + 0x54) != 0;
}

