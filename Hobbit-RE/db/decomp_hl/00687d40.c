
bool FUN_00687d40(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_00680ec0(param_1,param_3,param_4);
  FUN_006c19b1(*(undefined4 *)(param_1 + 0xc),param_4,0);
  iVar1 = FUN_006c1761(param_2,1,param_3,*(undefined4 *)(param_1 + 0xc));
  FUN_00687da0(iVar1 == param_3,*(undefined4 *)(param_1 + 0x20));
  return iVar1 == param_3;
}

