
uint * __thiscall FUN_00469af0(uint *param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *param_1 & 0x7fffffff;
  *param_1 = uVar2;
  *param_1 = (*param_2 ^ uVar2) & 0x7fffffff ^ uVar2;
  FUN_005492b0(param_1,0);
  if ((int)*param_2 < 0) {
    FUN_00549470(param_1);
  }
  uVar1 = FUN_00549620(param_2);
  FUN_00549670(param_1,uVar1);
  return param_1;
}

