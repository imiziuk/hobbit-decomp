
int * __thiscall FUN_00651ed0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  iVar1 = FUN_00651f40();
  uVar3 = iVar1 + 0x17U & 0xfffffff0;
  puVar2 = (uint *)thunk_FUN_0064ff70(uVar3,s_C__projects_meridian_xCore_x_fil_0074d2f8,0x7c);
  *param_1 = (int)(puVar2 + 2);
  *puVar2 = uVar3;
  *(int *)(*param_1 + -4) = iVar1;
  FUN_00648480(*param_1,*param_2,iVar1);
  return param_1;
}

