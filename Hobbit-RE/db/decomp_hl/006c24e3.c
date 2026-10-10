
uint FUN_006c24e3(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_006c252e();
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_006c25c0(uVar1);
  return uVar1;
}

