
void __fastcall FUN_00651f60(int *param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  uVar3 = *(int *)(iVar1 + -4) + 0x18U & 0xfffffff0;
  if (*(int *)(iVar1 + -8) < (int)uVar3) {
    puVar2 = (uint *)thunk_FUN_0064ffa0(iVar1 + -8,uVar3,s_C__projects_meridian_xCore_x_fil_0074d388
                                        ,0xa2);
    *param_1 = (int)(puVar2 + 2);
    *puVar2 = uVar3;
  }
  return;
}

