
void FUN_00545280(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5)

{
  FUN_00544fa0(param_1,*param_5,4,param_4,0x44000000);
  FUN_00544fa0(param_1,*param_5 + 2,4,param_4,0x44000000);
  FUN_00544fa0(param_1,*param_5 + 4,4,param_4,0x44000000);
  FUN_00544fa0(param_1,*param_5 + 6,4,param_4,0x44000000);
  *param_5 = *param_5 + param_4 * 8;
  return;
}

