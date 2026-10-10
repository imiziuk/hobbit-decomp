
void __thiscall FUN_004f1f10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d5ff8;
  local_c = ExceptionList;
  iVar2 = param_2 * 0x20;
  ExceptionList = &local_c;
  uVar3 = FUN_005496c0((&PTR_s_awareness_xbmp_0072f2f4)[param_2],&PTR_LAB_0072f7bc);
  iVar4 = FUN_00652870(uVar3);
  if (iVar4 == 0) {
    FUN_00649920(&param_2,s_Error_loading_Meter___s__0072f7a0,
                 (&PTR_s_awareness_xbmp_0072f2f4)[iVar1]);
    local_4 = 0;
    FUN_00649940();
    local_4 = 0xffffffff;
    FUN_00649950();
    ExceptionList = local_c;
    return;
  }
  FUN_00674c70(iVar2 + 0x14 + param_1);
  ExceptionList = local_c;
  return;
}

