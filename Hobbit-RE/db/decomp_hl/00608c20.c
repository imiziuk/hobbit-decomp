
void __thiscall FUN_00608c20(int param_1,uint *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  puVar1 = (uint *)(param_1 + 0x44);
  uVar3 = *puVar1 & 0x7fffffff;
  *puVar1 = uVar3;
  *puVar1 = (*param_2 ^ uVar3) & 0x7fffffff ^ uVar3;
  FUN_005492b0(puVar1,0);
  if ((int)*param_2 < 0) {
    FUN_00549470(puVar1);
  }
  uVar2 = FUN_00549620(param_2);
  FUN_00549670(puVar1,uVar2);
  return;
}

