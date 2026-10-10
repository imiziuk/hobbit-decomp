
void FUN_00545070(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5)

{
  FUN_00544ef0(param_1,*param_5,3,param_4,0x43000000);
  FUN_00544ef0(param_1,*param_5 + 4,3,param_4,0x43000000);
  FUN_00544ef0(param_1,*param_5 + 8,3,param_4,0x43000000);
  *param_5 = *param_5 + param_4 * 0xc;
  return;
}

