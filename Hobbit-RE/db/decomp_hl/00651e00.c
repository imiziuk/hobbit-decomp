
void __thiscall FUN_00651e00(int *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  uVar3 = param_2 + 0x17U & 0xfffffff0;
  if ((*(int *)(iVar1 + -8) < (int)uVar3) || (*(int *)(iVar1 + -4) < (int)(uVar3 - 8))) {
    puVar2 = (uint *)thunk_FUN_0064ffa0(iVar1 + -8,uVar3,s_C__projects_meridian_xCore_x_fil_0074d220
                                        ,0x52);
    *param_1 = (int)(puVar2 + 2);
    *puVar2 = uVar3;
  }
  return;
}

