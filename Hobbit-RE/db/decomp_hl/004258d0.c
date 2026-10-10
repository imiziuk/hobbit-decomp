
uint * __thiscall FUN_004258d0(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_2 & 0x7fffffff;
  *param_2 = uVar1;
  *param_2 = (*param_1 ^ uVar1) & 0x7fffffff ^ uVar1;
  FUN_005492b0(param_2,0);
  if ((int)*param_1 < 0) {
    FUN_00549470(param_2);
  }
  uVar2 = FUN_00549620(param_1);
  FUN_00549670(param_2,uVar2);
  return param_2;
}

